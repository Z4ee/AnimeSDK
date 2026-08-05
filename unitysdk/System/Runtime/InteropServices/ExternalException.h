#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1DC01660)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC01670)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC01460)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DC014F0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DC01580)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DC01610)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC013A0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ExternalException_TypeDefinitionIndex = 1429;

	class ExternalException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_2_OFFSET))(this, message, inner);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Int32 errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_3_OFFSET))(this, message, errorCode);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_GET_ERRORCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_TOSTRING_OFFSET))(this);
		}
	};
}
