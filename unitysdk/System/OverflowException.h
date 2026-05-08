#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArithmeticException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_OVERFLOWEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19548DD0)
#define SYSTEM_OVERFLOWEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19548E60)
#define SYSTEM_OVERFLOWEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19548EF0)
#define SYSTEM_OVERFLOWEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19548D10)

namespace System
{
	inline static constexpr unsigned int OverflowException_TypeDefinitionIndex = 301;

	class OverflowException : public ::System::ArithmeticException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OVERFLOWEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OVERFLOWEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_OVERFLOWEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OVERFLOWEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}
	};
}
