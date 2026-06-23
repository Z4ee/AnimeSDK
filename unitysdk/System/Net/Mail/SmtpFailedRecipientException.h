#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/SmtpException.h"
#include "unitysdk/System/Net/Mail/SmtpStatusCode.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C6D7690)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION_GET_FAILEDRECIPIENT_OFFSET UNITYSDK_OFFSET(0x1C6D7680)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C6D7780)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6D7280)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6D7310)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C6D73B0)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C6D7490)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1C6D7530)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1C6D75E0)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D71B0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpFailedRecipientException_TypeDefinitionIndex = 3604;

	class SmtpFailedRecipientException : public ::System::Net::Mail::SmtpException
	{
	public:
		::System::String* failedRecipient; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void _ctor_3(::System::Net::Mail::SmtpStatusCode statusCode, ::System::String* failedRecipient)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpStatusCode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_3_OFFSET))(this, statusCode, failedRecipient);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_4_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_5(::System::String* message, ::System::String* failedRecipient, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_5_OFFSET))(this, message, failedRecipient, innerException);
		}

		::System::Void _ctor_6(::System::Net::Mail::SmtpStatusCode statusCode, ::System::String* failedRecipient, ::System::String* serverResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpStatusCode, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION__CTOR_6_OFFSET))(this, statusCode, failedRecipient, serverResponse);
		}

		::System::String* get_FailedRecipient()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION_GET_FAILEDRECIPIENT_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}
	};
}
