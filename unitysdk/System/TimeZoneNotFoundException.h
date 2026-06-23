#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB30E40)
#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CB30E90)
#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB30DB0)

namespace System
{
	inline static constexpr unsigned int TimeZoneNotFoundException_TypeDefinitionIndex = 338;

	class TimeZoneNotFoundException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this);
		}
	};
}
