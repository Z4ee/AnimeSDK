#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ReferenceVolumeParameter_1.h"

namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_WEATHERCONFIGSCRIPTABLEOBJECTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AF4F3C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_WEATHERCONFIGSCRIPTABLEOBJECTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AF4F3D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_WEATHERCONFIGSCRIPTABLEOBJECTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4F320)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXColorCorrection_WeatherConfigScriptableObjectParameter_TypeDefinitionIndex = 27341;

	class FXColorCorrection_WeatherConfigScriptableObjectParameter : public ::UnityEngine::NAPRenderPipeline0::ReferenceVolumeParameter_1<::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_WEATHERCONFIGSCRIPTABLEOBJECTPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* get_value()
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_WEATHERCONFIGSCRIPTABLEOBJECTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_WEATHERCONFIGSCRIPTABLEOBJECTPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
