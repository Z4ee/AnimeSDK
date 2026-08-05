#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE88410)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CE884A0)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CE884F0)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE88390)

namespace System
{
	inline static constexpr unsigned int InvalidTimeZoneException_TypeDefinitionIndex = 278;

	class InvalidTimeZoneException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_OFFSET))(this, message);
		}

		::System::Void _ctor_1(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_1_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_3_OFFSET))(this);
		}
	};
}
