#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CLEARPERCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1C5D6BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDDLSSPRODUCEHUDLESSTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1C5D6B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDFSRPRODUCEHUDLESSTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1C5D6BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1C5D6AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_DECALHEIGHTMAPDISABLE_OFFSET UNITYSDK_OFFSET(0x1C5D6CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_INDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x1C5D1290)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TEMPENABLEOPAQUEOBJECTSCENELUT_OFFSET UNITYSDK_OFFSET(0x1C5D6C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1C5D6B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5D6D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D6D40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderContext_TypeDefinitionIndex = 27798;

	class NapRenderContext : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::NapRenderContext** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderContext**)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x21A30);
		}
		static ::UnityEngine::Camera** StaticGet_s_CachedCameraMain()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x21A38);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableVFX_VOLUMETRIC_SHADOW()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C0);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_CharacterIgnisFatuusOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C1);
		}
		static ::System::Boolean* StaticGet_s_IsInGalgame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C2);
		}
		static ::System::Boolean* StaticGet_s_IsChessboardScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C3);
		}
		static ::System::Boolean* StaticGet_s_IsInBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C4);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_FxCharacterGhostFullScreenBlitOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C5);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableKodama()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C6);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableCubeMapArray()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C7);
		}
		static ::System::Single* StaticGet_s_CloudShadowIntensityMultiplier()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C8);
		}
		static ::System::Boolean* StaticGet_useFastPureUIPipeline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52CC);
		}
		static ::System::Boolean* StaticGet_s_IsInBlackCanvas()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52CD);
		}
		static ::System::Boolean* StaticGet_s_DisableMotionVectorMaskForTAAOnMobile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52CE);
		}
		static ::System::Boolean* StaticGet_s_ReleaseUnUsedLightMapAndCubeData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52CF);
		}
		static ::UnityEngine::Vector4* StaticGet_s_NapAvatarPosVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52D0);
		}
		static ::System::Boolean* StaticGet_s_PerCameraStateSpineOutlineMaskOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52E0);
		}
		static ::System::Boolean* StaticGet_s_IsInGacha()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52E1);
		}
		static ::System::Boolean* StaticGet_s_UseChessboard3DUIMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52E2);
		}
		// static const ::System::Boolean IsCGProject; // 0x0
		// static const ::UnityEngine::Rendering::Universal::SimulatingPlatform Platform; // 0x0
		::UnityEngine::Vector4 global_unity_SHAb; // 0x10
		::System::Int32 fsrHudlessProducedFrame; // 0x20
		::UnityEngine::Vector4 sceneEffectParams; // 0x24
		::UnityEngine::Vector4 global_unity_SHC; // 0x34
		::UnityEngine::Vector4 global_unity_SHBb; // 0x44
		::System::Single globalSpecialDamageTextureAlpha; // 0x54
		::System::Int32 suppressFrameGenCounter; // 0x58
		::System::Single uiBlurRadius; // 0x5C
		::System::Boolean ignoreTimeScale; // 0x60
		::System::Boolean muteCharacterLightTonemap; // 0x61
		::System::Boolean disableTaau; // 0x62
		::System::Single _TimeScale; // 0x64
		::UnityEngine::Vector4 global_unity_SHBg; // 0x68
		::System::Int32 dlssHudlessProducedFrame; // 0x78
		::UnityEngine::Vector4 global_unity_SHBr; // 0x7C
		::System::UInt32 uiBlurCounter; // 0x8C
		::UnityEngine::Vector4 global_unity_SHAg; // 0x90
		::UnityEngine::Vector4 avatarMainLightPosition; // 0xA0
		::UnityEngine::Vector4 global_unity_SHAr; // 0xB0
		::UnityEngine::Vector3 mainCharacterPos; // 0xC0

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
