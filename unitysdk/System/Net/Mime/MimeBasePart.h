#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::Net::Mime { class BaseWriter; }
namespace System::Net::Mime { class ContentDisposition; }
namespace System::Net::Mime { class ContentType; }
namespace System::Net::Mime { class HeaderCollection; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_MIME_MIMEBASEPART_BEGINSEND_OFFSET UNITYSDK_OFFSET(0x1DD21AB0)
#define SYSTEM_NET_MIME_MIMEBASEPART_DECODEENCODING_OFFSET UNITYSDK_OFFSET(0x1DD20980)
#define SYSTEM_NET_MIME_MIMEBASEPART_DECODEHEADERVALUE_OFFSET UNITYSDK_OFFSET(0x1DD20300)
#define SYSTEM_NET_MIME_MIMEBASEPART_ENCODEHEADERVALUE_1_OFFSET UNITYSDK_OFFSET(0x1DD1FE30)
#define SYSTEM_NET_MIME_MIMEBASEPART_ENCODEHEADERVALUE_OFFSET UNITYSDK_OFFSET(0x1DD1FE20)
#define SYSTEM_NET_MIME_MIMEBASEPART_ENDSEND_OFFSET UNITYSDK_OFFSET(0x1DD21B00)
#define SYSTEM_NET_MIME_MIMEBASEPART_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1DD20DD0)
#define SYSTEM_NET_MIME_MIMEBASEPART_GET_CONTENTLOCATION_OFFSET UNITYSDK_OFFSET(0x1DD212A0)
#define SYSTEM_NET_MIME_MIMEBASEPART_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD215F0)
#define SYSTEM_NET_MIME_MIMEBASEPART_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1DD20F00)
#define SYSTEM_NET_MIME_MIMEBASEPART_ISANSI_OFFSET UNITYSDK_OFFSET(0x1DD20BC0)
#define SYSTEM_NET_MIME_MIMEBASEPART_ISASCII_OFFSET UNITYSDK_OFFSET(0x1DD200C0)
#define SYSTEM_NET_MIME_MIMEBASEPART_PREPAREHEADERS_OFFSET UNITYSDK_OFFSET(0x1DD21760)
#define SYSTEM_NET_MIME_MIMEBASEPART_SEND_OFFSET UNITYSDK_OFFSET(0x1DD21A60)
#define SYSTEM_NET_MIME_MIMEBASEPART_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1DD21080)
#define SYSTEM_NET_MIME_MIMEBASEPART_SET_CONTENTLOCATION_OFFSET UNITYSDK_OFFSET(0x1DD213D0)
#define SYSTEM_NET_MIME_MIMEBASEPART_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD216A0)
#define SYSTEM_NET_MIME_MIMEBASEPART_SHOULDUSEBASE64ENCODING_OFFSET UNITYSDK_OFFSET(0x1DD1FB90)
#define SYSTEM_NET_MIME_MIMEBASEPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD1FB80)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MimeBasePart_TypeDefinitionIndex = 3618;

	class MimeBasePart : public ::System::Object
	{
	public:
		// static const ::System::String* defaultCharSet; // 0x0
		::System::Net::Mime::ContentType* contentType; // 0x10
		::System::Net::Mime::ContentDisposition* contentDisposition; // 0x18
		::System::Net::Mime::HeaderCollection* headers; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART__CTOR_OFFSET))(this);
		}

		static ::System::Boolean ShouldUseBase64Encoding(::System::Text::Encoding* encoding)
		{
			return ((::System::Boolean(*)(::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_SHOULDUSEBASE64ENCODING_OFFSET))(encoding);
		}

		static ::System::String* EncodeHeaderValue(::System::String* value, ::System::Text::Encoding* encoding, ::System::Boolean base64Encoding)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_ENCODEHEADERVALUE_OFFSET))(value, encoding, base64Encoding);
		}

		static ::System::String* EncodeHeaderValue_1(::System::String* value, ::System::Text::Encoding* encoding, ::System::Boolean base64Encoding, ::System::Int32 headerLength)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_ENCODEHEADERVALUE_1_OFFSET))(value, encoding, base64Encoding, headerLength);
		}

		static ::System::String* DecodeHeaderValue(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_DECODEHEADERVALUE_OFFSET))(value);
		}

		static ::System::Text::Encoding* DecodeEncoding(::System::String* value)
		{
			return ((::System::Text::Encoding*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_DECODEENCODING_OFFSET))(value);
		}

		static ::System::Boolean IsAscii(::System::String* value, ::System::Boolean permitCROrLF)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_ISASCII_OFFSET))(value, permitCROrLF);
		}

		static ::System::Boolean IsAnsi(::System::String* value, ::System::Boolean permitCROrLF)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_ISANSI_OFFSET))(value, permitCROrLF);
		}

		::System::String* get_ContentID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_SET_CONTENTID_OFFSET))(this, value);
		}

		::System::String* get_ContentLocation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_GET_CONTENTLOCATION_OFFSET))(this);
		}

		::System::Void set_ContentLocation(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_SET_CONTENTLOCATION_OFFSET))(this, value);
		}

		::System::Collections::Specialized::NameValueCollection* get_Headers()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_GET_HEADERS_OFFSET))(this);
		}

		::System::Net::Mime::ContentType* get_ContentType()
		{
			return ((::System::Net::Mime::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::Net::Mime::ContentType* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::Void PrepareHeaders(::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_PREPAREHEADERS_OFFSET))(this, allowUnicode);
		}

		::System::Void Send(::System::Net::Mime::BaseWriter* writer, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::BaseWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_SEND_OFFSET))(this, writer, allowUnicode);
		}

		::System::IAsyncResult* BeginSend(::System::Net::Mime::BaseWriter* writer, ::System::AsyncCallback* callback, ::System::Boolean allowUnicode, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::Mime::BaseWriter*, ::System::AsyncCallback*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_BEGINSEND_OFFSET))(this, writer, callback, allowUnicode, state);
		}

		::System::Void EndSend(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_ENDSEND_OFFSET))(this, asyncResult);
		}
	};
}
