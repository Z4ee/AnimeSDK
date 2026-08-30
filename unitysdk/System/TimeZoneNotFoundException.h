#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC70470)
#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BC64360)
#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC68750)

namespace System
{
	inline static constexpr unsigned int TimeZoneNotFoundException_TypeDefinitionIndex = 350;

	class TimeZoneNotFoundException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this);
		}
	};
}
