#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/DeliveryNotificationOptions.h"
#include "unitysdk/System/Net/Mail/MailPriority.h"
#include "unitysdk/System/Net/Mime/TransferEncoding.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::Net::Mail { class AlternateViewCollection; }
namespace System::Net::Mail { class AttachmentCollection; }
namespace System::Net::Mail { class MailAddress; }
namespace System::Net::Mail { class MailAddressCollection; }
namespace System::Net::Mime { class ContentType; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_MAIL_MAILMESSAGE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DD1F380)
#define SYSTEM_NET_MAIL_MAILMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD1F320)
#define SYSTEM_NET_MAIL_MAILMESSAGE_ENCODESUBJECTRFC2047_OFFSET UNITYSDK_OFFSET(0x1DD1F7C0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_ALTERNATEVIEWS_OFFSET UNITYSDK_OFFSET(0x1DD1EA20)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_ATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1DD1EA30)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_BCC_OFFSET UNITYSDK_OFFSET(0x1DD1EA40)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_BODYCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD1EB80)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_BODYENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1F030)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_BODYTRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1F050)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1DD1EA50)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_CC_OFFSET UNITYSDK_OFFSET(0x1DD1F100)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_CONTENTTRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1ECE0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_DELIVERYNOTIFICATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1DD1F110)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_FROM_OFFSET UNITYSDK_OFFSET(0x1DD1F130)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_HEADERSENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1F1A0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1DD1F150)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_ISBODYHTML_OFFSET UNITYSDK_OFFSET(0x1DD1F160)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1DD1F180)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_REPLYTOLIST_OFFSET UNITYSDK_OFFSET(0x1DD1F1C0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_REPLYTO_OFFSET UNITYSDK_OFFSET(0x1DD1F1D0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x1DD1F2C0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_SUBJECTENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1F2F0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x1DD1F2E0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_TO_OFFSET UNITYSDK_OFFSET(0x1DD1F310)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GET_UTF8UNMARKED_OFFSET UNITYSDK_OFFSET(0x1DD1F390)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GUESSENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1EA60)
#define SYSTEM_NET_MAIL_MAILMESSAGE_GUESSTRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1ED40)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_BODYENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1F040)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_BODYTRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1F0B0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_BODY_OFFSET UNITYSDK_OFFSET(0x1DD1E6E0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_DELIVERYNOTIFICATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1DD1F120)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_FROM_OFFSET UNITYSDK_OFFSET(0x1DD1F140)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_HEADERSENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1F1B0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_ISBODYHTML_OFFSET UNITYSDK_OFFSET(0x1DD1F170)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1DD1F190)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_REPLYTO_OFFSET UNITYSDK_OFFSET(0x1DD1F250)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x1DD1F2D0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_SUBJECTENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1F300)
#define SYSTEM_NET_MAIL_MAILMESSAGE_SET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x1DD1E8E0)
#define SYSTEM_NET_MAIL_MAILMESSAGE_TO2047_OFFSET UNITYSDK_OFFSET(0x1DD1F4B0)
#define SYSTEM_NET_MAIL_MAILMESSAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD1FAD0)
#define SYSTEM_NET_MAIL_MAILMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD1E070)
#define SYSTEM_NET_MAIL_MAILMESSAGE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DD1E110)
#define SYSTEM_NET_MAIL_MAILMESSAGE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DD1E350)
#define SYSTEM_NET_MAIL_MAILMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD1DD40)

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailMessage_TypeDefinitionIndex = 3589;

	class MailMessage : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_hex()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MailMessage_TypeDefinitionIndex)->GetStaticField(0x3090);
		}
		static ::System::Text::Encoding** StaticGet_utf8unmarked()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(MailMessage_TypeDefinitionIndex)->GetStaticField(0x3098);
		}
		::System::Net::Mail::MailAddressCollection* to; // 0x10
		::System::String* subject; // 0x18
		::System::Collections::Specialized::NameValueCollection* headers; // 0x20
		::System::Net::Mail::MailAddressCollection* bcc; // 0x28
		::System::String* body; // 0x30
		::System::Text::Encoding* subjectEncoding; // 0x38
		::System::Net::Mail::MailAddress* sender; // 0x40
		::System::Net::Mail::MailAddressCollection* cc; // 0x48
		::System::Net::Mail::MailAddressCollection* replyTo; // 0x50
		::System::Net::Mail::AttachmentCollection* attachments; // 0x58
		::System::Net::Mail::AlternateViewCollection* alternateViews; // 0x60
		::System::Text::Encoding* headersEncoding; // 0x68
		::System::Text::Encoding* bodyEncoding; // 0x70
		::System::Net::Mail::MailAddress* from; // 0x78
		::System::Net::Mail::MailPriority priority; // 0x80
		::System::Boolean isHtml; // 0x84
		::System::Net::Mail::DeliveryNotificationOptions deliveryNotificationOptions; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Mail::MailAddress* from, ::System::Net::Mail::MailAddress* to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailAddress*, ::System::Net::Mail::MailAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE__CTOR_1_OFFSET))(this, from, to);
		}

		::System::Void _ctor_2(::System::String* from, ::System::String* to)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE__CTOR_2_OFFSET))(this, from, to);
		}

		::System::Void _ctor_3(::System::String* from, ::System::String* to, ::System::String* subject, ::System::String* body)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE__CTOR_3_OFFSET))(this, from, to, subject, body);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE__CCTOR_OFFSET))();
		}

		::System::Net::Mail::AlternateViewCollection* get_AlternateViews()
		{
			return ((::System::Net::Mail::AlternateViewCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_ALTERNATEVIEWS_OFFSET))(this);
		}

		::System::Net::Mail::AttachmentCollection* get_Attachments()
		{
			return ((::System::Net::Mail::AttachmentCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_ATTACHMENTS_OFFSET))(this);
		}

		::System::Net::Mail::MailAddressCollection* get_Bcc()
		{
			return ((::System::Net::Mail::MailAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_BCC_OFFSET))(this);
		}

		::System::String* get_Body()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_BODY_OFFSET))(this);
		}

		::System::Void set_Body(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_BODY_OFFSET))(this, value);
		}

		::System::Net::Mime::ContentType* get_BodyContentType()
		{
			return ((::System::Net::Mime::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_BODYCONTENTTYPE_OFFSET))(this);
		}

		::System::Net::Mime::TransferEncoding get_ContentTransferEncoding()
		{
			return ((::System::Net::Mime::TransferEncoding(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_CONTENTTRANSFERENCODING_OFFSET))(this);
		}

		::System::Text::Encoding* get_BodyEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_BODYENCODING_OFFSET))(this);
		}

		::System::Void set_BodyEncoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_BODYENCODING_OFFSET))(this, value);
		}

		::System::Net::Mime::TransferEncoding get_BodyTransferEncoding()
		{
			return ((::System::Net::Mime::TransferEncoding(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_BODYTRANSFERENCODING_OFFSET))(this);
		}

		::System::Void set_BodyTransferEncoding(::System::Net::Mime::TransferEncoding value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::TransferEncoding))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_BODYTRANSFERENCODING_OFFSET))(this, value);
		}

		::System::Net::Mail::MailAddressCollection* get_CC()
		{
			return ((::System::Net::Mail::MailAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_CC_OFFSET))(this);
		}

		::System::Net::Mail::DeliveryNotificationOptions get_DeliveryNotificationOptions()
		{
			return ((::System::Net::Mail::DeliveryNotificationOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_DELIVERYNOTIFICATIONOPTIONS_OFFSET))(this);
		}

		::System::Void set_DeliveryNotificationOptions(::System::Net::Mail::DeliveryNotificationOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::DeliveryNotificationOptions))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_DELIVERYNOTIFICATIONOPTIONS_OFFSET))(this, value);
		}

		::System::Net::Mail::MailAddress* get_From()
		{
			return ((::System::Net::Mail::MailAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_FROM_OFFSET))(this);
		}

		::System::Void set_From(::System::Net::Mail::MailAddress* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_FROM_OFFSET))(this, value);
		}

		::System::Collections::Specialized::NameValueCollection* get_Headers()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_HEADERS_OFFSET))(this);
		}

		::System::Boolean get_IsBodyHtml()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_ISBODYHTML_OFFSET))(this);
		}

		::System::Void set_IsBodyHtml(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_ISBODYHTML_OFFSET))(this, value);
		}

		::System::Net::Mail::MailPriority get_Priority()
		{
			return ((::System::Net::Mail::MailPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Net::Mail::MailPriority value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailPriority))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Text::Encoding* get_HeadersEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_HEADERSENCODING_OFFSET))(this);
		}

		::System::Void set_HeadersEncoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_HEADERSENCODING_OFFSET))(this, value);
		}

		::System::Net::Mail::MailAddressCollection* get_ReplyToList()
		{
			return ((::System::Net::Mail::MailAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_REPLYTOLIST_OFFSET))(this);
		}

		::System::Net::Mail::MailAddress* get_ReplyTo()
		{
			return ((::System::Net::Mail::MailAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_REPLYTO_OFFSET))(this);
		}

		::System::Void set_ReplyTo(::System::Net::Mail::MailAddress* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_REPLYTO_OFFSET))(this, value);
		}

		::System::Net::Mail::MailAddress* get_Sender()
		{
			return ((::System::Net::Mail::MailAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_SENDER_OFFSET))(this);
		}

		::System::Void set_Sender(::System::Net::Mail::MailAddress* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_SENDER_OFFSET))(this, value);
		}

		::System::String* get_Subject()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_SUBJECT_OFFSET))(this);
		}

		::System::Void set_Subject(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_SUBJECT_OFFSET))(this, value);
		}

		::System::Text::Encoding* get_SubjectEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_SUBJECTENCODING_OFFSET))(this);
		}

		::System::Void set_SubjectEncoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_SET_SUBJECTENCODING_OFFSET))(this, value);
		}

		::System::Net::Mail::MailAddressCollection* get_To()
		{
			return ((::System::Net::Mail::MailAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_TO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Text::Encoding* GuessEncoding(::System::String* s)
		{
			return ((::System::Text::Encoding*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GUESSENCODING_OFFSET))(this, s);
		}

		static ::System::Net::Mime::TransferEncoding GuessTransferEncoding(::System::Text::Encoding* enc)
		{
			return ((::System::Net::Mime::TransferEncoding(*)(::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GUESSTRANSFERENCODING_OFFSET))(enc);
		}

		static ::System::String* To2047(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_TO2047_OFFSET))(bytes);
		}

		static ::System::String* EncodeSubjectRFC2047(::System::String* s, ::System::Text::Encoding* enc)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_ENCODESUBJECTRFC2047_OFFSET))(s, enc);
		}

		static ::System::Text::Encoding* get_UTF8Unmarked()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILMESSAGE_GET_UTF8UNMARKED_OFFSET))();
		}
	};
}
