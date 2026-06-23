#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE_WeatherConfigOverrideData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDD7CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD7CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIGV2_B__408_0_OFFSET UNITYSDK_OFFSET(0x1BDD7E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIG_B__358_0_OFFSET UNITYSDK_OFFSET(0x1BDD7E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__TRYOVERRIDEWEATHERV2_B__410_0_OFFSET UNITYSDK_OFFSET(0x1BDD7EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__UPDATELIGHTNINGFX_B__258_0_OFFSET UNITYSDK_OFFSET(0x1BDD7D00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE___c_TypeDefinitionIndex = 26503;

	class VisualEnvironmentE___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>** StaticGet___9__358_0()
		{
			return (::System::Comparison_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x21590);
		}
		static ::System::Predicate_1<::UnityEngine::ParticleSystem*>** StaticGet___9__258_0()
		{
			return (::System::Predicate_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x21598);
		}
		static ::System::Predicate_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>** StaticGet___9__410_0()
		{
			return (::System::Predicate_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x215A0);
		}
		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::VisualEnvironmentE___c**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x215A8);
		}
		static ::System::Comparison_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>** StaticGet___9__408_0()
		{
			return (::System::Comparison_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x215B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateLightningFx_b__258_0(::UnityEngine::ParticleSystem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__UPDATELIGHTNINGFX_B__258_0_OFFSET))(this, x);
		}

		::System::Int32 _SetOverrideWeatherConfig_b__358_0(::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>* x, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIG_B__358_0_OFFSET))(this, x, y);
		}

		::System::Int32 _SetOverrideWeatherConfigV2_b__408_0(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* x, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIGV2_B__408_0_OFFSET))(this, x, y);
		}

		::System::Boolean _TryOverrideWeatherV2_b__410_0(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* tempData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__TRYOVERRIDEWEATHERV2_B__410_0_OFFSET))(this, tempData);
		}
	};
}
