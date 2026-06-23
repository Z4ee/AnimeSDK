#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CLEARPERCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1B1A10D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDDLSSPRODUCEHUDLESSTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1B1A1030)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDFSRPRODUCEHUDLESSTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1B1A1080)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B1A0FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_DECALHEIGHTMAPDISABLE_OFFSET UNITYSDK_OFFSET(0x1B1A11C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_INDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x1B19BB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TEMPENABLEOPAQUEOBJECTSCENELUT_OFFSET UNITYSDK_OFFSET(0x1B1A1160)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B1A1020)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1A1260)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A1220)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderContext_TypeDefinitionIndex = 27044;

	class NapRenderContext : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::NapRenderContext** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderContext**)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x20980);
		}
		static ::System::Boolean* StaticGet_useFastPureUIPipeline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5460);
		}
		static ::System::Boolean* StaticGet_s_DisableMotionVectorMaskForTAAOnMobile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5461);
		}
		static ::System::Boolean* StaticGet_s_UseChessboard3DUIMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5462);
		}
		static ::System::Boolean* StaticGet_s_IsInBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5463);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableCubeMapArray()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5464);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_FxCharacterGhostFullScreenBlitOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5465);
		}
		static ::System::Boolean* StaticGet_s_IsInGacha()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5466);
		}
		static ::System::Boolean* StaticGet_s_ReleaseUnUsedLightMapAndCubeData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5467);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableKodama()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5468);
		}
		static ::System::Boolean* StaticGet_s_IsInBlackCanvas()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5469);
		}
		static ::System::Boolean* StaticGet_s_IsInGalgame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x546A);
		}
		static ::System::Boolean* StaticGet_s_PerCameraStateSpineOutlineMaskOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x546B);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableVFX_VOLUMETRIC_SHADOW()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x546C);
		}
		static ::System::Boolean* StaticGet_s_IsChessboardScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x546D);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_CharacterIgnisFatuusOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x546E);
		}
		static ::System::Single* StaticGet_s_CloudShadowIntensityMultiplier()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5470);
		}
		// static const ::System::Boolean IsCGProject; // 0x0
		// static const ::UnityEngine::Rendering::Universal::SimulatingPlatform Platform; // 0x0
		::UnityEngine::Vector4 global_unity_SHBg; // 0x10
		::UnityEngine::Vector4 sceneEffectParams; // 0x20
		::UnityEngine::Vector4 global_unity_SHAr; // 0x30
		::System::Single globalSpecialDamageTextureAlpha; // 0x40
		::UnityEngine::Vector4 global_unity_SHBb; // 0x44
		::System::Int32 suppressFrameGenCounter; // 0x54
		::UnityEngine::Vector3 mainCharacterPos; // 0x58
		::System::Int32 dlssHudlessProducedFrame; // 0x64
		::UnityEngine::Vector4 global_unity_SHBr; // 0x68
		::System::Int32 fsrHudlessProducedFrame; // 0x78
		::UnityEngine::Vector4 global_unity_SHAb; // 0x7C
		::UnityEngine::Vector4 avatarMainLightPosition; // 0x8C
		::UnityEngine::Vector4 global_unity_SHC; // 0x9C
		::UnityEngine::Vector4 global_unity_SHAg; // 0xAC
		::System::UInt32 uiBlurCounter; // 0xBC
		::System::Single uiBlurRadius; // 0xC0
		::System::Single _TimeScale; // 0xC4
		::System::Boolean ignoreTimeScale; // 0xC8
		::System::Boolean disableTaau; // 0xC9
		::System::Boolean muteCharacterLightTonemap; // 0xCA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CCTOR_OFFSET))();
		}

		::System::Single get_timeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_timeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TIMESCALE_OFFSET))(this, value);
		}

		::System::Boolean DidDlssProduceHudlessThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDDLSSPRODUCEHUDLESSTHISFRAME_OFFSET))(this);
		}

		::System::Boolean DidFsrProduceHudlessThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDFSRPRODUCEHUDLESSTHISFRAME_OFFSET))(this);
		}

		static ::System::Void ClearPerCameraState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CLEARPERCAMERASTATE_OFFSET))();
		}

		::System::Void set_indirectSpecularIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_INDIRECTSPECULARINTENSITY_OFFSET))(this, value);
		}

		::System::Void set_tempEnableOpaqueObjectSceneLut(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TEMPENABLEOPAQUEOBJECTSCENELUT_OFFSET))(this, value);
		}

		::System::Void set_decalHeightMapDisable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_DECALHEIGHTMAPDISABLE_OFFSET))(this, value);
		}
	};
}
