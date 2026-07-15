#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_TIMETYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A742620)
#define SYSTEM_TIMETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A742610)

namespace System
{
	inline static constexpr unsigned int TimeType_TypeDefinitionIndex = 433;

	class TimeType : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 Offset; // 0x18
		::System::Boolean IsDst; // 0x1C

		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMETYPE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMETYPE_TOSTRING_OFFSET))(this);
		}
	};
}
