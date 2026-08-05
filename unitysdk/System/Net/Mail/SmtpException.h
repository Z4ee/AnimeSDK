#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Net/Mail/SmtpStatusCode.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_MAIL_SMTPEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D894BA0)
#define SYSTEM_NET_MAIL_SMTPEXCEPTION_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x1D894B80)
#define SYSTEM_NET_MAIL_SMTPEXCEPTION_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x1D894B90)
#define SYSTEM_NET_MAIL_SMTPEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D894C90)
#define SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8946F0)
#define SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D894850)
#define SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D8948E0)
#define SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D8947C0)
#define SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D894AE0)
#define SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D894620)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpException_TypeDefinitionIndex = 3603;

	class SmtpException : public ::System::Exception
	{
	public:
		::System::Net::Mail::SmtpStatusCode statusCode; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Mail::SmtpStatusCode statusCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_1_OFFSET))(this, statusCode);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_3_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_4(::System::Net::Mail::SmtpStatusCode statusCode, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpStatusCode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_4_OFFSET))(this, statusCode, message);
		}

		::System::Void _ctor_5(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION__CTOR_5_OFFSET))(this, message, innerException);
		}

		::System::Net::Mail::SmtpStatusCode get_StatusCode()
		{
			return ((::System::Net::Mail::SmtpStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION_GET_STATUSCODE_OFFSET))(this);
		}

		::System::Void set_StatusCode(::System::Net::Mail::SmtpStatusCode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION_SET_STATUSCODE_OFFSET))(this, value);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
