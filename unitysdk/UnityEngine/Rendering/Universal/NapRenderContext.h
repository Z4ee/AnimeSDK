#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CLEARPERCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x192A6AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x192A6A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_DECALHEIGHTMAPDISABLE_OFFSET UNITYSDK_OFFSET(0x192A6BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_INDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x192A1630)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TEMPENABLEOPAQUEOBJECTSCENELUT_OFFSET UNITYSDK_OFFSET(0x192A6B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x192A6AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x192A6C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x192A6C30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderContext_TypeDefinitionIndex = 29998;

	class NapRenderContext : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::NapRenderContext** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderContext**)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x23270);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_FxCharacterGhostFullScreenBlitOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59A0);
		}
		static ::System::Boolean* StaticGet_s_IsInBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59A1);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableKodama()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59A2);
		}
		static ::System::Single* StaticGet_s_CloudShadowIntensityMultiplier()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59A4);
		}
		static ::System::Boolean* StaticGet_s_IsChessboardScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59A8);
		}
		static ::System::Boolean* StaticGet_s_PerCameraStateSpineOutlineMaskOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59A9);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableVFX_VOLUMETRIC_SHADOW()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59AA);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_CharacterIgnisFatuusOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59AB);
		}
		static ::System::Boolean* StaticGet_useFastPureUIPipeline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59AC);
		}
		static ::System::Boolean* StaticGet_s_IsInGalgame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59AD);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableCubeMapArray()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59AE);
		}
		static ::System::Boolean* StaticGet_s_ReleaseUnUsedLightMapAndCubeData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59AF);
		}
		static ::System::Boolean* StaticGet_s_DisableMotionVectorMaskForTAAOnMobile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59B0);
		}
		static ::System::Boolean* StaticGet_s_IsInBlackCanvas()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59B1);
		}
		static ::System::Boolean* StaticGet_s_IsInGacha()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59B2);
		}
		static ::System::Boolean* StaticGet_s_UseChessboard3DUIMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x59B3);
		}
		// static const ::System::Boolean IsCGProject; // 0x0
		// static const ::UnityEngine::Rendering::Universal::SimulatingPlatform Platform; // 0x0
		::UnityEngine::Vector4 global_unity_SHBg; // 0x10
		::UnityEngine::Vector4 sceneEffectParams; // 0x20
		::UnityEngine::Vector3 mainCharacterPos; // 0x30
		::UnityEngine::Vector4 global_unity_SHBr; // 0x3C
		::System::Single uiBlurRadius; // 0x4C
		::UnityEngine::Vector4 global_unity_SHAb; // 0x50
		::System::Single _TimeScale; // 0x60
		::UnityEngine::Vector4 global_unity_SHAr; // 0x64
		::System::Boolean ignoreTimeScale; // 0x74
		::System::Boolean muteCharacterLightTonemap; // 0x75
		::System::Boolean disableTaau; // 0x76
		::UnityEngine::Vector4 global_unity_SHAg; // 0x78
		::UnityEngine::Vector4 global_unity_SHC; // 0x88
		::System::Single globalSpecialDamageTextureAlpha; // 0x98
		::UnityEngine::Vector4 avatarMainLightPosition; // 0x9C
		::UnityEngine::Vector4 global_unity_SHBb; // 0xAC
		::System::UInt32 uiBlurCounter; // 0xBC

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
