// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py using data from shaders/src/*
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// vk_internal_shaders_autogen.h:
//   Pre-generated shader library for the ANGLE Vulkan back-end.

#ifndef LIBANGLE_RENDERER_VULKAN_VK_INTERNAL_SHADERS_AUTOGEN_H_
#define LIBANGLE_RENDERER_VULKAN_VK_INTERNAL_SHADERS_AUTOGEN_H_

#include "libANGLE/renderer/vulkan/vk_utils.h"

namespace rx
{
namespace vk
{
namespace InternalShader
{
namespace BlitResolve_frag
{
enum flags
{
    kSrcIsArray = 0x00000001,
    kIsResolve  = 0x00000002,
};
enum Blit
{
    kBlitColorFloat   = 0x00000000,
    kBlitColorInt     = 0x00000004,
    kBlitColorUint    = 0x00000008,
    kBlitDepth        = 0x0000000C,
    kBlitStencil      = 0x00000010,
    kBlitDepthStencil = 0x00000014,
};
constexpr size_t kArrayLen = 0x00000018;
}  // namespace BlitResolve_frag

namespace BlitResolveStencilNoExport_comp
{
enum flags
{
    kSrcIsArray = 0x00000001,
    kIsResolve  = 0x00000002,
};
constexpr size_t kArrayLen = 0x00000004;
}  // namespace BlitResolveStencilNoExport_comp

namespace ConvertIndex_comp
{
enum flags
{
    kIsPrimitiveRestartEnabled = 0x00000001,
    kIsIndirect                = 0x00000002,
};
constexpr size_t kArrayLen = 0x00000004;
}  // namespace ConvertIndex_comp

namespace ConvertIndexIndirectLineLoop_comp
{
enum IndicesBitsWidth
{
    kIs8Bits  = 0x00000000,
    kIs16Bits = 0x00000001,
    kIs32Bits = 0x00000002,
};
constexpr size_t kArrayLen = 0x00000003;
}  // namespace ConvertIndexIndirectLineLoop_comp

namespace ConvertIndirectLineLoop_comp
{
constexpr size_t kArrayLen = 0x00000001;
}  // namespace ConvertIndirectLineLoop_comp

namespace ConvertVertex_comp
{
enum Conversion
{
    kSintToSint   = 0x00000000,
    kUintToUint   = 0x00000001,
    kSintToFloat  = 0x00000002,
    kUintToFloat  = 0x00000003,
    kSnormToFloat = 0x00000004,
    kUnormToFloat = 0x00000005,
    kFixedToFloat = 0x00000006,
    kFloatToFloat = 0x00000007,
};
constexpr size_t kArrayLen = 0x00000008;
}  // namespace ConvertVertex_comp

namespace CopyImageToBuffer_comp
{
enum SrcFormat
{
    kSrcIsFloat = 0x00000000,
};
enum SrcType
{
    kSrcIs2D = 0x00000000,
    kSrcIs3D = 0x00000001,
};
constexpr size_t kArrayLen = 0x00000002;
}  // namespace CopyImageToBuffer_comp

namespace EtcToBc_comp
{
enum OutputFormat
{
    kEtcRgba8ToBC3 = 0x00000000,
    kEtcRg11ToBC5  = 0x00000001,
};
constexpr size_t kArrayLen = 0x00000002;
}  // namespace EtcToBc_comp

namespace ExportStencil_frag
{
constexpr size_t kArrayLen = 0x00000001;
}  // namespace ExportStencil_frag

namespace FullScreenTri_vert
{
constexpr size_t kArrayLen = 0x00000001;
}  // namespace FullScreenTri_vert

namespace GenerateMipmap_comp
{
enum MaxSupportedDest
{
    kDestSize4 = 0x00000000,
    kDestSize6 = 0x00000001,
};
enum Format
{
    kIsRGBA8          = 0x00000000,
    kIsRGBA8_UseHalf  = 0x00000002,
    kIsRGBA16         = 0x00000004,
    kIsRGBA16_UseHalf = 0x00000006,
    kIsRGBA32F        = 0x00000008,
};
constexpr size_t kArrayLen = 0x0000000A;
}  // namespace GenerateMipmap_comp

namespace ImageClear_frag
{
enum flags
{
    kClearDepth = 0x00000001,
};
enum AttachmentIndex
{
    kAttachment0 = 0x00000000,
    kAttachment1 = 0x00000002,
    kAttachment2 = 0x00000004,
    kAttachment3 = 0x00000006,
    kAttachment4 = 0x00000008,
    kAttachment5 = 0x0000000A,
    kAttachment6 = 0x0000000C,
    kAttachment7 = 0x0000000E,
};
enum Format
{
    kIsFloat = 0x00000000,
    kIsSint  = 0x00000010,
    kIsUint  = 0x00000020,
};
constexpr size_t kArrayLen = 0x00000030;
}  // namespace ImageClear_frag

namespace ImageCopy_frag
{
enum DestFormat
{
    kDestIsFloat = 0x00000000,
    kDestIsSint  = 0x00000001,
    kDestIsUint  = 0x00000002,
};
enum SrcFormat
{
    kSrcIsFloat = 0x00000000,
    kSrcIsSint  = 0x00000004,
    kSrcIsUint  = 0x00000008,
};
enum SrcType
{
    kSrcIs2D      = 0x00000000,
    kSrcIs2DArray = 0x00000010,
    kSrcIs3D      = 0x00000020,
};
constexpr size_t kArrayLen = 0x0000002B;
}  // namespace ImageCopy_frag

namespace OverlayDraw_frag
{
constexpr size_t kArrayLen = 0x00000001;
}  // namespace OverlayDraw_frag

namespace OverlayDraw_vert
{
constexpr size_t kArrayLen = 0x00000001;
}  // namespace OverlayDraw_vert

}  // namespace InternalShader

class ShaderLibrary final : angle::NonCopyable
{
  public:
    ShaderLibrary();
    ~ShaderLibrary();

