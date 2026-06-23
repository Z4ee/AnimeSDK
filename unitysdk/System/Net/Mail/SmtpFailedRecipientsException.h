#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/SmtpFailedRecipientException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B1C5540)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION_GET_INNEREXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x1B1C5530)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B1C5630)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1C5240)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B1C52D0)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B1C5370)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B1C5410)
#define SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C5170)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpFailedRecipientsException_TypeDefinitionIndex = 3605;

	class SmtpFailedRecipientsException : public ::System::Net::Mail::SmtpFailedRecipientException
	{
	public:
		::Il2CppArray<::System::Net::Mail::SmtpFailedRecipientException*>* innerExceptions; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::String* message, ::Il2CppArray<::System::Net::Mail::SmtpFailedRecipientException*>* innerExceptions)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Net::Mail::SmtpFailedRecipientException*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_3_OFFSET))(this, message, innerExceptions);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}

		::Il2CppArray<::System::Net::Mail::SmtpFailedRecipientException*>* get_InnerExceptions()
		{
			return ((::Il2CppArray<::System::Net::Mail::SmtpFailedRecipientException*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION_GET_INNEREXCEPTIONS_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPFAILEDRECIPIENTSEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
