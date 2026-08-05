#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/AttachmentBase.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Mime { class ContentDisposition; }
namespace System::Net::Mime { class ContentType; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_MAIL_ATTACHMENT_CREATEATTACHMENTFROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1DEC2020)
#define SYSTEM_NET_MAIL_ATTACHMENT_CREATEATTACHMENTFROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1DEC2400)
#define SYSTEM_NET_MAIL_ATTACHMENT_CREATEATTACHMENTFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC1DA0)
#define SYSTEM_NET_MAIL_ATTACHMENT_GET_CONTENTDISPOSITION_OFFSET UNITYSDK_OFFSET(0x1DEC1930)
#define SYSTEM_NET_MAIL_ATTACHMENT_GET_NAMEENCODING_OFFSET UNITYSDK_OFFSET(0x1DEC1D80)
#define SYSTEM_NET_MAIL_ATTACHMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DEC1940)
#define SYSTEM_NET_MAIL_ATTACHMENT_INITNAME_OFFSET UNITYSDK_OFFSET(0x1DEC1560)
#define SYSTEM_NET_MAIL_ATTACHMENT_SET_NAMEENCODING_OFFSET UNITYSDK_OFFSET(0x1DEC1D90)
#define SYSTEM_NET_MAIL_ATTACHMENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1DEC1860)
#define SYSTEM_NET_MAIL_ATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC15F0)
#define SYSTEM_NET_MAIL_ATTACHMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DEC1690)
#define SYSTEM_NET_MAIL_ATTACHMENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DEC1730)
#define SYSTEM_NET_MAIL_ATTACHMENT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DEC17C0)
#define SYSTEM_NET_MAIL_ATTACHMENT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1DEC1880)
#define SYSTEM_NET_MAIL_ATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC14D0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int Attachment_TypeDefinitionIndex = 3580;

	class Attachment : public ::System::Net::Mail::AttachmentBase
	{
	public:
		::System::Text::Encoding* nameEncoding; // 0x30
		::System::Net::Mime::ContentDisposition* contentDisposition; // 0x38

		::System::Void _ctor(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT__CTOR_OFFSET))(this, fileName);
		}

		::System::Void _ctor_1(::System::String* fileName, ::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT__CTOR_1_OFFSET))(this, fileName, mediaType);
		}

		::System::Void _ctor_2(::System::String* fileName, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT__CTOR_2_OFFSET))(this, fileName, contentType);
		}

		::System::Void _ctor_3(::System::IO::Stream* contentStream, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT__CTOR_3_OFFSET))(this, contentStream, contentType);
		}

		::System::Void _ctor_4(::System::IO::Stream* contentStream, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT__CTOR_4_OFFSET))(this, contentStream, name);
		}

		::System::Void _ctor_5(::System::IO::Stream* contentStream, ::System::String* name, ::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT__CTOR_5_OFFSET))(this, contentStream, name, mediaType);
		}

		::System::Net::Mime::ContentDisposition* get_ContentDisposition()
		{
			return ((::System::Net::Mime::ContentDisposition*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT_GET_CONTENTDISPOSITION_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT_SET_NAME_OFFSET))(this, value);
		}

		::System::Text::Encoding* get_NameEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT_GET_NAMEENCODING_OFFSET))(this);
		}

		::System::Void set_NameEncoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT_SET_NAMEENCODING_OFFSET))(this, value);
		}

		static ::System::Net::Mail::Attachment* CreateAttachmentFromString(::System::String* content, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Net::Mail::Attachment*(*)(::System::String*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT_CREATEATTACHMENTFROMSTRING_OFFSET))(content, contentType);
		}

		static ::System::Net::Mail::Attachment* CreateAttachmentFromString_1(::System::String* content, ::System::String* name)
		{
			return ((::System::Net::Mail::Attachment*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT_CREATEATTACHMENTFROMSTRING_1_OFFSET))(content, name);
		}

		static ::System::Net::Mail::Attachment* CreateAttachmentFromString_2(::System::String* content, ::System::String* name, ::System::Text::Encoding* contentEncoding, ::System::String* mediaType)
		{
			return ((::System::Net::Mail::Attachment*(*)(::System::String*, ::System::String*, ::System::Text::Encoding*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT_CREATEATTACHMENTFROMSTRING_2_OFFSET))(content, name, contentEncoding, mediaType);
		}

		::System::Void InitName(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ATTACHMENT_INITNAME_OFFSET))(this, fileName);
		}
	};
}
