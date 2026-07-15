#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LightmapBakeType.h"
#include "unitysdk/UnityEngine/LightmapsMode.h"
#include "unitysdk/UnityEngine/MixedLightingMode.h"
#include "unitysdk/UnityEngine/Rendering/SupportedRenderingFeatures_LightmapMixedBakeModes.h"
#include "unitysdk/UnityEngine/Rendering/SupportedRenderingFeatures_ReflectionProbeModes.h"

#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_FALLBACKLIGHTMAPPERBYREF_OFFSET UNITYSDK_OFFSET(0x1BFACE10)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_FALLBACKMIXEDLIGHTINGMODEBYREF_OFFSET UNITYSDK_OFFSET(0x1BFAC7F0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1BFAC690)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_AUTOAMBIENTPROBEBAKING_OFFSET UNITYSDK_OFFSET(0x1BFAC7D0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_AUTODEFAULTREFLECTIONPROBEBAKING_OFFSET UNITYSDK_OFFSET(0x1BFAC7E0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_DEFAULTMIXEDLIGHTINGMODES_OFFSET UNITYSDK_OFFSET(0x1BFAC780)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ENLIGHTEN_OFFSET UNITYSDK_OFFSET(0x1BFAC7C0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_LIGHTMAPBAKETYPES_OFFSET UNITYSDK_OFFSET(0x1BFAC7A0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_LIGHTMAPSMODES_OFFSET UNITYSDK_OFFSET(0x1BFAC7B0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_MIXEDLIGHTINGMODES_OFFSET UNITYSDK_OFFSET(0x1BFAC790)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISAUTOAMBIENTPROBEBAKINGSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1BFACD70)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISAUTODEFAULTREFLECTIONPROBEBAKINGSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1BFACDC0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPBAKETYPESUPPORTEDBYREF_OFFSET UNITYSDK_OFFSET(0x1BFACB80)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPBAKETYPESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1BFACB40)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPPERSUPPORTEDBYREF_OFFSET UNITYSDK_OFFSET(0x1BFACD10)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPSMODESUPPORTEDBYREF_OFFSET UNITYSDK_OFFSET(0x1BFACCC0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISMIXEDLIGHTINGMODESUPPORTEDBYREF_OFFSET UNITYSDK_OFFSET(0x1BFACA00)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISMIXEDLIGHTINGMODESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1BFAC9C0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1BFA9670)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFACE20)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFA9630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SupportedRenderingFeatures_TypeDefinitionIndex = 4761;

	class SupportedRenderingFeatures : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::SupportedRenderingFeatures** StaticGet_s_Active()
		{
			return (::UnityEngine::Rendering::SupportedRenderingFeatures**)Il2CppClass::FromTypeDefinitionIndex(SupportedRenderingFeatures_TypeDefinitionIndex)->GetStaticField(0x39E10);
		}
		::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes _reflectionProbeModes_k__BackingField; // 0x10
		::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes _defaultMixedLightingModes_k__BackingField; // 0x14
		::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes _mixedLightingModes_k__BackingField; // 0x18
		::UnityEngine::LightmapBakeType _lightmapBakeTypes_k__BackingField; // 0x1C
		::UnityEngine::LightmapsMode _lightmapsModes_k__BackingField; // 0x20
		::System::Boolean _enlighten_k__BackingField; // 0x24
		::System::Boolean _lightProbeProxyVolumes_k__BackingField; // 0x25
		::System::Boolean _motionVectors_k__BackingField; // 0x26
		::System::Boolean _receiveShadows_k__BackingField; // 0x27
		::System::Boolean _reflectionProbes_k__BackingField; // 0x28
		::System::Boolean _rendererPriority_k__BackingField; // 0x29
		::System::Boolean _terrainDetailUnsupported_k__BackingField; // 0x2A
		::System::Boolean _overridesEnvironmentLighting_k__BackingField; // 0x2B
		::System::Boolean _overridesFog_k__BackingField; // 0x2C
		::System::Boolean _overridesOtherLightingSettings_k__BackingField; // 0x2D
		::System::Boolean _editableMaterialRenderQueue_k__BackingField; // 0x2E
		::System::Boolean _overridesLODBias_k__BackingField; // 0x2F
		::System::Boolean _overridesMaximumLODLevel_k__BackingField; // 0x30
		::System::Boolean _autoAmbientProbeBaking_k__BackingField; // 0x31
		::System::Boolean _autoDefaultReflectionProbeBaking_k__BackingField; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::SupportedRenderingFeatures* get_active()
		{
			return ((::UnityEngine::Rendering::SupportedRenderingFeatures*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ACTIVE_OFFSET))();
		}

		static ::System::Void set_active(::UnityEngine::Rendering::SupportedRenderingFeatures* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SupportedRenderingFeatures*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_SET_ACTIVE_OFFSET))(a1);
		}

		::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes get_defaultMixedLightingModes()
		{
			return ((::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_DEFAULTMIXEDLIGHTINGMODES_OFFSET))(this);
		}

		::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes get_mixedLightingModes()
		{
			return ((::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_MIXEDLIGHTINGMODES_OFFSET))(this);
		}

		::UnityEngine::LightmapBakeType get_lightmapBakeTypes()
		{
			return ((::UnityEngine::LightmapBakeType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_LIGHTMAPBAKETYPES_OFFSET))(this);
		}

		::UnityEngine::LightmapsMode get_lightmapsModes()
		{
			return ((::UnityEngine::LightmapsMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_LIGHTMAPSMODES_OFFSET))(this);
		}

		::System::Boolean get_enlighten()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ENLIGHTEN_OFFSET))(this);
		}

		::System::Boolean get_autoAmbientProbeBaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_AUTOAMBIENTPROBEBAKING_OFFSET))(this);
		}

		::System::Boolean get_autoDefaultReflectionProbeBaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_AUTODEFAULTREFLECTIONPROBEBAKING_OFFSET))(this);
		}

		static ::System::Void FallbackMixedLightingModeByRef(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_FALLBACKMIXEDLIGHTINGMODEBYREF_OFFSET))(a1);
		}

		static ::System::Boolean IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::MixedLightingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISMIXEDLIGHTINGMODESUPPORTED_OFFSET))(a1);
		}

		static ::System::Void IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::UnityEngine::MixedLightingMode, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISMIXEDLIGHTINGMODESUPPORTEDBYREF_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::LightmapBakeType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPBAKETYPESUPPORTED_OFFSET))(a1);
		}

		static ::System::Void IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::UnityEngine::LightmapBakeType, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPBAKETYPESUPPORTEDBYREF_OFFSET))(a1, a2);
		}

		static ::System::Void IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::UnityEngine::LightmapsMode, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPSMODESUPPORTEDBYREF_OFFSET))(a1, a2);
		}

		static ::System::Void IsLightmapperSupportedByRef(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPPERSUPPORTEDBYREF_OFFSET))(a1, a2);
		}

		static ::System::Void IsAutoAmbientProbeBakingSupported(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISAUTOAMBIENTPROBEBAKINGSUPPORTED_OFFSET))(a1);
		}

		static ::System::Void IsAutoDefaultReflectionProbeBakingSupported(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISAUTODEFAULTREFLECTIONPROBEBAKINGSUPPORTED_OFFSET))(a1);
		}

		static ::System::Void FallbackLightmapperByRef(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_FALLBACKLIGHTMAPPERBYREF_OFFSET))(a1);
		}
	};
}
