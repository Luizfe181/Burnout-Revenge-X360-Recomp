#include "xenos_backend.h"
#include "d3d11_backend.h"

#include <cstdio>

namespace burnout::backend {

namespace {

D3D11Backend* host_backend = nullptr;

bool ReadRegister(
    const XenosDrawState& state,
    uint32_t index,
    uint32_t& value) {

    if(!state.registers || index >= state.register_count) {
        return false;
    }

    value = state.registers[index];
    return true;
}

bool DecodeRenderState(
    const XenosDrawState& draw,
    XenosRenderState& state) {

    return
        ReadRegister(draw, 0x2000, state.rb_surface_info) &&
        ReadRegister(draw, 0x2001, state.rb_color_info) &&
        ReadRegister(draw, 0x2002, state.rb_depth_info) &&

        ReadRegister(draw, 0x2104, state.rb_color_mask) &&
        ReadRegister(draw, 0x2200, state.rb_depth_control) &&
        ReadRegister(draw, 0x2201, state.rb_mode_control) &&

        ReadRegister(draw, 0x2318, state.rb_copy_control) &&
        ReadRegister(draw, 0x2319, state.rb_copy_dest_base) &&
        ReadRegister(draw, 0x231A, state.rb_copy_dest_pitch) &&
        ReadRegister(draw, 0x231B, state.rb_copy_dest_info);
}

} // namespace

bool XenosBackendInitialize(D3D11Backend* d3d11) {
    if(!d3d11) {
        std::printf(
            "[XENOS BACKEND] initialization failed: null D3D11 backend\n"
        );
        return false;
    }

    if(!d3d11->GetDevice() || !d3d11->GetContext()) {
        std::printf(
            "[XENOS BACKEND] initialization failed: "
            "D3D11 device/context unavailable\n"
        );
        return false;
    }

    host_backend = d3d11;

    std::printf(
        "[XENOS BACKEND] attached to D3D11 backend "
        "feature_level=0x%04X\n",
        static_cast<unsigned int>(d3d11->GetFeatureLevel())
    );

    return true;
}

void XenosBackendShutdown() {
    if(!host_backend) {
        return;
    }

    host_backend = nullptr;

    std::printf(
        "[XENOS BACKEND] detached from D3D11 backend\n"
    );
}

bool XenosBackendSubmitDraw(const XenosDrawState& draw) {
    if(!host_backend ||
       !host_backend->GetDevice() ||
       !host_backend->GetContext()) {

        std::printf(
            "[XENOS BACKEND] rejected draw %u: "
            "D3D11 backend unavailable\n",
            draw.draw_number
        );

        return false;
    }

    XenosRenderState state{};

    if(!DecodeRenderState(draw, state)) {
        std::printf(
            "[XENOS BACKEND] rejected draw %u: invalid register state\n",
            draw.draw_number
        );

        return false;
    }

    std::printf(
        "[XENOS BACKEND] DRAW #%u initiator=%08X\n",
        draw.draw_number,
        draw.initiator
    );

    std::printf(
        "[XENOS BACKEND] RT surface=%08X color=%08X mask=%08X "
        "depth=%08X depthctl=%08X mode=%08X\n",
        state.rb_surface_info,
        state.rb_color_info,
        state.rb_color_mask,
        state.rb_depth_info,
        state.rb_depth_control,
        state.rb_mode_control
    );

    std::printf(
        "[XENOS BACKEND] COPY control=%08X dest=%08X "
        "pitch=%08X info=%08X\n",
        state.rb_copy_control,
        state.rb_copy_dest_base,
        state.rb_copy_dest_pitch,
        state.rb_copy_dest_info
    );

    std::printf(
        "[XENOS BACKEND] SHADERS VS=%zu dwords PS=%zu dwords\n",
        draw.vertex_shader_dwords,
        draw.pixel_shader_dwords
    );

    // A fronteira real agora e:
    //
    // Xenos CP
    //   -> XenosDrawState
    //   -> XenosBackend
    //   -> D3D11Backend Device/Context
    //
    // Ainda nao emitir Draw().
    return false;
}

} // namespace burnout::backend