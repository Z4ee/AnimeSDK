#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/Net/WebRequest.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class LazyAsyncResult; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitCallback; }

#define SYSTEM_NET_FILEWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1D401E40)
#define SYSTEM_NET_FILEWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1D400850)
#define SYSTEM_NET_FILEWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D400C00)
#define SYSTEM_NET_FILEWEBREQUEST_CANGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1D400B80)
#define SYSTEM_NET_FILEWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1D400E30)
#define SYSTEM_NET_FILEWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D400FE0)
#define SYSTEM_NET_FILEWEBREQUEST_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D400170)
#define SYSTEM_NET_FILEWEBREQUEST_GETREQUESTSTREAMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D401720)
#define SYSTEM_NET_FILEWEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1D401190)
#define SYSTEM_NET_FILEWEBREQUEST_GETRESPONSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D4019D0)
#define SYSTEM_NET_FILEWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D401450)
#define SYSTEM_NET_FILEWEBREQUEST_GET_ABORTED_OFFSET UNITYSDK_OFFSET(0x1D400510)
#define SYSTEM_NET_FILEWEBREQUEST_GET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1D400520)
#define SYSTEM_NET_FILEWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D400540)
#define SYSTEM_NET_FILEWEBREQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D4005D0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D400690)
#define SYSTEM_NET_FILEWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1D4006B0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1D4006C0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1D400770)
#define SYSTEM_NET_FILEWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1D400790)
#define SYSTEM_NET_FILEWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1D400840)
#define SYSTEM_NET_FILEWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D4007B0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D401DA0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1D400530)
#define SYSTEM_NET_FILEWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D400550)
#define SYSTEM_NET_FILEWEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D400630)
#define SYSTEM_NET_FILEWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D4006A0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1D4006D0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1D400780)
#define SYSTEM_NET_FILEWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1D4007A0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D4007C0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D401DF0)
#define SYSTEM_NET_FILEWEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D400160)
#define SYSTEM_NET_FILEWEBREQUEST_UNBLOCKREADER_OFFSET UNITYSDK_OFFSET(0x1D401C90)
#define SYSTEM_NET_FILEWEBREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D402210)
#define SYSTEM_NET_FILEWEBREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3FFEB0)
#define SYSTEM_NET_FILEWEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FFC60)

namespace System::Net
{
	inline static constexpr unsigned int FileWebRequest_TypeDefinitionIndex = 3427;

	class FileWebRequest : public ::System::Net::WebRequest
	{
	public:
		static ::System::Threading::WaitCallback** StaticGet_s_GetRequestStreamCallback()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(FileWebRequest_TypeDefinitionIndex)->GetStaticField(0x2E70);
		}
		static ::System::Threading::WaitCallback** StaticGet_s_GetResponseCallback()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(FileWebRequest_TypeDefinitionIndex)->GetStaticField(0x2E78);
		}
		::System::Net::WebHeaderCollection* m_headers; // 0x38
		::System::Net::IWebProxy* m_proxy; // 0x40
		::System::Net::WebResponse* m_response; // 0x48
		::System::Net::ICredentials* m_credentials; // 0x50
		::System::Net::LazyAsyncResult* m_ReadAResult; // 0x58
		::System::Net::LazyAsyncResult* m_WriteAResult; // 0x60
		::System::String* m_method; // 0x68
		::System::Uri* m_uri; // 0x70
		::System::String* m_connectionGroupName; // 0x78
		::System::Threading::ManualResetEvent* m_readerEvent; // 0x80
		::System::IO::Stream* m_stream; // 0x88
		::System::IO::FileAccess m_fileAccess; // 0x90
		::System::Int32 m_timeout; // 0x94
		::System::Int32 m_Aborted; // 0x98
		::System::Boolean m_preauthenticate; // 0x9C
		::System::Boolean m_syncHint; // 0x9D
		::System::Boolean m_writing; // 0x9E
		::System::Boolean m_readPending; // 0x9F
		::System::Boolean m_writePending; // 0xA0
		::System::Int64 m_contentLength; // 0xA8

		::System::Void _ctor(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST__CTOR_OFFSET))(this, uri);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST__CTOR_1_OFFSET))(this, serializationInfo, streamingContext);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST__CCTOR_OFFSET))();
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Boolean get_Aborted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_ABORTED_OFFSET))(this);
		}

		::System::String* get_ConnectionGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_CONNECTIONGROUPNAME_OFFSET))(this);
		}

		::System::Void set_ConnectionGroupName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(this, value);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_CONTENTLENGTH_OFFSET))(this, value);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_METHOD_OFFSET))(this, value);
		}

		::System::Boolean get_PreAuthenticate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_PREAUTHENTICATE_OFFSET))(this);
		}

		::System::Void set_PreAuthenticate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(this, value);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_PROXY_OFFSET))(this, value);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_TIMEOUT_OFFSET))(this, value);
		}

		::System::Uri* get_RequestUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_REQUESTURI_OFFSET))(this);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(this, callback, state);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_BEGINGETRESPONSE_OFFSET))(this, callback, state);
		}

		::System::Boolean CanGetRequestStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_CANGETREQUESTSTREAM_OFFSET))(this);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(this, asyncResult);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::WebResponse*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_ENDGETRESPONSE_OFFSET))(this, asyncResult);
		}

		::System::IO::Stream* GetRequestStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GETREQUESTSTREAM_OFFSET))(this);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return ((::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GETRESPONSE_OFFSET))(this);
		}

		static ::System::Void GetRequestStreamCallback(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GETREQUESTSTREAMCALLBACK_OFFSET))(state);
		}

		static ::System::Void GetResponseCallback(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GETRESPONSECALLBACK_OFFSET))(state);
		}

		::System::Void UnblockReader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_UNBLOCKREADER_OFFSET))(this);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_ABORT_OFFSET))(this);
		}
	};
}
