#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/AttachmentBase.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net::Mime { class ContentType; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_MAIL_LINKEDRESOURCE_CREATELINKEDRESOURCEFROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1DD1DA40)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE_CREATELINKEDRESOURCEFROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1DD1DC10)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE_CREATELINKEDRESOURCEFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1DD1D870)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE_GET_CONTENTLINK_OFFSET UNITYSDK_OFFSET(0x1DD1D850)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE_SET_CONTENTLINK_OFFSET UNITYSDK_OFFSET(0x1DD1D860)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD1D620)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DD1D690)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DD1D700)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DD1D770)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1DD1D7E0)
#define SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD1D5B0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int LinkedResource_TypeDefinitionIndex = 3585;

	class LinkedResource : public ::System::Net::Mail::AttachmentBase
	{
	public:
		::System::Uri* contentLink; // 0x30

		::System::Void _ctor(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_OFFSET))(this, fileName);
		}

		::System::Void _ctor_1(::System::String* fileName, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_1_OFFSET))(this, fileName, contentType);
		}

		::System::Void _ctor_2(::System::String* fileName, ::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_2_OFFSET))(this, fileName, mediaType);
		}

		::System::Void _ctor_3(::System::IO::Stream* contentStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_3_OFFSET))(this, contentStream);
		}

		::System::Void _ctor_4(::System::IO::Stream* contentStream, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_4_OFFSET))(this, contentStream, contentType);
		}

		::System::Void _ctor_5(::System::IO::Stream* contentStream, ::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE__CTOR_5_OFFSET))(this, contentStream, mediaType);
		}

		::System::Uri* get_ContentLink()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE_GET_CONTENTLINK_OFFSET))(this);
		}

		::System::Void set_ContentLink(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE_SET_CONTENTLINK_OFFSET))(this, value);
		}

		static ::System::Net::Mail::LinkedResource* CreateLinkedResourceFromString(::System::String* content)
		{
			return ((::System::Net::Mail::LinkedResource*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE_CREATELINKEDRESOURCEFROMSTRING_OFFSET))(content);
		}

		static ::System::Net::Mail::LinkedResource* CreateLinkedResourceFromString_1(::System::String* content, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Net::Mail::LinkedResource*(*)(::System::String*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE_CREATELINKEDRESOURCEFROMSTRING_1_OFFSET))(content, contentType);
		}

		static ::System::Net::Mail::LinkedResource* CreateLinkedResourceFromString_2(::System::String* content, ::System::Text::Encoding* contentEncoding, ::System::String* mediaType)
		{
			return ((::System::Net::Mail::LinkedResource*(*)(::System::String*, ::System::Text::Encoding*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCE_CREATELINKEDRESOURCEFROMSTRING_2_OFFSET))(content, contentEncoding, mediaType);
		}
	};
}
