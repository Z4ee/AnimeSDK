#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/DescriptionAttribute.h"

namespace System { class String; }

#define SYSTEM_TIMERS_TIMERSDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x18763810)
#define SYSTEM_TIMERS_TIMERSDESCRIPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x187637B0)

namespace System::Timers
{
	inline static constexpr unsigned int TimersDescriptionAttribute_TypeDefinitionIndex = 2483;

	class TimersDescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute
	{
	public:
		::System::Boolean replaced; // 0x18

		::System::Void _ctor(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMERSDESCRIPTIONATTRIBUTE__CTOR_OFFSET))(this, description);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMERSDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(this);
		}
	};
}
