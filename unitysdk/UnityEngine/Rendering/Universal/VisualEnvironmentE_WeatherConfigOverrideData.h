#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherConfigDataType.h"

namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERCONFIGOVERRIDEDATA_GETISVALID_OFFSET UNITYSDK_OFFSET(0x1A711390)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERCONFIGOVERRIDEDATA_SETISVALID_OFFSET UNITYSDK_OFFSET(0x1A711340)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERCONFIGOVERRIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7113D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_WeatherConfigOverrideData_TypeDefinitionIndex = 29918;

	class VisualEnvironmentE_WeatherConfigOverrideData : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* configSO; // 0x10
		::System::Int32 priority; // 0x18
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigDataType dataType; // 0x1C
		::System::Boolean isValid; // 0x20
		::System::Single weight; // 0x24

		::System::Void _ctor(::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* so, ::System::Single w, ::System::Int32 p, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigDataType type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*, ::System::Single, ::System::Int32, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigDataType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERCONFIGOVERRIDEDATA__CTOR_OFFSET))(this, so, w, p, type);
		}

		::System::Void SetIsValid(::System::Boolean valid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERCONFIGOVERRIDEDATA_SETISVALID_OFFSET))(this, valid);
		}

		::System::Boolean GetIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERCONFIGOVERRIDEDATA_GETISVALID_OFFSET))(this);
		}
	};
}
