#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C02F530)
#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C02F5C0)
#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C02F650)
#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02F470)

namespace System::Security::Authentication
{
	inline static constexpr unsigned int AuthenticationException_TypeDefinitionIndex = 3144;

	class AuthenticationException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_3_OFFSET))(this, serializationInfo, streamingContext);
		}
	};
}
