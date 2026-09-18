#include "d3d11_backend.h"

#include <cstdio>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")

namespace burnout::backend {

bool D3D11Backend::Initialize(
    HWND window,
    unsigned int width,
    unsigned int height) {

    if (!window || width == 0 || height == 0) {
        std::printf("[D3D11] Invalid window or dimensions.\n");
        return false;
    }

    width_ = width;
    height_ = height;

    constexpr D3D_FEATURE_LEVEL requested_levels[] = {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0
    };

    DXGI_SWAP_CHAIN_DESC swap_desc{};
    swap_desc.BufferDesc.Width = width;
    swap_desc.BufferDesc.Height = height;
    swap_desc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    swap_desc.BufferDesc.RefreshRate.Numerator = 60;
    swap_desc.BufferDesc.RefreshRate.Denominator = 1;

    swap_desc.SampleDesc.Count = 1;
    swap_desc.SampleDesc.Quality = 0;

    swap_desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    swap_desc.BufferCount = 2;
    swap_desc.OutputWindow = window;
    swap_desc.Windowed = TRUE;
    swap_desc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    swap_desc.Flags = 0;

    UINT flags = 0;

#ifdef _DEBUG
    flags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

    HRESULT hr = D3D11CreateDeviceAndSwapChain(
        nullptr,
        D3D_DRIVER_TYPE_HARDWARE,
        nullptr,
        flags,
        requested_levels,
        ARRAYSIZE(requested_levels),
        D3D11_SDK_VERSION,
        &swap_desc,
        swap_chain_.GetAddressOf(),
        device_.GetAddressOf(),
        &feature_level_,
        context_.GetAddressOf()
    );

#ifdef _DEBUG
    if (FAILED(hr)) {
        // Tenta novamente sem exigir o D3D11 Debug Layer.
        flags &= ~D3D11_CREATE_DEVICE_DEBUG;

        swap_chain_.Reset();
        device_.Reset();
        context_.Reset();

        hr = D3D11CreateDeviceAndSwapChain(
            nullptr,
            D3D_DRIVER_TYPE_HARDWARE,
            nullptr,
            flags,
            requested_levels,
            ARRAYSIZE(requested_levels),
            D3D11_SDK_VERSION,
            &swap_desc,
            swap_chain_.GetAddressOf(),
            device_.GetAddressOf(),
            &feature_level_,
            context_.GetAddressOf()
        );
    }
#endif

    if (FAILED(hr)) {
        std::printf(
            "[D3D11] Device/SwapChain creation failed: HRESULT=0x%08lX\n",
            static_cast<unsigned long>(hr)
        );

        Shutdown();
        return false;
    }

    if (!CreateRenderTarget()) {
        Shutdown();
        return false;
    }

    D3D11_VIEWPORT viewport{};
    viewport.TopLeftX = 0.0f;
    viewport.TopLeftY = 0.0f;
    viewport.Width = static_cast<float>(width_);
    viewport.Height = static_cast<float>(height_);
    viewport.MinDepth = 0.0f;
    viewport.MaxDepth = 1.0f;

    context_->RSSetViewports(1, &viewport);

    std::printf(
        "[D3D11] Device initialized. Feature level: 0x%04X\n",
        static_cast<unsigned int>(feature_level_)
    );

    std::printf(
        "[D3D11] SwapChain initialized: %ux%u\n",
        width_,
        height_
    );

    return true;
}

bool D3D11Backend::CreateRenderTarget() {
    Microsoft::WRL::ComPtr<ID3D11Texture2D> back_buffer;

    HRESULT hr = swap_chain_->GetBuffer(
        0,
        __uuidof(ID3D11Texture2D),
        reinterpret_cast<void**>(back_buffer.GetAddressOf())
    );

    if (FAILED(hr)) {
        std::printf(
            "[D3D11] GetBuffer failed: HRESULT=0x%08lX\n",
            static_cast<unsigned long>(hr)
        );
        return false;
    }

    hr = device_->CreateRenderTargetView(
        back_buffer.Get(),
        nullptr,
        render_target_.GetAddressOf()
    );

    if (FAILED(hr)) {
        std::printf(
            "[D3D11] CreateRenderTargetView failed: HRESULT=0x%08lX\n",
            static_cast<unsigned long>(hr)
        );
        return false;
    }

    return true;
}

void D3D11Backend::BeginFrame(
    float r,
    float g,
    float b,
    float a) {

    if (!context_ || !render_target_) {
        return;
    }

    ID3D11RenderTargetView* target = render_target_.Get();

    context_->OMSetRenderTargets(
        1,
        &target,
        nullptr
    );

    const float color[4] = {
        r, g, b, a
    };

    context_->ClearRenderTargetView(
        render_target_.Get(),
        color
    );
}

void D3D11Backend::Present(bool vsync) {
    if (!swap_chain_) {
        return;
    }

    const HRESULT hr = swap_chain_->Present(
        vsync ? 1 : 0,
        0
    );

    if (FAILED(hr)) {
        std::printf(
            "[D3D11] Present failed: HRESULT=0x%08lX\n",
            static_cast<unsigned long>(hr)
        );
    }
}

void D3D11Backend::Shutdown() {
    if (context_) {
        context_->ClearState();
        context_->Flush();
    }

    render_target_.Reset();
    swap_chain_.Reset();
    context_.Reset();
    device_.Reset();

    width_ = 0;
    height_ = 0;
    feature_level_ = D3D_FEATURE_LEVEL_9_1;
}

} // namespace burnout::backend