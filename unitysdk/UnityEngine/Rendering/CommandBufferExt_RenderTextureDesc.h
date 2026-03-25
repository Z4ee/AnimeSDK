#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/DepthBufferFormat.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureFlags.h"
#include "unitysdk/UnityEngine/Rendering/ShadowSamplingMode.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/VRTextureUsage.h"

namespace UnityEngine::Rendering { class GrowableBuffer; }

#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERTEXTUREDESC_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x210AE60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferExt_RenderTextureDesc_TypeDefinitionIndex = 27847;

	struct alignas(4) CommandBufferExt_RenderTextureDesc
	{
		::System::Int32 width; // 0x10
		::System::Int32 height; // 0x14
		::System::Int32 antiAliasing; // 0x18
		::System::Int32 volumeDepth; // 0x1C
		::System::Int32 mipCount; // 0x20
		::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat; // 0x24
		::UnityEngine::Experimental::Rendering::GraphicsFormat stencilFormat; // 0x28
		::UnityEngine::Rendering::DepthBufferFormat depthFormat; // 0x2C
		::UnityEngine::Rendering::TextureDimension dimension; // 0x30
		::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode; // 0x34
		::UnityEngine::VRTextureUsage vrUsage; // 0x38
		::UnityEngine::Rendering::RenderTextureFlags flags; // 0x3C
		::UnityEngine::RenderTextureMemoryless memoryless; // 0x40

		::System::Void Serialize(::UnityEngine::Rendering::GrowableBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GrowableBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERTEXTUREDESC_SERIALIZE_OFFSET))(this, buffer);
		}
	};
}
