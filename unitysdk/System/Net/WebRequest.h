#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Net/Security/AuthenticationLevel.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Principal/TokenImpersonationLevel.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::IO { class Stream; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class TimerThread_Queue; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Net { class WebRequest_DesignerWebRequestCreate; }
namespace System::Net { class WebResponse; }
namespace System::Net::Cache { class RequestCacheBinding; }
namespace System::Net::Cache { class RequestCachePolicy; }
namespace System::Net::Cache { class RequestCacheProtocol; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Principal { class WindowsIdentity; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_WEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1A1690C0)
#define SYSTEM_NET_WEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1A1686F0)
#define SYSTEM_NET_WEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1A168650)
#define SYSTEM_NET_WEBREQUEST_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1A158C30)
#define SYSTEM_NET_WEBREQUEST_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1A167D20)
#define SYSTEM_NET_WEBREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x1A167710)
#define SYSTEM_NET_WEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1A168740)
#define SYSTEM_NET_WEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1A1686A0)
#define SYSTEM_NET_WEBREQUEST_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A167F70)
#define SYSTEM_NET_WEBREQUEST_GETREQUESTSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x1A168790)
#define SYSTEM_NET_WEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1A1685B0)
#define SYSTEM_NET_WEBREQUEST_GETRESPONSEASYNC_OFFSET UNITYSDK_OFFSET(0x1A168CB0)
#define SYSTEM_NET_WEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1A168600)
#define SYSTEM_NET_WEBREQUEST_GET_CACHEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1A169110)
#define SYSTEM_NET_WEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A1681F0)
#define SYSTEM_NET_WEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A1682E0)
#define SYSTEM_NET_WEBREQUEST_GET_DEFAULTWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1A169380)
#define SYSTEM_NET_WEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1A1681A0)
#define SYSTEM_NET_WEBREQUEST_GET_INTERNALDEFAULTWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1A169130)
#define SYSTEM_NET_WEBREQUEST_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1A167660)
#define SYSTEM_NET_WEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1A168060)
#define SYSTEM_NET_WEBREQUEST_GET_PREFIXLIST_OFFSET UNITYSDK_OFFSET(0x1A167990)
#define SYSTEM_NET_WEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1A168420)
#define SYSTEM_NET_WEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1A168100)
#define SYSTEM_NET_WEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A168510)
#define SYSTEM_NET_WEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A168380)
#define SYSTEM_NET_WEBREQUEST_INTERNALSETCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1A167FF0)
#define SYSTEM_NET_WEBREQUEST_POPULATEPREFIXLIST_OFFSET UNITYSDK_OFFSET(0x1A167DD0)
#define SYSTEM_NET_WEBREQUEST_SAFECAPTUREIDENITY_OFFSET UNITYSDK_OFFSET(0x1A168BA0)
#define SYSTEM_NET_WEBREQUEST_SET_CACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1A167F80)
#define SYSTEM_NET_WEBREQUEST_SET_CACHEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1A169120)
#define SYSTEM_NET_WEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1A168150)
#define SYSTEM_NET_WEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A168240)
#define SYSTEM_NET_WEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A168290)
#define SYSTEM_NET_WEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A168330)
#define SYSTEM_NET_WEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1A1680B0)
#define SYSTEM_NET_WEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1A1684C0)
#define SYSTEM_NET_WEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1A168470)
#define SYSTEM_NET_WEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A168560)
#define SYSTEM_NET_WEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A1683D0)
#define SYSTEM_NET_WEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A167F40)
#define SYSTEM_NET_WEBREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1693B0)
#define SYSTEM_NET_WEBREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A167F30)
#define SYSTEM_NET_WEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A167F20)
#define SYSTEM_NET_WEBREQUEST__GETREQUESTSTREAMASYNC_B__78_0_OFFSET UNITYSDK_OFFSET(0x1A169420)
#define SYSTEM_NET_WEBREQUEST__GETRESPONSEASYNC_B__79_0_OFFSET UNITYSDK_OFFSET(0x1A1695A0)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_TypeDefinitionIndex = 2755;

