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
#include "unitysdk/UnityEngine/Rendering/MSAASamples.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphDebugParams; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphLogger; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Rendering { class RTHandleSystem; }
namespace UnityEngine::Rendering { template <typename T> class DynamicArray_1; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1EBD4560)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EBD6F60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATEANDCLEARTEXTURESFORPASS_OFFSET UNITYSDK_OFFSET(0x1EBD79D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLISTS_OFFSET UNITYSDK_OFFSET(0x1EBD6270)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x1EBD5200)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTUREFORPASS_OFFSET UNITYSDK_OFFSET(0x1EBDAFC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x1EBD4C80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERERLIST_OFFSET UNITYSDK_OFFSET(0x1EBDAC10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EBD3FB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCEDESC_OFFSET UNITYSDK_OFFSET(0x1EBD4FE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCE_OFFSET UNITYSDK_OFFSET(0x1EBDAF30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EBD7670)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EBD4A00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGRESOURCES_OFFSET UNITYSDK_OFFSET(0x1EBDCC50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGTEXTURECREATION_OFFSET UNITYSDK_OFFSET(0x1EBDB8C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGTEXTURERELEASE_OFFSET UNITYSDK_OFFSET(0x1EBDC2C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_POSTRENDERPASSUNBINDGLOBALTEXTURES_OFFSET UNITYSDK_OFFSET(0x1EBD7DF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_PRERENDERPASSSETGLOBALTEXTURES_OFFSET UNITYSDK_OFFSET(0x1EBD7DC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTUREFORPASS_OFFSET UNITYSDK_OFFSET(0x1EBDC220)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURERESOURCE_OFFSET UNITYSDK_OFFSET(0x1EBDC660)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURESFORPASS_OFFSET UNITYSDK_OFFSET(0x1EBD8160)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SETGLOBALTEXTURES_OFFSET UNITYSDK_OFFSET(0x1EBDBEF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SETRTHANDLEREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1EBD5B50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TRYGETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1EBDBE40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATETEXTUREFIRSTWRITE_OFFSET UNITYSDK_OFFSET(0x1EBD9200)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATETEXTURELASTREAD_OFFSET UNITYSDK_OFFSET(0x1EBD9470)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATERENDERERLISTDESC_OFFSET UNITYSDK_OFFSET(0x1EBDAF80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATETEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x1EBDAE80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBDD800)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBD4330)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDAC70)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResourceRegistry_TypeDefinitionIndex = 34796;

	class RenderGraphResourceRegistry : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EmptyName()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(RenderGraphResourceRegistry_TypeDefinitionIndex)->GetStaticField(0x13750);
		}
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_RenderGraphDebug; // 0x10
		::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RendererListResource>* m_RendererListResources; // 0x18
		::UnityEngine::Rendering::RTHandleSystem* m_RTHandleSystem; // 0x20
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger; // 0x28
		::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource>* m_TextureResources; // 0x30
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::UnityEngine::Rendering::RTHandle*>>* m_AllocatedTextures; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RTHandle*>*>* m_TexturePool; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::UnityEngine::Rendering::MSAASamples a2, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* a3, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY__CCTOR_OFFSET))();
		}

		::UnityEngine::Rendering::RTHandle* GetTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& a1)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Experimental::Rendering::RendererList GetRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RendererList(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERERLIST_OFFSET))(this, a1);
		}

		::System::Void SetRTHandleReferenceSize(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Rendering::MSAASamples a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SETRTHANDLEREFERENCESIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rendering::RTHandleProperties GetRTHandleProperties()
		{
			return ((::UnityEngine::Rendering::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRTHANDLEPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource ImportTexture(::UnityEngine::Rendering::RTHandle* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTTEXTURE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource CreateTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateTextureFirstWrite(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATETEXTUREFIRSTWRITE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateTextureLastRead(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATETEXTURELASTREAD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource& GetTextureResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource&(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCE_OFFSET))(this, a1);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc GetTextureResourceDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCEDESC_OFFSET))(this, a1);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource CreateRendererList(::UnityEngine::Experimental::Rendering::RendererListDesc& a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RendererListDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLIST_OFFSET))(this, a1);
		}

		::System::Void CreateAndClearTexturesForPass(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATEANDCLEARTEXTURESFORPASS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CreateTextureForPass(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTUREFORPASS_OFFSET))(this, a1);
		}

		::System::Void SetGlobalTextures(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext a1, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SETGLOBALTEXTURES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PreRenderPassSetGlobalTextures(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext a1, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_PRERENDERPASSSETGLOBALTEXTURES_OFFSET))(this, a1, a2);
		}

		::System::Void PostRenderPassUnbindGlobalTextures(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext a1, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_POSTRENDERPASSUNBINDGLOBALTEXTURES_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseTexturesForPass(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURESFORPASS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReleaseTextureForPass(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTUREFORPASS_OFFSET))(this, a1);
		}

		::System::Void ReleaseTextureResource(::System::Int32 a1, ::UnityEngine::Rendering::RTHandle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURERESOURCE_OFFSET))(this, a1, a2);
		}

		::System::Void ValidateTextureDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATETEXTUREDESC_OFFSET))(this, a1);
		}

		::System::Void ValidateRendererListDesc(::UnityEngine::Experimental::Rendering::RendererListDesc& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RendererListDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATERENDERERLISTDESC_OFFSET))(this, a1);
		}

		::System::Boolean TryGetRenderTarget(::System::Int32 a1, ::UnityEngine::Rendering::RTHandle*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RTHandle*&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TRYGETRENDERTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void CreateRendererLists(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLISTS_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEAR_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEANUP_OFFSET))(this);
		}

		::System::Void LogTextureCreation(::UnityEngine::Rendering::RTHandle* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGTEXTURECREATION_OFFSET))(this, a1, a2);
		}

		::System::Void LogTextureRelease(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGTEXTURERELEASE_OFFSET))(this, a1);
		}

		::System::Void LogResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGRESOURCES_OFFSET))(this);
		}
	};
}