    void destroy(VkDevice device);

    angle::Result getBlitResolve_frag(Context *context,
                                      uint32_t shaderFlags,
                                      RefCounted<ShaderModule> **shaderOut);
    angle::Result getBlitResolveStencilNoExport_comp(Context *context,
                                                     uint32_t shaderFlags,
                                                     RefCounted<ShaderModule> **shaderOut);
    angle::Result getConvertIndex_comp(Context *context,
                                       uint32_t shaderFlags,
                                       RefCounted<ShaderModule> **shaderOut);
    angle::Result getConvertIndexIndirectLineLoop_comp(Context *context,
                                                       uint32_t shaderFlags,
                                                       RefCounted<ShaderModule> **shaderOut);
    angle::Result getConvertIndirectLineLoop_comp(Context *context,
                                                  uint32_t shaderFlags,
                                                  RefCounted<ShaderModule> **shaderOut);
    angle::Result getConvertVertex_comp(Context *context,
                                        uint32_t shaderFlags,
                                        RefCounted<ShaderModule> **shaderOut);
    angle::Result getCopyImageToBuffer_comp(Context *context,
                                            uint32_t shaderFlags,
                                            RefCounted<ShaderModule> **shaderOut);
    angle::Result getEtcToBc_comp(Context *context,
                                  uint32_t shaderFlags,
                                  RefCounted<ShaderModule> **shaderOut);
    angle::Result getExportStencil_frag(Context *context,
                                        uint32_t shaderFlags,
                                        RefCounted<ShaderModule> **shaderOut);
    angle::Result getFullScreenTri_vert(Context *context,
                                        uint32_t shaderFlags,
                                        RefCounted<ShaderModule> **shaderOut);
    angle::Result getGenerateMipmap_comp(Context *context,
                                         uint32_t shaderFlags,
                                         RefCounted<ShaderModule> **shaderOut);
    angle::Result getImageClear_frag(Context *context,
                                     uint32_t shaderFlags,
                                     RefCounted<ShaderModule> **shaderOut);
    angle::Result getImageCopy_frag(Context *context,
                                    uint32_t shaderFlags,
                                    RefCounted<ShaderModule> **shaderOut);
    angle::Result getOverlayDraw_frag(Context *context,
                                      uint32_t shaderFlags,
                                      RefCounted<ShaderModule> **shaderOut);
    angle::Result getOverlayDraw_vert(Context *context,
                                      uint32_t shaderFlags,
                                      RefCounted<ShaderModule> **shaderOut);

  private:
    RefCounted<ShaderModule> mBlitResolve_frag_shaders[InternalShader::BlitResolve_frag::kArrayLen];
    RefCounted<ShaderModule> mBlitResolveStencilNoExport_comp_shaders
        [InternalShader::BlitResolveStencilNoExport_comp::kArrayLen];
    RefCounted<ShaderModule>
        mConvertIndex_comp_shaders[InternalShader::ConvertIndex_comp::kArrayLen];
    RefCounted<ShaderModule> mConvertIndexIndirectLineLoop_comp_shaders
        [InternalShader::ConvertIndexIndirectLineLoop_comp::kArrayLen];
    RefCounted<ShaderModule> mConvertIndirectLineLoop_comp_shaders
        [InternalShader::ConvertIndirectLineLoop_comp::kArrayLen];
    RefCounted<ShaderModule>
        mConvertVertex_comp_shaders[InternalShader::ConvertVertex_comp::kArrayLen];
    RefCounted<ShaderModule>
        mCopyImageToBuffer_comp_shaders[InternalShader::CopyImageToBuffer_comp::kArrayLen];
    RefCounted<ShaderModule> mEtcToBc_comp_shaders[InternalShader::EtcToBc_comp::kArrayLen];
    RefCounted<ShaderModule>
        mExportStencil_frag_shaders[InternalShader::ExportStencil_frag::kArrayLen];
    RefCounted<ShaderModule>
        mFullScreenTri_vert_shaders[InternalShader::FullScreenTri_vert::kArrayLen];
    RefCounted<ShaderModule>
        mGenerateMipmap_comp_shaders[InternalShader::GenerateMipmap_comp::kArrayLen];
    RefCounted<ShaderModule> mImageClear_frag_shaders[InternalShader::ImageClear_frag::kArrayLen];
    RefCounted<ShaderModule> mImageCopy_frag_shaders[InternalShader::ImageCopy_frag::kArrayLen];
    RefCounted<ShaderModule> mOverlayDraw_frag_shaders[InternalShader::OverlayDraw_frag::kArrayLen];
    RefCounted<ShaderModule> mOverlayDraw_vert_shaders[InternalShader::OverlayDraw_vert::kArrayLen];
};
}  // namespace vk
}  // namespace rx

#endif  // LIBANGLE_RENDERER_VULKAN_VK_INTERNAL_SHADERS_AUTOGEN_H_
