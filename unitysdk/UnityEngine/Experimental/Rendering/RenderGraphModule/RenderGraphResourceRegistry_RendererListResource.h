#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RendererList.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RendererListDesc.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RENDERERLISTRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x21091D0)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResourceRegistry_RendererListResource_TypeDefinitionIndex = 27754;

	struct alignas(8) RenderGraphResourceRegistry_RendererListResource
	{
		::UnityEngine::Experimental::Rendering::RendererListDesc desc; // 0x10
		::UnityEngine::Experimental::Rendering::RendererList rendererList; // 0xD0

		::System::Void _ctor(::UnityEngine::Experimental::Rendering::RendererListDesc& desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RendererListDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RENDERERLISTRESOURCE__CTOR_OFFSET))(this, desc);
		}
	};
}
