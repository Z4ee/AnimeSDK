#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_INVALIDDATAEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E2480)
#define SYSTEM_IO_INVALIDDATAEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E7E2510)
#define SYSTEM_IO_INVALIDDATAEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E7E25A0)
#define SYSTEM_IO_INVALIDDATAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E23C0)

namespace System::IO
{
	inline static constexpr unsigned int InvalidDataException_TypeDefinitionIndex = 3229;

	class InvalidDataException : public ::System::SystemException
	{
	public:
		// static const ::System::Int32 Result = 0x80131503; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_INVALIDDATAEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_INVALIDDATAEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_IO_INVALIDDATAEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_INVALIDDATAEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}
	};
}
