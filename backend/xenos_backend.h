#pragma once

#include <cstddef>
#include <cstdint>

namespace burnout::backend {

struct XenosDrawState {
    uint32_t initiator = 0;
    uint32_t draw_number = 0;

    const uint32_t* registers = nullptr;
    std::size_t register_count = 0;

    const uint32_t* vertex_shader = nullptr;
    std::size_t vertex_shader_dwords = 0;

    const uint32_t* pixel_shader = nullptr;
    std::size_t pixel_shader_dwords = 0;
};

struct XenosRenderState {
    uint32_t rb_surface_info = 0;
    uint32_t rb_color_info = 0;
    uint32_t rb_depth_info = 0;

    uint32_t rb_color_mask = 0;
    uint32_t rb_depth_control = 0;
    uint32_t rb_mode_control = 0;

    uint32_t rb_copy_control = 0;
    uint32_t rb_copy_dest_base = 0;
    uint32_t rb_copy_dest_pitch = 0;
    uint32_t rb_copy_dest_info = 0;
};

class D3D11Backend;

bool XenosBackendInitialize(D3D11Backend* d3d11);
void XenosBackendShutdown();

bool XenosBackendSubmitDraw(const XenosDrawState& state);

} // namespace burnout::backend