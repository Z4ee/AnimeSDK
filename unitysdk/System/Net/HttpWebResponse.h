#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/WebResponse.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::IO { class Stream; }
namespace System::Net { class CookieCollection; }
namespace System::Net { class CookieContainer; }
namespace System::Net { class WebConnectionData; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_HTTPWEBRESPONSE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1AF93B20)
#define SYSTEM_NET_HTTPWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AF8DA50)
#define SYSTEM_NET_HTTPWEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF94010)
#define SYSTEM_NET_HTTPWEBRESPONSE_FILLCOOKIES_OFFSET UNITYSDK_OFFSET(0x1AF936E0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AF93CA0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0x1AF93C00)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x1AF90F80)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF93A90)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1AF93AA0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x1AF93AB0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x1AF93B80)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AF93B90)
#define SYSTEM_NET_HTTPWEBRESPONSE_READALL_OFFSET UNITYSDK_OFFSET(0x1AF90CA0)
#define SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF93FC0)
#define SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AF93C90)
#define SYSTEM_NET_HTTPWEBRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF93840)
#define SYSTEM_NET_HTTPWEBRESPONSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF94060)
#define SYSTEM_NET_HTTPWEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF91BA0)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebResponse_TypeDefinitionIndex = 2850;

	class HttpWebResponse : public ::System::Net::WebResponse
	{
	public:
		::System::Net::CookieCollection* cookieCollection; // 0x20
		::System::Uri* uri; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::String* statusDescription; // 0x38
		::System::Net::CookieContainer* cookie_container; // 0x40
		::System::String* contentType; // 0x48
		::System::Version* version; // 0x50
		::System::Net::WebHeaderCollection* webHeaders; // 0x58
		::System::String* method; // 0x60
		::System::Boolean disposed; // 0x68
		::System::Net::HttpStatusCode statusCode; // 0x6C
		::System::Int64 contentLength; // 0x70

		::System::Void _ctor(::System::Uri* a1, ::System::String* a2, ::System::Net::WebConnectionData* a3, ::System::Net::CookieContainer* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Net::WebConnectionData*, ::System::Net::CookieContainer*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE__CTOR_2_OFFSET))(this);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_HEADERS_OFFSET))(this);
		}

		::System::Uri* get_ResponseUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_RESPONSEURI_OFFSET))(this);
		}

		::System::Net::HttpStatusCode get_StatusCode()
		{
			return ((::System::Net::HttpStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSCODE_OFFSET))(this);
		}

		::System::String* get_StatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET))(this);
		}

		::System::String* GetResponseHeader(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET))(this, a1);
		}

		::System::Void ReadAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_READALL_OFFSET))(this);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_CLOSE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_DISPOSE_OFFSET))(this, a1);
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
