#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/DepthAccess.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceRegistry; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph_RenderPass; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { template <typename T> class RenderFunc_1; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x3A1B660)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A1B660)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ENABLEASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x3A1B640)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READTEXTURE_OFFSET UNITYSDK_OFFSET(0x3A1B600)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USECOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x3A1B5C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USEDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x3A1B5E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x3A1B630)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_WRITETEXTURE_OFFSET UNITYSDK_OFFSET(0x3A1B610)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1B670)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphBuilder_TypeDefinitionIndex = 34018;

	struct alignas(8) RenderGraphBuilder
	{
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass* m_RenderPass; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources; // 0x18
		::System::Boolean m_Disposed; // 0x20

		::System::Void _ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass* a1, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER__CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource UseColorBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource& a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USECOLORBUFFER_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource UseDepthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource& a1, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess a2)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource&, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USEDEPTHBUFFER_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource ReadTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READTEXTURE_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource WriteTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource& a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_WRITETEXTURE_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource UseRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USERENDERERLIST_OFFSET))(this, a1);
		}
		*/

		::System::Void EnableAsyncCompute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ENABLEASYNCCOMPUTE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_1_OFFSET))(this, a1);
		}
	};
}
