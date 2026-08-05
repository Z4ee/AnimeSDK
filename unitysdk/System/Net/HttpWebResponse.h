#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/WebResponse.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::IO { class Stream; }
namespace System::Net { class CookieCollection; }
namespace System::Net { class CookieContainer; }
namespace System::Net { class WebConnectionData; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_HTTPWEBRESPONSE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1E7E4180)
#define SYSTEM_NET_HTTPWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E7E4B70)
#define SYSTEM_NET_HTTPWEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7E4BF0)
#define SYSTEM_NET_HTTPWEBRESPONSE_FILLCOOKIES_OFFSET UNITYSDK_OFFSET(0x1E7E3AF0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETMUSTIMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1E7E4350)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E7E4810)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0x1E7E4660)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x1E7E4770)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_CHARACTERSET_OFFSET UNITYSDK_OFFSET(0x1E7E3F70)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTENCODING_OFFSET UNITYSDK_OFFSET(0x1E7E4120)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1E7E4210)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E7E40B0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_COOKIES_OFFSET UNITYSDK_OFFSET(0x1E7E4220)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1E7E4340)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_ISMUTUALLYAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1E7E4460)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_LASTMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E7E44B0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1E7E4560)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1E7E4580)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x1E7E45A0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_SERVER_OFFSET UNITYSDK_OFFSET(0x1E7E45C0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x1E7E4620)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E7E4630)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET UNITYSDK_OFFSET(0x1E7E4650)
#define SYSTEM_NET_HTTPWEBRESPONSE_READALL_OFFSET UNITYSDK_OFFSET(0x1E7E46D0)
#define SYSTEM_NET_HTTPWEBRESPONSE_SET_COOKIES_OFFSET UNITYSDK_OFFSET(0x1E7E4320)
#define SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7E4BA0)
#define SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E7E4800)
#define SYSTEM_NET_HTTPWEBRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E3C90)
#define SYSTEM_NET_HTTPWEBRESPONSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E7E4C40)
#define SYSTEM_NET_HTTPWEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E37E0)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebResponse_TypeDefinitionIndex = 3538;

	class HttpWebResponse : public ::System::Net::WebResponse
	{
	public:
		::System::Net::CookieContainer* cookie_container; // 0x20
		::System::IO::Stream* stream; // 0x28
		::System::Uri* uri; // 0x30
		::System::String* statusDescription; // 0x38
		::System::Version* version; // 0x40
		::System::String* method; // 0x48
		::System::String* contentType; // 0x50
		::System::Net::CookieCollection* cookieCollection; // 0x58
		::System::Net::WebHeaderCollection* webHeaders; // 0x60
		::System::Net::HttpStatusCode statusCode; // 0x68
		::System::Boolean disposed; // 0x6C
		::System::Int64 contentLength; // 0x70

		::System::Void _ctor(::System::Uri* uri, ::System::String* method, ::System::Net::WebConnectionData* data, ::System::Net::CookieContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Net::WebConnectionData*, ::System::Net::CookieContainer*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE__CTOR_OFFSET))(this, uri, method, data, container);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE__CTOR_1_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE__CTOR_2_OFFSET))(this);
		}

		::System::String* get_CharacterSet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_CHARACTERSET_OFFSET))(this);
		}

		::System::String* get_ContentEncoding()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTENCODING_OFFSET))(this);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Net::CookieCollection* get_Cookies()
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_COOKIES_OFFSET))(this);
		}

		::System::Void set_Cookies(::System::Net::CookieCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SET_COOKIES_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_HEADERS_OFFSET))(this);
		}

		static ::System::Exception* GetMustImplement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETMUSTIMPLEMENT_OFFSET))();
		}

		::System::Boolean get_IsMutuallyAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_ISMUTUALLYAUTHENTICATED_OFFSET))(this);
		}

		::System::DateTime get_LastModified()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_LASTMODIFIED_OFFSET))(this);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_METHOD_OFFSET))(this);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Uri* get_ResponseUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_RESPONSEURI_OFFSET))(this);
		}

		::System::String* get_Server()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_SERVER_OFFSET))(this);
		}

		::System::Net::HttpStatusCode get_StatusCode()
		{
			return ((::System::Net::HttpStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSCODE_OFFSET))(this);
		}

		::System::String* get_StatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET))(this);
		}

		::System::Boolean get_SupportsHeaders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET))(this);
		}

		::System::String* GetResponseHeader(::System::String* headerName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET))(this, headerName);
		}

		::System::Void ReadAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_READALL_OFFSET))(this);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_CLOSE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_CHECKDISPOSED_OFFSET))(this);
		}

		::System::Void FillCookies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_FILLCOOKIES_OFFSET))(this);
		}
	};
}
