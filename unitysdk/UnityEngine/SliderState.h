#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SLIDERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30B0A0)

namespace UnityEngine
{
	inline static constexpr unsigned int SliderState_TypeDefinitionIndex = 5239;

	class SliderState : public ::System::Object
	{
	public:
		::System::Single dragStartPos; // 0x10
		::System::Single dragStartValue; // 0x14
		::System::Boolean isDragging; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERSTATE__CTOR_OFFSET))(this);
		}
	};
}
