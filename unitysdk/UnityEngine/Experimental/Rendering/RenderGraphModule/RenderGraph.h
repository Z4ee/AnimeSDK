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
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MSAASamples.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphDebugParams; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphLogger; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphObjectPool; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceRegistry; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph_RenderPass; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEANUP_OFFSET UNITYSDK_OFFSET(0x191D4EB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEARRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x191D7C40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x191D5F40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_1_OFFSET UNITYSDK_OFFSET(0x191D5A60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x191D56C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x191D60A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETTEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x191D5D60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x191D4790)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x191D47B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTTEXTURE_OFFSET UNITYSDK_OFFSET(0x191D5470)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGFRAMEINFORMATION_OFFSET UNITYSDK_OFFSET(0x191D6E90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERERLISTSCREATION_OFFSET UNITYSDK_OFFSET(0x191D7430)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERPASSBEGIN_OFFSET UNITYSDK_OFFSET(0x191D75A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_POSTRENDERPASSEXECUTE_OFFSET UNITYSDK_OFFSET(0x191D79F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSEXECUTE_OFFSET UNITYSDK_OFFSET(0x191D7850)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSSETRENDERTARGETS_OFFSET UNITYSDK_OFFSET(0x191D7EC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x191D53F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UNREGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x191D5430)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x191DA680)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x191D7D70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x191D4930)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraph_TypeDefinitionIndex = 9509;

	class RenderGraph : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_kMaxMRTCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderGraph_TypeDefinitionIndex)->GetStaticField(0x4130);
		}
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* m_RendererLists; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*>* m_RenderPasses; // 0x20
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger; // 0x28
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* m_RenderGraphPool; // 0x30
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_DebugParameters; // 0x38

		::System::Void _ctor(::System::Boolean supportMSAA, ::UnityEngine::NAPRenderPipeline0::MSAASamples initialSampleCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH__CTOR_OFFSET))(this, supportMSAA, initialSampleCount);
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

		::UnityEngine::NAPRenderPipeline0::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_RTHANDLEPROPERTIES_OFFSET))(this);
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

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource ImportTexture(::UnityEngine::NAPRenderPipeline0::RTHandle* rt, ::System::Int32 shaderProperty)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTTEXTURE_OFFSET))(this, rt, shaderProperty);
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
