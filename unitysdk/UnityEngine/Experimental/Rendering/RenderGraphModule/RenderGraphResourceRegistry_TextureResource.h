#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/TextureDesc.h"

namespace UnityEngine::Rendering { class RTHandle; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE_RESET_OFFSET UNITYSDK_OFFSET(0x3BAF5A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BAF4F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x3BAF480)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResourceRegistry_TextureResource_TypeDefinitionIndex = 34797;

	struct alignas(8) RenderGraphResourceRegistry_TextureResource
	{
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc desc; // 0x10
		::System::Boolean imported; // 0x80
		::UnityEngine::Rendering::RTHandle* rt; // 0x88
		::System::Int32 cachedHash; // 0x90
		::System::Int32 firstWritePassIndex; // 0x94
		::System::Int32 lastReadPassIndex; // 0x98
		::System::Int32 shaderProperty; // 0x9C
		::System::Boolean wasReleased; // 0xA0

		::System::Void _ctor(::UnityEngine::Rendering::RTHandle* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURERESOURCE_RESET_OFFSET))(this);
		}
	};
}
