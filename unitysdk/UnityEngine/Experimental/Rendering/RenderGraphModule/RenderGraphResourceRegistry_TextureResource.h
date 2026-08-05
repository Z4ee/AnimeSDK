#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/TextureDesc.h"

namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE_RESET_OFFSET UNITYSDK_OFFSET(0x967540)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x967400)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x967300)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResourceRegistry_TextureResource_TypeDefinitionIndex = 18660;

	struct alignas(8) RenderGraphResourceRegistry_TextureResource
	{
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc desc; // 0x10
		::System::Boolean imported; // 0x80
		::UnityEngine::NAPRenderPipeline0::RTHandle* rt; // 0x88
		::System::Int32 cachedHash; // 0x90
		::System::Int32 firstWritePassIndex; // 0x94
		::System::Int32 lastReadPassIndex; // 0x98
		::System::Int32 shaderProperty; // 0x9C
		::System::Boolean wasReleased; // 0xA0

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RTHandle* rt, ::System::Int32 shaderProperty)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE__CTOR_OFFSET))(this, rt, shaderProperty);
		}

		::System::Void _ctor_1(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& desc, ::System::Int32 shaderProperty)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE__CTOR_1_OFFSET))(this, desc, shaderProperty);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE_RESET_OFFSET))(this);
		}
	};
}
