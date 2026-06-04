#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Version; }
namespace System::IO { class MemoryStream; }
namespace System::IO { class Stream; }
namespace System::Net { class Cookie; }
namespace System::Net { class CookieCollection; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class ResponseStream; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_HTTPLISTENERRESPONSE_ADDHEADER_OFFSET UNITYSDK_OFFSET(0x1AF88B60)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x1AF88C90)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_2_OFFSET UNITYSDK_OFFSET(0x1AF81E00)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AF88B30)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_COOKIETOCLIENTSTRING_OFFSET UNITYSDK_OFFSET(0x1AF89820)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_FORMATHEADERS_OFFSET UNITYSDK_OFFSET(0x1AF89A50)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_CONTENTENCODING_OFFSET UNITYSDK_OFFSET(0x1AF81D70)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_FORCECLOSECHUNKED_OFFSET UNITYSDK_OFFSET(0x1AF88980)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1AF88A90)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_OUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x1AF88AA0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x1AF88AF0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_ISTOKEN_OFFSET UNITYSDK_OFFSET(0x1AF8A1B0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_QUOTEDSTRING_OFFSET UNITYSDK_OFFSET(0x1AF8A100)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_REDIRECT_OFFSET UNITYSDK_OFFSET(0x1AF88CD0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SENDHEADERS_OFFSET UNITYSDK_OFFSET(0x1AF88D00)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTLENGTH64_OFFSET UNITYSDK_OFFSET(0x1AF88990)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AF81530)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x1AF7E6A0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x1AF81420)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF88B00)
#define SYSTEM_NET_HTTPLISTENERRESPONSE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF8A2D0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF84E10)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerResponse_TypeDefinitionIndex = 2843;

	class HttpListenerResponse : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_tspecials()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerResponse_TypeDefinitionIndex)->GetStaticField(0x24FB0);
		}
		::System::Net::ResponseStream* output_stream; // 0x10
		::System::Net::CookieCollection* cookies; // 0x18
		::System::Net::HttpListenerContext* context; // 0x20
		::System::String* location; // 0x28
		::System::Net::WebHeaderCollection* headers; // 0x30
		::System::Version* version; // 0x38
		::System::String* status_description; // 0x40
		::System::Text::Encoding* content_encoding; // 0x48
		::System::Object* headers_lock; // 0x50
		::System::String* content_type; // 0x58
		::System::Int32 status_code; // 0x60
		::System::Int64 content_length; // 0x68
		::System::Boolean force_close_chunked; // 0x70
		::System::Boolean chunked; // 0x71
		::System::Boolean cl_set; // 0x72
		::System::Boolean keep_alive; // 0x73
		::System::Boolean HeadersSent; // 0x74
		::System::Boolean disposed; // 0x75

		::System::Void _ctor(::System::Net::HttpListenerContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE__CCTOR_OFFSET))();
		}

		::System::Boolean get_ForceCloseChunked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_FORCECLOSECHUNKED_OFFSET))(this);
		}

		::System::Text::Encoding* get_ContentEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_CONTENTENCODING_OFFSET))(this);
		}

		::System::Void set_ContentLength64(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTLENGTH64_OFFSET))(this, a1);
		}

		::System::Void set_ContentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_HEADERS_OFFSET))(this);
		}

		::System::IO::Stream* get_OutputStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_OUTPUTSTREAM_OFFSET))(this);
		}

		::System::Boolean get_SendChunked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_SENDCHUNKED_OFFSET))(this);
		}

		::System::Void set_SendChunked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_SENDCHUNKED_OFFSET))(this, a1);
		}

		::System::Void set_StatusCode(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_STATUSCODE_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHeader(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_ADDHEADER_OFFSET))(this, a1, a2);
		}

		::System::Void Close(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_OFFSET))(this, a1);
		}

		::System::Void Close_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_1_OFFSET))(this);
		}

		::System::Void Close_2(::Il2CppArray<::System::Byte>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_2_OFFSET))(this, a1, a2);
		}

		::System::Void Redirect(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_REDIRECT_OFFSET))(this, a1);
		}

		::System::Void SendHeaders(::System::Boolean a1, ::System::IO::MemoryStream* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SENDHEADERS_OFFSET))(this, a1, a2);
		}

		static ::System::String* FormatHeaders(::System::Net::WebHeaderCollection* a1)
		{
			return ((::System::String*(*)(::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_FORMATHEADERS_OFFSET))(a1);
		}

		static ::System::String* CookieToClientString(::System::Net::Cookie* a1)
		{
			return ((::System::String*(*)(::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_COOKIETOCLIENTSTRING_OFFSET))(a1);
		}

		static ::System::String* QuotedString(::System::Net::Cookie* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Net::Cookie*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_QUOTEDSTRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsToken(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_ISTOKEN_OFFSET))(a1);
		}
	};
}
