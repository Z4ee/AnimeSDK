#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WeatherPropertiesBase_1_TypeDefinitionIndex = 27653;

	template <typename T>
	class WeatherPropertiesBase_1 : public ::System::Object
	{
	public:
		::System::Boolean Override; // 0x0
		static T* StaticGet_s_LerpResult()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(WeatherPropertiesBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
