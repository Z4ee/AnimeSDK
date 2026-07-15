#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Rendering/BlendState.h"
#include "unitysdk/UnityEngine/Rendering/DepthState.h"
#include "unitysdk/UnityEngine/Rendering/RasterState.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"
#include "unitysdk/UnityEngine/WarmupQualityCategory.h"
#include "unitysdk/UnityEngine/WarmupSubpass.h"

namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int WarmupPipelineState_TypeDefinitionIndex = 4370;

	struct alignas(8) WarmupPipelineState
	{
		::UnityEngine::WarmupQualityCategory qualityCategory; // 0x10
		::System::Int32 qualityLevel; // 0x14
		::System::String* shaderName; // 0x18
		::System::Int32 subshaderIndex; // 0x20
		::System::Int32 passIndex; // 0x24
		::System::String* keywordStr; // 0x28
		::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>* colorRTFormats; // 0x30
		::UnityEngine::Experimental::Rendering::GraphicsFormat depthRTFormat; // 0x38
		::System::Int32 inputAttachmentIndex; // 0x3C
		::Il2CppArray<::System::Byte>* colorLoadAction; // 0x40
		::Il2CppArray<::System::Byte>* colorStoreAction; // 0x48
		::System::Byte depthLoadAction; // 0x50
		::System::Byte depthStoreAction; // 0x51
		::System::Byte stencilLoadAction; // 0x52
		::System::Byte stencilStoreAction; // 0x53
		::System::Int32 subpassIndex; // 0x54
		::Il2CppArray<::UnityEngine::WarmupSubpass>* subPasses; // 0x58
		::System::Int32 rpDepthStencilAttachment; // 0x60
		::UnityEngine::Rendering::BlendState blendState; // 0x64
		::UnityEngine::Rendering::RasterState rasterState; // 0xA8
		::UnityEngine::Rendering::DepthState depthState; // 0xB8
		::UnityEngine::Rendering::StencilState stencilState; // 0xBA
		::System::Int32 globalDepthBias; // 0xC8
		::System::Int32 globalSlopeBias; // 0xCC
		::System::Int32 depthBoundNear; // 0xD0
		::System::Int32 depthBoundFar; // 0xD4
		::Il2CppArray<::System::UInt32>* vertexChannels; // 0xD8
		::Il2CppArray<::System::UInt16>* vertexStreamStrides; // 0xE0
	};
}
