#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_WEATHERCONFIGKEYPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D60E890)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherGroupScriptableObject_WeatherConfigKeyPath_TypeDefinitionIndex = 27241;

	class WeatherGroupScriptableObject_WeatherConfigKeyPath : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::String* WeatherSOPath; // 0x18
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* WeatherSO; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_WEATHERCONFIGKEYPATH__CTOR_OFFSET))(this);
		}
	};
}
