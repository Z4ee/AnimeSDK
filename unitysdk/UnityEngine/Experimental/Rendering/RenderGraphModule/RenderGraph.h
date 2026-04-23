#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphBuilder.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphContext.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphExecuteParams.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphMutableResource.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResource.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/TextureDesc.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RendererListDesc.h"
#include "unitysdk/UnityEngine/Rendering/MSAASamples.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphDebugParams; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphLogger; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphObjectPool; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceRegistry; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph_RenderPass; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class RTHandle; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1A2F67B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEARRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x1A2F8BC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x1A2F74B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1A2F70C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x1A2F6DD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A2F75D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETTEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x1A2F7390)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A2F61C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A2F61E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A2F6C40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGFRAMEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1A2F7D90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERERLISTSCREATION_OFFSET UNITYSDK_OFFSET(0x1A2F8470)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERPASSBEGIN_OFFSET UNITYSDK_OFFSET(0x1A2F86A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_POSTRENDERPASSEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A2F8A50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A2F8980)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSSETRENDERTARGETS_OFFSET UNITYSDK_OFFSET(0x1A2F8DE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x1A2F6C20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UNREGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x1A2F6C30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2FA8E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2F8C60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F6260)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraph_TypeDefinitionIndex = 33362;

	class RenderGraph : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_kMaxMRTCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderGraph_TypeDefinitionIndex)->GetStaticField(0x10F50);
		}
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_DebugParameters; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* m_RendererLists; // 0x18
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* m_RenderGraphPool; // 0x20
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources; // 0x28
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*>* m_RenderPasses; // 0x38

		::System::Void _ctor(::System::Boolean supportMSAA, ::UnityEngine::Rendering::MSAASamples initialSampleCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CTOR_OFFSET))(this, supportMSAA, initialSampleCount);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CCTOR_OFFSET))();
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_ENABLED_OFFSET))(this);
		}

		::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::Rendering::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_RTHANDLEPROPERTIES_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEANUP_OFFSET))(this);
		}

		::System::Void RegisterDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REGISTERDEBUG_OFFSET))(this);
		}

		::System::Void UnRegisterDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UNREGISTERDEBUG_OFFSET))(this);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource ImportTexture(::UnityEngine::Rendering::RTHandle* rt, ::System::Int32 shaderProperty)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTTEXTURE_OFFSET))(this, rt, shaderProperty);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource CreateTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc desc, ::System::Int32 shaderProperty)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_OFFSET))(this, desc, shaderProperty);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource CreateTexture_1(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& texture, ::System::Int32 shaderProperty)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_1_OFFSET))(this, texture, shaderProperty);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc GetTextureDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& texture)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETTEXTUREDESC_OFFSET))(this, texture);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource CreateRendererList(::UnityEngine::Experimental::Rendering::RendererListDesc& desc)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RendererListDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATERENDERERLIST_OFFSET))(this, desc);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecuteParams& parameters)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecuteParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTE_OFFSET))(this, renderContext, cmd, parameters);
		}

		::System::Void PreRenderPassSetRenderTargets(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*& pass, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext rgContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*&, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSSETRENDERTARGETS_OFFSET))(this, pass, rgContext);
		}

		::System::Void PreRenderPassExecute(::System::Int32 passIndex, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*& pass, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext rgContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*&, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSEXECUTE_OFFSET))(this, passIndex, pass, rgContext);
		}

		::System::Void PostRenderPassExecute(::System::Int32 passIndex, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*& pass, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext rgContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*&, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_POSTRENDERPASSEXECUTE_OFFSET))(this, passIndex, pass, rgContext);
		}

		::System::Void ClearRenderPasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEARRENDERPASSES_OFFSET))(this);
		}

		::System::Void LogFrameInformation(::System::Int32 renderingWidth, ::System::Int32 renderingHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGFRAMEINFORMATION_OFFSET))(this, renderingWidth, renderingHeight);
		}

		::System::Void LogRendererListsCreation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERERLISTSCREATION_OFFSET))(this);
		}

		::System::Void LogRenderPassBegin(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*& pass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERPASSBEGIN_OFFSET))(this, pass);
		}
	};
}
