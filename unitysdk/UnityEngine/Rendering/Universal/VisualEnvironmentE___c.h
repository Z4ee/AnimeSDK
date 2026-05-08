#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE_WeatherConfigOverrideData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ACF070)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACF0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIGV2_B__401_0_OFFSET UNITYSDK_OFFSET(0x19ACF230)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIG_B__351_0_OFFSET UNITYSDK_OFFSET(0x19ACF1F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__TRYOVERRIDEWEATHERV2_B__403_0_OFFSET UNITYSDK_OFFSET(0x19ACF270)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__UPDATELIGHTNINGFX_B__251_0_OFFSET UNITYSDK_OFFSET(0x19ACF0C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE___c_TypeDefinitionIndex = 29919;

	class VisualEnvironmentE___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>** StaticGet___9__351_0()
		{
			return (::System::Comparison_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23DA0);
		}
		static ::System::Comparison_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>** StaticGet___9__401_0()
		{
			return (::System::Comparison_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23DA8);
		}
		static ::System::Predicate_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>** StaticGet___9__403_0()
		{
			return (::System::Predicate_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23DB0);
		}
		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::VisualEnvironmentE___c**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23DB8);
		}
		static ::System::Predicate_1<::UnityEngine::ParticleSystem*>** StaticGet___9__251_0()
		{
			return (::System::Predicate_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateLightningFx_b__251_0(::UnityEngine::ParticleSystem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__UPDATELIGHTNINGFX_B__251_0_OFFSET))(this, x);
		}

		::System::Int32 _SetOverrideWeatherConfig_b__351_0(::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>* x, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIG_B__351_0_OFFSET))(this, x, y);
		}

		::System::Int32 _SetOverrideWeatherConfigV2_b__401_0(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* x, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIGV2_B__401_0_OFFSET))(this, x, y);
		}

		::System::Boolean _TryOverrideWeatherV2_b__403_0(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* tempData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__TRYOVERRIDEWEATHERV2_B__403_0_OFFSET))(this, tempData);
		}
	};
}
