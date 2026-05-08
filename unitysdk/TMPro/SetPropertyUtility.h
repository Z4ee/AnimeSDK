#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define TMPRO_SETPROPERTYUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1ADC5930)

namespace TMPro
{
	inline static constexpr unsigned int SetPropertyUtility_TypeDefinitionIndex = 37539;

	class SetPropertyUtility : public ::System::Object
	{
	public:
		static ::System::Boolean SetColor(::UnityEngine::Color& currentValue, ::UnityEngine::Color newValue)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_SETPROPERTYUTILITY_SETCOLOR_OFFSET))(currentValue, newValue);
		}
	};
}
