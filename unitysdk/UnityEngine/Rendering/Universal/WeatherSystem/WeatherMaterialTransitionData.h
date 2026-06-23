#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/MatPropertyType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherMaterialTransitionType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89B5E0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WeatherMaterialTransitionData_TypeDefinitionIndex = 26986;

	class WeatherMaterialTransitionData : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::WeatherSystem::WeatherMaterialTransitionType weatherMaterialTransitionType; // 0x10
		::System::String* propertyName; // 0x18
		::UnityEngine::Rendering::Universal::WeatherSystem::MatPropertyType matPropertyType; // 0x20
		::System::Single transitionFloatValue; // 0x24
		::UnityEngine::Color transitionColorValue; // 0x28
		::UnityEngine::Vector4 transitionVectorValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITIONDATA__CTOR_OFFSET))(this);
		}
	};
}
