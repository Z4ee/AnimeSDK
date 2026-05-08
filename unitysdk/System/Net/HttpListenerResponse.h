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

#define SYSTEM_NET_HTTPLISTENERRESPONSE_ABORT_OFFSET UNITYSDK_OFFSET(0x19AF1E40)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_ADDHEADER_OFFSET UNITYSDK_OFFSET(0x19AF1E80)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_APPENDCOOKIE_OFFSET UNITYSDK_OFFSET(0x19AF1FB0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_APPENDHEADER_OFFSET UNITYSDK_OFFSET(0x19AF21B0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x19AF22E0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_2_OFFSET UNITYSDK_OFFSET(0x19AF0860)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x19AF1E10)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_COOKIETOCLIENTSTRING_OFFSET UNITYSDK_OFFSET(0x19AF3410)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x19AF2320)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_FINDCOOKIE_OFFSET UNITYSDK_OFFSET(0x19AF23F0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_FORMATHEADERS_OFFSET UNITYSDK_OFFSET(0x19AF3650)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_CONTENTENCODING_OFFSET UNITYSDK_OFFSET(0x19AF07A0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_CONTENTLENGTH64_OFFSET UNITYSDK_OFFSET(0x19AF1730)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x19AF1840)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_COOKIES_OFFSET UNITYSDK_OFFSET(0x19AF1850)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_FORCECLOSECHUNKED_OFFSET UNITYSDK_OFFSET(0x19AF1660)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x19AF1960)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x19AF1980)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_OUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x19AF1A50)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x19AF1AA0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_REDIRECTLOCATION_OFFSET UNITYSDK_OFFSET(0x19AF1CD0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x19AF1DA0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x19AF1DB0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_GET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19AF1DC0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_ISTOKEN_OFFSET UNITYSDK_OFFSET(0x19AF3960)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_QUOTEDSTRING_OFFSET UNITYSDK_OFFSET(0x19AF38B0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_REDIRECT_OFFSET UNITYSDK_OFFSET(0x19AF23C0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SENDHEADERS_OFFSET UNITYSDK_OFFSET(0x19AF2850)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SETCOOKIE_OFFSET UNITYSDK_OFFSET(0x19AF3AB0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTENCODING_OFFSET UNITYSDK_OFFSET(0x19AF1670)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTLENGTH64_OFFSET UNITYSDK_OFFSET(0x19AF1740)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x19AF06E0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_COOKIES_OFFSET UNITYSDK_OFFSET(0x19AF1950)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x19AF1970)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x19AF1990)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x19AF1AB0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_REDIRECTLOCATION_OFFSET UNITYSDK_OFFSET(0x19AF1CE0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x19AEF140)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x19AF05D0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19AF1DD0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AF1DE0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AF3CE0)
#define SYSTEM_NET_HTTPLISTENERRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AF3D20)
#define SYSTEM_NET_HTTPLISTENERRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF1510)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerResponse_TypeDefinitionIndex = 3531;

	class HttpListenerResponse : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_tspecials()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerResponse_TypeDefinitionIndex)->GetStaticField(0x2EA0);
		}
		::System::Net::WebHeaderCollection* headers; // 0x10
		::System::Text::Encoding* content_encoding; // 0x18
		::System::String* content_type; // 0x20
		::System::String* location; // 0x28
		::System::Net::HttpListenerContext* context; // 0x30
		::System::Object* headers_lock; // 0x38
		::System::Version* version; // 0x40
		::System::Net::CookieCollection* cookies; // 0x48
		::System::String* status_description; // 0x50
		::System::Net::ResponseStream* output_stream; // 0x58
		::System::Boolean chunked; // 0x60
		::System::Boolean disposed; // 0x61
		::System::Boolean force_close_chunked; // 0x62
		::System::Boolean HeadersSent; // 0x63
		::System::Int32 status_code; // 0x64
		::System::Boolean cl_set; // 0x68
		::System::Boolean keep_alive; // 0x69
		::System::Int64 content_length; // 0x70

		::System::Void _ctor(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE__CTOR_OFFSET))(this, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_ForceCloseChunked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_FORCECLOSECHUNKED_OFFSET))(this);
		}

		::System::Text::Encoding* get_ContentEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_CONTENTENCODING_OFFSET))(this);
		}

		::System::Void set_ContentEncoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTENCODING_OFFSET))(this, value);
		}

		::System::Int64 get_ContentLength64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_CONTENTLENGTH64_OFFSET))(this);
		}

		::System::Void set_ContentLength64(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTLENGTH64_OFFSET))(this, value);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::Net::CookieCollection* get_Cookies()
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_COOKIES_OFFSET))(this);
		}

		::System::Void set_Cookies(::System::Net::CookieCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_COOKIES_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_HEADERS_OFFSET))(this);
		}

		::System::Void set_Headers(::System::Net::WebHeaderCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_HEADERS_OFFSET))(this, value);
		}

		::System::Boolean get_KeepAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_KEEPALIVE_OFFSET))(this);
		}

		::System::Void set_KeepAlive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_KEEPALIVE_OFFSET))(this, value);
		}

		::System::IO::Stream* get_OutputStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_OUTPUTSTREAM_OFFSET))(this);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Void set_ProtocolVersion(::System::Version* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_PROTOCOLVERSION_OFFSET))(this, value);
		}

		::System::String* get_RedirectLocation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_REDIRECTLOCATION_OFFSET))(this);
		}

		::System::Void set_RedirectLocation(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_REDIRECTLOCATION_OFFSET))(this, value);
		}

		::System::Boolean get_SendChunked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_SENDCHUNKED_OFFSET))(this);
		}

		::System::Void set_SendChunked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_SENDCHUNKED_OFFSET))(this, value);
		}

		::System::Int32 get_StatusCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_STATUSCODE_OFFSET))(this);
		}

		::System::Void set_StatusCode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_STATUSCODE_OFFSET))(this, value);
		}

		::System::String* get_StatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_GET_STATUSDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_StatusDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SET_STATUSDESCRIPTION_OFFSET))(this, value);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_ABORT_OFFSET))(this);
		}

		::System::Void AddHeader(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_ADDHEADER_OFFSET))(this, name, value);
		}

		::System::Void AppendCookie(::System::Net::Cookie* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_APPENDCOOKIE_OFFSET))(this, cookie);
		}

		::System::Void AppendHeader(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_APPENDHEADER_OFFSET))(this, name, value);
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

		::System::Void CopyFrom(::System::Net::HttpListenerResponse* templateResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_COPYFROM_OFFSET))(this, templateResponse);
		}

		::System::Void Redirect(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_REDIRECT_OFFSET))(this, url);
		}

		::System::Boolean FindCookie(::System::Net::Cookie* cookie)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_FINDCOOKIE_OFFSET))(this, cookie);
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

		::System::Void SetCookie(::System::Net::Cookie* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERRESPONSE_SETCOOKIE_OFFSET))(this, cookie);
		}
	};
}
