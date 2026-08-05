#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/AttachmentBase.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net::Mail { class LinkedResourceCollection; }
namespace System::Net::Mime { class ContentType; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_MAIL_ALTERNATEVIEW_CREATEALTERNATEVIEWFROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E28ADA0)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW_CREATEALTERNATEVIEWFROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1E28B070)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW_CREATEALTERNATEVIEWFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1E28ABC0)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E28B320)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1E28AB90)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW_GET_LINKEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1E28ABB0)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW_SET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1E28ABA0)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E28A890)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E28A940)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E28A9F0)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1E28AA70)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1E28AB00)
#define SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E28A7E0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int AlternateView_TypeDefinitionIndex = 3578;

	class AlternateView : public ::System::Net::Mail::AttachmentBase
	{
	public:
		::System::Net::Mail::LinkedResourceCollection* linkedResources; // 0x30
		::System::Uri* baseUri; // 0x38

		::System::Void _ctor(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_OFFSET))(this, fileName);
		}

		::System::Void _ctor_1(::System::String* fileName, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_1_OFFSET))(this, fileName, contentType);
		}

		::System::Void _ctor_2(::System::String* fileName, ::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_2_OFFSET))(this, fileName, mediaType);
		}

		::System::Void _ctor_3(::System::IO::Stream* contentStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_3_OFFSET))(this, contentStream);
		}

		::System::Void _ctor_4(::System::IO::Stream* contentStream, ::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_4_OFFSET))(this, contentStream, mediaType);
		}

		::System::Void _ctor_5(::System::IO::Stream* contentStream, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW__CTOR_5_OFFSET))(this, contentStream, contentType);
		}

		::System::Uri* get_BaseUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW_GET_BASEURI_OFFSET))(this);
		}

		::System::Void set_BaseUri(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW_SET_BASEURI_OFFSET))(this, value);
		}

		::System::Net::Mail::LinkedResourceCollection* get_LinkedResources()
		{
			return ((::System::Net::Mail::LinkedResourceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW_GET_LINKEDRESOURCES_OFFSET))(this);
		}

		static ::System::Net::Mail::AlternateView* CreateAlternateViewFromString(::System::String* content)
		{
			return ((::System::Net::Mail::AlternateView*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW_CREATEALTERNATEVIEWFROMSTRING_OFFSET))(content);
		}

		static ::System::Net::Mail::AlternateView* CreateAlternateViewFromString_1(::System::String* content, ::System::Net::Mime::ContentType* contentType)
		{
			return ((::System::Net::Mail::AlternateView*(*)(::System::String*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW_CREATEALTERNATEVIEWFROMSTRING_1_OFFSET))(content, contentType);
		}

		static ::System::Net::Mail::AlternateView* CreateAlternateViewFromString_2(::System::String* content, ::System::Text::Encoding* contentEncoding, ::System::String* mediaType)
		{
			return ((::System::Net::Mail::AlternateView*(*)(::System::String*, ::System::Text::Encoding*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW_CREATEALTERNATEVIEWFROMSTRING_2_OFFSET))(content, contentEncoding, mediaType);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEW_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
