#include "d3d11_backend.h"
#include "xenos_backend.h"
#include <Windows.h>
#include <cstdio>

using burnout::backend::D3D11Backend;
using burnout::backend::XenosBackendInitialize;
using burnout::backend::XenosBackendShutdown;

static LRESULT CALLBACK WindowProc(
    HWND hwnd,
    UINT message,
    WPARAM wparam,
    LPARAM lparam) {

    switch (message) {
    case WM_CLOSE:
        DestroyWindow(hwnd);
        return 0;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;

    default:
        return DefWindowProc(
            hwnd,
            message,
            wparam,
            lparam
        );
    }
}

int main() {
    std::printf("[TEST] Starting D3D11 visual backend...\n");

    HINSTANCE instance = GetModuleHandle(nullptr);

    const wchar_t* class_name =
        L"BurnoutRecompBackendWindow";

    WNDCLASSEXW wc{};
    wc.cbSize = sizeof(wc);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = instance;
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wc.lpszClassName = class_name;

    if (!RegisterClassExW(&wc)) {
        std::printf(
            "[TEST] RegisterClassExW failed: %lu\n",
            GetLastError()
        );
        return 1;
    }

    constexpr unsigned int width = 1280;
    constexpr unsigned int height = 720;

    RECT rect{
        0,
        0,
        static_cast<LONG>(width),
        static_cast<LONG>(height)
    };

    AdjustWindowRect(
        &rect,
        WS_OVERLAPPEDWINDOW,
        FALSE
    );

    HWND window = CreateWindowExW(
        0,
        class_name,
        L"Burnout Revenge X360 Recomp - D3D11 Backend",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        rect.right - rect.left,
        rect.bottom - rect.top,
        nullptr,
        nullptr,
        instance,
        nullptr
    );

    if (!window) {
        std::printf(
            "[TEST] CreateWindowExW failed: %lu\n",
            GetLastError()
        );

        UnregisterClassW(class_name, instance);
        return 1;
    }

    ShowWindow(window, SW_SHOW);
    UpdateWindow(window);

    D3D11Backend backend;

    if (!backend.Initialize(window, width, height)) {
        std::printf(
            "[TEST] D3D11 backend initialization FAILED.\n"
        );

        DestroyWindow(window);
        UnregisterClassW(class_name, instance);
        return 1;
    }
    if (!XenosBackendInitialize(&backend)) {
    std::printf(
        "[TEST] Xenos -> D3D11 bridge initialization FAILED.\n"
    );

    backend.Shutdown();
    DestroyWindow(window);
    UnregisterClassW(class_name, instance);
    return 1;
    }

    std::printf(
        "[TEST] Xenos -> D3D11 bridge connected.\n"
    );

    std::printf("[TEST] Visual backend running.\n");
    std::printf("[TEST] Close the window to exit.\n");

    MSG message{};
    bool running = true;

    while (running) {
        while (PeekMessage(
            &message,
            nullptr,
            0,
            0,
            PM_REMOVE)) {

            if (message.message == WM_QUIT) {
                running = false;
                break;
            }

            TranslateMessage(&message);
            DispatchMessage(&message);
        }

        if (!running) {
            break;
        }

        // Apenas um clear para provar que a GPU está
        // realmente escrevendo no backbuffer.
        backend.BeginFrame(
            0.08f,
            0.12f,
            0.20f,
            1.0f
        );

        backend.Present(true);
    }

    XenosBackendShutdown();
    backend.Shutdown();

    DestroyWindow(window);
    UnregisterClassW(class_name, instance);

    std::printf("[TEST] Shutdown OK.\n");

    return 0;
}