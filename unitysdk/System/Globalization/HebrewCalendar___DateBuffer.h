#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR___DATEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E443EE0)

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewCalendar___DateBuffer_TypeDefinitionIndex = 729;

	class HebrewCalendar___DateBuffer : public ::System::Object
	{
	public:
		::System::Int32 month; // 0x10
		::System::Int32 day; // 0x14
		::System::Int32 year; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR___DATEBUFFER__CTOR_OFFSET))(this);
		}
	};
}