	class WebRequest : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Net::WebRequest_DesignerWebRequestCreate** StaticGet_webRequestCreate()
		{
			return (::System::Net::WebRequest_DesignerWebRequestCreate**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x15060);
		}
		static ::System::Net::TimerThread_Queue** StaticGet_s_DefaultTimerQueue()
		{
			return (::System::Net::TimerThread_Queue**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x15068);
		}
		static ::System::Collections::ArrayList** StaticGet_s_PrefixList()
		{
			return (::System::Collections::ArrayList**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x15070);
		}
		static ::System::Net::IWebProxy** StaticGet_s_DefaultWebProxy()
		{
			return (::System::Net::IWebProxy**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x15078);
		}
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x15080);
		}
		static ::System::Boolean* StaticGet_s_DefaultWebProxyInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x5EA0);
		}
		::System::Net::Cache::RequestCachePolicy* m_CachePolicy; // 0x18
		::System::Net::Cache::RequestCacheProtocol* m_CacheProtocol; // 0x20
		::System::Net::Cache::RequestCacheBinding* m_CacheBinding; // 0x28
		::System::Security::Principal::TokenImpersonationLevel m_ImpersonationLevel; // 0x30
		::System::Net::Security::AuthenticationLevel m_AuthenticationLevel; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST__CTOR_1_OFFSET))(this, serializationInfo, streamingContext);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST__CCTOR_OFFSET))();
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		static ::System::Net::WebRequest* Create(::System::Uri* requestUri, ::System::Boolean useUriBase)
		{
			return ((::System::Net::WebRequest*(*)(::System::Uri*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_CREATE_OFFSET))(requestUri, useUriBase);
		}

		static ::System::Net::WebRequest* Create_1(::System::String* requestUriString)
		{
			return ((::System::Net::WebRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_CREATE_1_OFFSET))(requestUriString);
		}

		static ::System::Net::WebRequest* Create_2(::System::Uri* requestUri)
		{
			return ((::System::Net::WebRequest*(*)(::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_CREATE_2_OFFSET))(requestUri);
		}

		static ::System::Collections::ArrayList* get_PrefixList()
		{
			return ((::System::Collections::ArrayList*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_PREFIXLIST_OFFSET))();
		}

		static ::System::Collections::ArrayList* PopulatePrefixList()
		{
			return ((::System::Collections::ArrayList*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_POPULATEPREFIXLIST_OFFSET))();
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void set_CachePolicy(::System::Net::Cache::RequestCachePolicy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CACHEPOLICY_OFFSET))(this, value);
		}

		::System::Void InternalSetCachePolicy(::System::Net::Cache::RequestCachePolicy* policy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_INTERNALSETCACHEPOLICY_OFFSET))(this, policy);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_METHOD_OFFSET))(this, value);
		}

		::System::Uri* get_RequestUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_REQUESTURI_OFFSET))(this);
		}

		::System::Void set_ConnectionGroupName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CONTENTLENGTH_OFFSET))(this, value);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_PROXY_OFFSET))(this, value);
		}

		::System::Void set_PreAuthenticate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(this, value);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_TIMEOUT_OFFSET))(this, value);
		}

		::System::IO::Stream* GetRequestStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETREQUESTSTREAM_OFFSET))(this);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return ((::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETRESPONSE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_BEGINGETRESPONSE_OFFSET))(this, callback, state);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::WebResponse*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_ENDGETRESPONSE_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(this, callback, state);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(this, asyncResult);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetRequestStreamAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETREQUESTSTREAMASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* GetResponseAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETRESPONSEASYNC_OFFSET))(this);
		}

		::System::Security::Principal::WindowsIdentity* SafeCaptureIdenity()
		{
			return ((::System::Security::Principal::WindowsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SAFECAPTUREIDENITY_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_ABORT_OFFSET))(this);
		}

		::System::Net::Cache::RequestCacheProtocol* get_CacheProtocol()
		{
			return ((::System::Net::Cache::RequestCacheProtocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CACHEPROTOCOL_OFFSET))(this);
		}

		::System::Void set_CacheProtocol(::System::Net::Cache::RequestCacheProtocol* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::RequestCacheProtocol*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CACHEPROTOCOL_OFFSET))(this, value);
		}

		static ::System::Net::IWebProxy* get_InternalDefaultWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_INTERNALDEFAULTWEBPROXY_OFFSET))();
		}

		static ::System::Net::IWebProxy* get_DefaultWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_DEFAULTWEBPROXY_OFFSET))();
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* _GetRequestStreamAsync_b__78_0()
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST__GETREQUESTSTREAMASYNC_B__78_0_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* _GetResponseAsync_b__79_0()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST__GETRESPONSEASYNC_B__79_0_OFFSET))(this);
		}
	};
}
