#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderFeatureFlag.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine { class Light; }
namespace UnityEngine::NAPRenderPipeline0 { class IDecalSystem; }
namespace UnityEngine::NAPRenderPipeline0 { class IDeferredReflectionSystem; }
namespace UnityEngine::NAPRenderPipeline0 { class IDynamicResolutionHandler; }
namespace UnityEngine::NAPRenderPipeline0 { class ILensFlareCommonSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class INapRenderEntityManager; }
namespace UnityEngine::NAPRenderPipeline0 { class IPerObjectShadowSystem; }
namespace UnityEngine::NAPRenderPipeline0 { class IUniversalRenderPipeilineAssetAccessor; }
namespace UnityEngine::NAPRenderPipeline0 { class IVisualEnvironmentE; }
namespace UnityEngine::NAPRenderPipeline0 { class SRPGlobalParameters; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumetricFogSystem_Base; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_CLEARRENDERFEATUREFLAGS_OFFSET UNITYSDK_OFFSET(0x1F349FC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETCAMERACOLORTARGET_OFFSET UNITYSDK_OFFSET(0x1F3473B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETCAMERADEPTHTARGET_OFFSET UNITYSDK_OFFSET(0x1F349F50)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETCURRENTVISUALENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1F34A280)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETHASDISTORTIONDRAWCALLS_OFFSET UNITYSDK_OFFSET(0x1F34A020)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETMAINLIGHTOBJECT_OFFSET UNITYSDK_OFFSET(0x1F34A060)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETPEROBJECTPASSNEEDDRAW_OFFSET UNITYSDK_OFFSET(0x1F3493C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETPREVIEWRUNTIMEDECAL_OFFSET UNITYSDK_OFFSET(0x1F34A030)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_ISCLIENTCGMODE_OFFSET UNITYSDK_OFFSET(0x1F349F40)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_ISRENDERFEATUREON_OFFSET UNITYSDK_OFFSET(0x1F349FD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETCAMERATARGETS_OFFSET UNITYSDK_OFFSET(0x1F349FA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETCURRENTVISUALENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1F34A220)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETMAINLIGHTOBJECT_OFFSET UNITYSDK_OFFSET(0x1F34A0C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETPEROBJECTPASSNEEDDRAW_OFFSET UNITYSDK_OFFSET(0x1F34A050)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETPREVIEWRUNTIMEDECAL_OFFSET UNITYSDK_OFFSET(0x1F34A040)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETUPRENDERFEATUREFLAG_OFFSET UNITYSDK_OFFSET(0x1F349FF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F349EC0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SRPGlobalStates_TypeDefinitionIndex = 6038;

	class SRPGlobalStates : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::VolumetricFogSystem_Base** StaticGet_g_VolumetricFogSystem()
		{
			return (::UnityEngine::NAPRenderPipeline0::VolumetricFogSystem_Base**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x4FC0);
		}
		static ::UnityEngine::NAPRenderPipeline0::INapRenderEntityManager** StaticGet_g_NapRenderEntityManager()
		{
			return (::UnityEngine::NAPRenderPipeline0::INapRenderEntityManager**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x4FC8);
		}
		static ::UnityEngine::NAPRenderPipeline0::IDecalSystem** StaticGet_g_DecalSystem()
		{
			return (::UnityEngine::NAPRenderPipeline0::IDecalSystem**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x4FD0);
		}
		static ::UnityEngine::NAPRenderPipeline0::SRPGlobalParameters** StaticGet_g_GLobalParameters()
		{
			return (::UnityEngine::NAPRenderPipeline0::SRPGlobalParameters**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x4FD8);
		}
		static ::UnityEngine::NAPRenderPipeline0::IDynamicResolutionHandler** StaticGet_g_DynamicResolutionHandler()
		{
			return (::UnityEngine::NAPRenderPipeline0::IDynamicResolutionHandler**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x4FE0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ILensFlareCommonSRP** StaticGet_g_LensFlareCommonSRP()
		{
			return (::UnityEngine::NAPRenderPipeline0::ILensFlareCommonSRP**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x4FE8);
		}
		static ::UnityEngine::NAPRenderPipeline0::IVisualEnvironmentE** StaticGet_m_CurrentVisualEnvironment()
		{
			return (::UnityEngine::NAPRenderPipeline0::IVisualEnvironmentE**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x4FF0);
		}
		static ::UnityEngine::Light** StaticGet_m_MainLightObject()
		{
			return (::UnityEngine::Light**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x4FF8);
		}
		static ::UnityEngine::NAPRenderPipeline0::IUniversalRenderPipeilineAssetAccessor** StaticGet_g_RenderPipelineAssetAccessor()
		{
			return (::UnityEngine::NAPRenderPipeline0::IUniversalRenderPipeilineAssetAccessor**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x5000);
		}
		static ::UnityEngine::NAPRenderPipeline0::IPerObjectShadowSystem** StaticGet_g_PerObjectShadowSystem()
		{
			return (::UnityEngine::NAPRenderPipeline0::IPerObjectShadowSystem**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x5008);
		}
		static ::UnityEngine::NAPRenderPipeline0::IDeferredReflectionSystem** StaticGet_g_DeferredReflectionSystem()
		{
			return (::UnityEngine::NAPRenderPipeline0::IDeferredReflectionSystem**)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x5010);
		}
		static ::System::Boolean* StaticGet_m_IsMobilePlatform()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalStates_TypeDefinitionIndex)->GetStaticField(0x2870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsClientCGMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_ISCLIENTCGMODE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier GetCameraColorTarget()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETCAMERACOLORTARGET_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier GetCameraDepthTarget()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETCAMERADEPTHTARGET_OFFSET))();
		}

		static ::System::Void SetCameraTargets(::UnityEngine::Rendering::RenderTargetIdentifier& colorTarget, ::UnityEngine::Rendering::RenderTargetIdentifier& depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETCAMERATARGETS_OFFSET))(colorTarget, depthTarget);
		}

		static ::System::Void ClearRenderFeatureFlags()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_CLEARRENDERFEATUREFLAGS_OFFSET))();
		}

		static ::System::Boolean IsRenderFeatureOn(::UnityEngine::NAPRenderPipeline0::RenderFeatureFlag mask)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::RenderFeatureFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_ISRENDERFEATUREON_OFFSET))(mask);
		}

		static ::System::Void SetupRenderFeatureFlag(::UnityEngine::NAPRenderPipeline0::RenderFeatureFlag mask, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RenderFeatureFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETUPRENDERFEATUREFLAG_OFFSET))(mask, isOn);
		}

		static ::System::Boolean GetHasDistortionDrawcalls()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETHASDISTORTIONDRAWCALLS_OFFSET))();
		}

		static ::System::Boolean GetPreviewRuntimeDecal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETPREVIEWRUNTIMEDECAL_OFFSET))();
		}

		static ::System::Void SetPreviewRuntimeDecal(::System::Boolean onOff)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETPREVIEWRUNTIMEDECAL_OFFSET))(onOff);
		}

		static ::System::Boolean GetPerObjectPassNeedDraw()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETPEROBJECTPASSNEEDDRAW_OFFSET))();
		}

		static ::System::Void SetPerObjectPassNeedDraw(::System::Boolean onOff)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETPEROBJECTPASSNEEDDRAW_OFFSET))(onOff);
		}

		static ::UnityEngine::Light* GetMainLightObject()
		{
			return ((::UnityEngine::Light*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETMAINLIGHTOBJECT_OFFSET))();
		}

		static ::System::Void SetMainLightObject(::UnityEngine::Light* light)
		{
			return ((::System::Void(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETMAINLIGHTOBJECT_OFFSET))(light);
		}

		static ::System::Void SetCurrentVisualEnvironment(::UnityEngine::NAPRenderPipeline0::IVisualEnvironmentE* env)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::IVisualEnvironmentE*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_SETCURRENTVISUALENVIRONMENT_OFFSET))(env);
		}

		static ::UnityEngine::NAPRenderPipeline0::IVisualEnvironmentE* GetCurrentVisualEnvironment()
		{
			return ((::UnityEngine::NAPRenderPipeline0::IVisualEnvironmentE*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALSTATES_GETCURRENTVISUALENVIRONMENT_OFFSET))();
		}
	};
}
