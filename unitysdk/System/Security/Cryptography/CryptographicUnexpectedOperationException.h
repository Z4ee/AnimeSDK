#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Cryptography/CryptographicException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A36660)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A3C320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3C280)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptographicUnexpectedOperationException_TypeDefinitionIndex = 1002;

	class CryptographicUnexpectedOperationException : public ::System::Security::Cryptography::CryptographicException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
