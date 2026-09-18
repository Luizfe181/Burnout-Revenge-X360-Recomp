#pragma once

#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <wrl/client.h>

namespace burnout::backend {

class D3D11Backend {
public:
    bool Initialize(HWND window, unsigned int width, unsigned int height);
    void Shutdown();

    void BeginFrame(float r, float g, float b, float a = 1.0f);
    void Present(bool vsync = true);

    ID3D11Device* GetDevice() const {
        return device_.Get();
    }

    ID3D11DeviceContext* GetContext() const {
        return context_.Get();
    }

    IDXGISwapChain* GetSwapChain() const {
        return swap_chain_.Get();
    }

    D3D_FEATURE_LEVEL GetFeatureLevel() const {
        return feature_level_;
    }

private:
    bool CreateRenderTarget();

    Microsoft::WRL::ComPtr<ID3D11Device> device_;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext> context_;
    Microsoft::WRL::ComPtr<IDXGISwapChain> swap_chain_;
    Microsoft::WRL::ComPtr<ID3D11RenderTargetView> render_target_;

    D3D_FEATURE_LEVEL feature_level_ = D3D_FEATURE_LEVEL_9_1;

    unsigned int width_ = 0;
    unsigned int height_ = 0;
};

} // namespace burnout::backend