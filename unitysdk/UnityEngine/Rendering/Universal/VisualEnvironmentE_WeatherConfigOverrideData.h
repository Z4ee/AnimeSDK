#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherConfigDataType.h"

namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERCONFIGOVERRIDEDATA_GETISVALID_OFFSET UNITYSDK_OFFSET(0x1DE18730)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERCONFIGOVERRIDEDATA_SETISVALID_OFFSET UNITYSDK_OFFSET(0x1DE186E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERCONFIGOVERRIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE18770)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_WeatherConfigOverrideData_TypeDefinitionIndex = 27448;

	class VisualEnvironmentE_WeatherConfigOverrideData : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* configSO; // 0x10
		::System::Single weight; // 0x18
		::System::Int32 priority; // 0x1C
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigDataType dataType; // 0x20
		::System::Boolean isValid; // 0x24

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
