#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphContext.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphMutableResource.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResource.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResourceRegistry_RendererListResource.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResourceRegistry_TextureResource.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/TextureDesc.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RendererList.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RendererListDesc.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MSAASamples.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphDebugParams; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphLogger; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandleSystem; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x191D4F00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x191D7CB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATEANDCLEARTEXTURESFORPASS_OFFSET UNITYSDK_OFFSET(0x191D9020)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLISTS_OFFSET UNITYSDK_OFFSET(0x191D7180)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x191D5FA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTUREFORPASS_OFFSET UNITYSDK_OFFSET(0x191DBF90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x191D5830)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERERLIST_OFFSET UNITYSDK_OFFSET(0x191DB980)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x191D48A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCEDESC_OFFSET UNITYSDK_OFFSET(0x191D5C80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCE_OFFSET UNITYSDK_OFFSET(0x191DBE80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x191D8BB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTTEXTURE_OFFSET UNITYSDK_OFFSET(0x191D5500)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGRESOURCES_OFFSET UNITYSDK_OFFSET(0x191DDEF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGTEXTURECREATION_OFFSET UNITYSDK_OFFSET(0x191DC890)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGTEXTURERELEASE_OFFSET UNITYSDK_OFFSET(0x191DD430)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_POSTRENDERPASSUNBINDGLOBALTEXTURES_OFFSET UNITYSDK_OFFSET(0x191D9650)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_PRERENDERPASSSETGLOBALTEXTURES_OFFSET UNITYSDK_OFFSET(0x191D95C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTUREFORPASS_OFFSET UNITYSDK_OFFSET(0x191DD340)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURERESOURCE_OFFSET UNITYSDK_OFFSET(0x191DD600)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURESFORPASS_OFFSET UNITYSDK_OFFSET(0x191D9AD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SETGLOBALTEXTURES_OFFSET UNITYSDK_OFFSET(0x191DCEA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SETRTHANDLEREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x191D6E10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TRYGETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x191DCD70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATETEXTUREFIRSTWRITE_OFFSET UNITYSDK_OFFSET(0x191DACF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATETEXTURELASTREAD_OFFSET UNITYSDK_OFFSET(0x191DAFE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATERENDERERLISTDESC_OFFSET UNITYSDK_OFFSET(0x191DBF10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATETEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x191DBD00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x191DE8C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x191D4CA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x191DBA40)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResourceRegistry_TypeDefinitionIndex = 9523;

	class RenderGraphResourceRegistry : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EmptyName()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(RenderGraphResourceRegistry_TypeDefinitionIndex)->GetStaticField(0x4140);
		}
		::UnityEngine::NAPRenderPipeline0::RTHandleSystem* m_RTHandleSystem; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::UnityEngine::NAPRenderPipeline0::RTHandle*>>* m_AllocatedTextures; // 0x18
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger; // 0x20
		::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RendererListResource>* m_RendererListResources; // 0x28
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_RenderGraphDebug; // 0x30
		::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource>* m_TextureResources; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::UnityEngine::NAPRenderPipeline0::RTHandle*>*>* m_TexturePool; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean supportMSAA, ::UnityEngine::NAPRenderPipeline0::MSAASamples initialSampleCount, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::MSAASamples, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CTOR_1_OFFSET))(this, supportMSAA, initialSampleCount, renderGraphDebug, logger);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CCTOR_OFFSET))();
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& handle)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURE_OFFSET))(this, handle);
		}

		::UnityEngine::Experimental::Rendering::RendererList GetRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& handle)
		{
			return ((::UnityEngine::Experimental::Rendering::RendererList(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERERLIST_OFFSET))(this, handle);
		}

		::System::Void SetRTHandleReferenceSize(::System::Int32 width, ::System::Int32 height, ::UnityEngine::NAPRenderPipeline0::MSAASamples msaaSamples)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SETRTHANDLEREFERENCESIZE_OFFSET))(this, width, height, msaaSamples);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandleProperties GetRTHandleProperties()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRTHANDLEPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource ImportTexture(::UnityEngine::NAPRenderPipeline0::RTHandle* rt, ::System::Int32 shaderProperty)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTTEXTURE_OFFSET))(this, rt, shaderProperty);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource CreateTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& desc, ::System::Int32 shaderProperty)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTURE_OFFSET))(this, desc, shaderProperty);
		}

		::System::Void UpdateTextureFirstWrite(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource tex, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATETEXTUREFIRSTWRITE_OFFSET))(this, tex, passIndex);
		}

		::System::Void UpdateTextureLastRead(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource tex, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATETEXTURELASTREAD_OFFSET))(this, tex, passIndex);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource& GetTextureResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource res)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource&(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCE_OFFSET))(this, res);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc GetTextureResourceDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource res)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCEDESC_OFFSET))(this, res);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource CreateRendererList(::UnityEngine::Experimental::Rendering::RendererListDesc& desc)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RendererListDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLIST_OFFSET))(this, desc);
		}

		::System::Void CreateAndClearTexturesForPass(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext rgContext, ::System::Int32 passIndex, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>* textures)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATEANDCLEARTEXTURESFORPASS_OFFSET))(this, rgContext, passIndex, textures);
		}

		::System::Void CreateTextureForPass(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource& resource)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTUREFORPASS_OFFSET))(this, resource);
		}

		::System::Void SetGlobalTextures(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext rgContext, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* textures, ::System::Boolean bindDummyTexture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SETGLOBALTEXTURES_OFFSET))(this, rgContext, textures, bindDummyTexture);
		}

		::System::Void PreRenderPassSetGlobalTextures(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext rgContext, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* textures)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_PRERENDERPASSSETGLOBALTEXTURES_OFFSET))(this, rgContext, textures);
		}

		::System::Void PostRenderPassUnbindGlobalTextures(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext rgContext, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* textures)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_POSTRENDERPASSUNBINDGLOBALTEXTURES_OFFSET))(this, rgContext, textures);
		}

		::System::Void ReleaseTexturesForPass(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext rgContext, ::System::Int32 passIndex, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* readTextures, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>* writtenTextures)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURESFORPASS_OFFSET))(this, rgContext, passIndex, readTextures, writtenTextures);
		}

		::System::Void ReleaseTextureForPass(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTUREFORPASS_OFFSET))(this, res);
		}

		::System::Void ReleaseTextureResource(::System::Int32 hash, ::UnityEngine::NAPRenderPipeline0::RTHandle* rt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURERESOURCE_OFFSET))(this, hash, rt);
		}

		::System::Void ValidateTextureDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATETEXTUREDESC_OFFSET))(this, desc);
		}

		::System::Void ValidateRendererListDesc(::UnityEngine::Experimental::Rendering::RendererListDesc& desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RendererListDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATERENDERERLISTDESC_OFFSET))(this, desc);
		}

		::System::Boolean TryGetRenderTarget(::System::Int32 hashCode, ::UnityEngine::NAPRenderPipeline0::RTHandle*& rt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::RTHandle*&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TRYGETRENDERTARGET_OFFSET))(this, hashCode, rt);
		}

		::System::Void CreateRendererLists(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* rendererLists)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLISTS_OFFSET))(this, rendererLists);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEAR_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEANUP_OFFSET))(this);
		}

		::System::Void LogTextureCreation(::UnityEngine::NAPRenderPipeline0::RTHandle* rt, ::System::Boolean cleared)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGTEXTURECREATION_OFFSET))(this, rt, cleared);
		}

		::System::Void LogTextureRelease(::UnityEngine::NAPRenderPipeline0::RTHandle* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGTEXTURERELEASE_OFFSET))(this, rt);
		}

		::System::Void LogResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGRESOURCES_OFFSET))(this);
		}
	};
}
