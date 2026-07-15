#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B873720)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B873790)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B8737E0)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8736C0)

namespace System
{
	inline static constexpr unsigned int InvalidTimeZoneException_TypeDefinitionIndex = 290;

	class InvalidTimeZoneException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_3_OFFSET))(this);
		}
	};
}
