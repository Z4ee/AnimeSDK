#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::IO { class Stream; }
namespace System::Net { class CookieCollection; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class WebHeaderCollection; }

#define SYSTEM_NET_HTTPLISTENERREQUEST_ADDHEADER_OFFSET UNITYSDK_OFFSET(0x1AF80A20)
#define SYSTEM_NET_HTTPLISTENERREQUEST_CREATEQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1AF85C00)
#define SYSTEM_NET_HTTPLISTENERREQUEST_FINISHINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x1AF7F410)
#define SYSTEM_NET_HTTPLISTENERREQUEST_FLUSHINPUT_OFFSET UNITYSDK_OFFSET(0x1AF820B0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_HASENTITYBODY_OFFSET UNITYSDK_OFFSET(0x1AF86400)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1AF864A0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_HTTPMETHOD_OFFSET UNITYSDK_OFFSET(0x1AF864B0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_INPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x1AF86420)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISSECURECONNECTION_OFFSET UNITYSDK_OFFSET(0x1AF861A0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1AF81F00)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1AF861D0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1AF864C0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_QUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1AF864D0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_URL_OFFSET UNITYSDK_OFFSET(0x1AF864E0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERHOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x1AF86160)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERHOSTNAME_OFFSET UNITYSDK_OFFSET(0x1AF86130)
#define SYSTEM_NET_HTTPLISTENERREQUEST_ISPREDEFINEDSCHEME_OFFSET UNITYSDK_OFFSET(0x1AF85F60)
#define SYSTEM_NET_HTTPLISTENERREQUEST_MAYBEURI_OFFSET UNITYSDK_OFFSET(0x1AF85ED0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_SETREQUESTLINE_OFFSET UNITYSDK_OFFSET(0x1AF805A0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_UNQUOTE_OFFSET UNITYSDK_OFFSET(0x1AF86380)
#define SYSTEM_NET_HTTPLISTENERREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF864F0)
#define SYSTEM_NET_HTTPLISTENERREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF84D50)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerRequest_TypeDefinitionIndex = 2842;

	class HttpListenerRequest : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet__100continue()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequest_TypeDefinitionIndex)->GetStaticField(0x24E30);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_separators()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequest_TypeDefinitionIndex)->GetStaticField(0x24E38);
		}
		::Il2CppArray<::System::String*>* accept_types; // 0x10
		::System::String* method; // 0x18
		::System::Version* version; // 0x20
		::System::Uri* referrer; // 0x28
		::System::String* raw_url; // 0x30
		::System::Net::HttpListenerContext* context; // 0x38
		::System::Net::WebHeaderCollection* headers; // 0x40
		::System::IO::Stream* input_stream; // 0x48
		::System::Collections::Specialized::NameValueCollection* query_string; // 0x50
		::System::Uri* url; // 0x58
		::Il2CppArray<::System::String*>* user_languages; // 0x60
		::System::Net::CookieCollection* cookies; // 0x68
		::System::Boolean is_chunked; // 0x70
		::System::Boolean ka_set; // 0x71
		::System::Boolean keep_alive; // 0x72
		::System::Boolean cl_set; // 0x73
		::System::Int64 content_length; // 0x78

		::System::Void _ctor(::System::Net::HttpListenerContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST__CCTOR_OFFSET))();
		}

		::System::Void SetRequestLine(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_SETREQUESTLINE_OFFSET))(this, a1);
		}

		::System::Void CreateQueryString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_CREATEQUERYSTRING_OFFSET))(this, a1);
		}

		static ::System::Boolean MaybeUri(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_MAYBEURI_OFFSET))(a1);
		}

		static ::System::Boolean IsPredefinedScheme(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_ISPREDEFINEDSCHEME_OFFSET))(a1);
		}

		::System::Void FinishInitialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_FINISHINITIALIZATION_OFFSET))(this);
		}

		static ::System::String* Unquote(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_UNQUOTE_OFFSET))(a1);
		}

		::System::Void AddHeader(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_ADDHEADER_OFFSET))(this, a1);
		}

		::System::Boolean FlushInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_FLUSHINPUT_OFFSET))(this);
		}

		::System::Boolean get_HasEntityBody()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_HASENTITYBODY_OFFSET))(this);
		}

		::System::Collections::Specialized::NameValueCollection* get_Headers()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::String* get_HttpMethod()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_HTTPMETHOD_OFFSET))(this);
		}

		::System::IO::Stream* get_InputStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_INPUTSTREAM_OFFSET))(this);
		}

		::System::Boolean get_IsSecureConnection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISSECURECONNECTION_OFFSET))(this);
		}

		::System::Boolean get_KeepAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_KEEPALIVE_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_LOCALENDPOINT_OFFSET))(this);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Collections::Specialized::NameValueCollection* get_QueryString()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_QUERYSTRING_OFFSET))(this);
		}

		::System::Uri* get_Url()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_URL_OFFSET))(this);
		}

		::System::String* get_UserHostAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERHOSTADDRESS_OFFSET))(this);
		}

		::System::String* get_UserHostName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERHOSTNAME_OFFSET))(this);
		}
	};
}
