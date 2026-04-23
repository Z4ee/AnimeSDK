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

#define SYSTEM_NET_HTTPLISTENERRESPONSE_ADDHEADER_OFFSET UNITYSDK_OFFSET(0x1A1245E0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x1A124710)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_2_OFFSET UNITYSDK_OFFSET(0x1A11D520)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A1245B0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_COOKIETOCLIENTSTRING_OFFSET UNITYSDK_OFFSET(0x1A125280)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_FORMATHEADERS_OFFSET UNITYSDK_OFFSET(0x1A1254B0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_CONTENTENCODING_OFFSET UNITYSDK_OFFSET(0x1A11D490)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_FORCECLOSECHUNKED_OFFSET UNITYSDK_OFFSET(0x1A124400)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1A124510)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_OUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x1A124520)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x1A124570)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_ISTOKEN_OFFSET UNITYSDK_OFFSET(0x1A125CB0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_QUOTEDSTRING_OFFSET UNITYSDK_OFFSET(0x1A125C00)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_REDIRECT_OFFSET UNITYSDK_OFFSET(0x1A124750)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SENDHEADERS_OFFSET UNITYSDK_OFFSET(0x1A124780)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTLENGTH64_OFFSET UNITYSDK_OFFSET(0x1A124410)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A11CC50)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x1A119DE0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x1A11CB40)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A124580)
#define SYSTEM_NET_HTTPLISTENERRESPONSE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A125DD0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A120A20)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerResponse_TypeDefinitionIndex = 2843;

	class HttpListenerResponse : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_tspecials()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerResponse_TypeDefinitionIndex)->GetStaticField(0x13C70);
		}
		::System::Net::WebHeaderCollection* headers; // 0x10
		::System::Version* version; // 0x18
		::System::String* status_description; // 0x20
		::System::Object* headers_lock; // 0x28
		::System::String* location; // 0x30
		::System::Net::CookieCollection* cookies; // 0x38
		::System::Text::Encoding* content_encoding; // 0x40
		::System::Net::HttpListenerContext* context; // 0x48
		::System::String* content_type; // 0x50
		::System::Net::ResponseStream* output_stream; // 0x58
		::System::Int32 status_code; // 0x60
		::System::Boolean chunked; // 0x64
		::System::Boolean cl_set; // 0x65
		::System::Boolean keep_alive; // 0x66
		::System::Boolean HeadersSent; // 0x67
		::System::Int64 content_length; // 0x68
		::System::Boolean force_close_chunked; // 0x70
		::System::Boolean disposed; // 0x71

		::System::Void _ctor(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE__CTOR_OFFSET))(this, context);
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

		::System::Void set_ContentLength64(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTLENGTH64_OFFSET))(this, value);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTTYPE_OFFSET))(this, value);
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

		::System::Void set_SendChunked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_SENDCHUNKED_OFFSET))(this, value);
		}

		::System::Void set_StatusCode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_STATUSCODE_OFFSET))(this, value);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHeader(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_ADDHEADER_OFFSET))(this, name, value);
		}

		::System::Void Close(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_OFFSET))(this, force);
		}

		::System::Void Close_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_1_OFFSET))(this);
		}

		::System::Void Close_2(::Il2CppArray<::System::Byte>* responseEntity, ::System::Boolean willBlock)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_2_OFFSET))(this, responseEntity, willBlock);
		}

		::System::Void Redirect(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_REDIRECT_OFFSET))(this, url);
		}

		::System::Void SendHeaders(::System::Boolean closing, ::System::IO::MemoryStream* ms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SENDHEADERS_OFFSET))(this, closing, ms);
		}

		static ::System::String* FormatHeaders(::System::Net::WebHeaderCollection* headers)
		{
			return ((::System::String*(*)(::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_FORMATHEADERS_OFFSET))(headers);
		}

		static ::System::String* CookieToClientString(::System::Net::Cookie* cookie)
		{
			return ((::System::String*(*)(::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_COOKIETOCLIENTSTRING_OFFSET))(cookie);
		}

		static ::System::String* QuotedString(::System::Net::Cookie* cookie, ::System::String* value)
		{
			return ((::System::String*(*)(::System::Net::Cookie*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_QUOTEDSTRING_OFFSET))(cookie, value);
		}

		static ::System::Boolean IsToken(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_ISTOKEN_OFFSET))(value);
		}
	};
}
