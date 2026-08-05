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
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class IWebRequestCreate; }
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

#define SYSTEM_NET_WEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1E2979B0)
#define SYSTEM_NET_WEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1E297020)
#define SYSTEM_NET_WEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E296F80)
#define SYSTEM_NET_WEBREQUEST_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E2959D0)
#define SYSTEM_NET_WEBREQUEST_CREATEHTTP_1_OFFSET UNITYSDK_OFFSET(0x1E295B50)
#define SYSTEM_NET_WEBREQUEST_CREATEHTTP_OFFSET UNITYSDK_OFFSET(0x1E295A80)
#define SYSTEM_NET_WEBREQUEST_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1E295850)
#define SYSTEM_NET_WEBREQUEST_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1E295920)
#define SYSTEM_NET_WEBREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x1E2953A0)
#define SYSTEM_NET_WEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1E297070)
#define SYSTEM_NET_WEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E296FD0)
#define SYSTEM_NET_WEBREQUEST_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E296630)
#define SYSTEM_NET_WEBREQUEST_GETREQUESTSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x1E2970C0)
#define SYSTEM_NET_WEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1E296EE0)
#define SYSTEM_NET_WEBREQUEST_GETRESPONSEASYNC_OFFSET UNITYSDK_OFFSET(0x1E2975C0)
#define SYSTEM_NET_WEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E296F30)
#define SYSTEM_NET_WEBREQUEST_GETSYSTEMWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1E297F30)
#define SYSTEM_NET_WEBREQUEST_GET_AUTHENTICATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1E297A20)
#define SYSTEM_NET_WEBREQUEST_GET_CACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1E296760)
#define SYSTEM_NET_WEBREQUEST_GET_CACHEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E297A00)
#define SYSTEM_NET_WEBREQUEST_GET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1E296940)
#define SYSTEM_NET_WEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1E296A80)
#define SYSTEM_NET_WEBREQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E296B20)
#define SYSTEM_NET_WEBREQUEST_GET_CREATORINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E2951E0)
#define SYSTEM_NET_WEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1E296BC0)
#define SYSTEM_NET_WEBREQUEST_GET_DEFAULTCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1E296640)
#define SYSTEM_NET_WEBREQUEST_GET_DEFAULTTIMERQUEUE_OFFSET UNITYSDK_OFFSET(0x1E295340)
#define SYSTEM_NET_WEBREQUEST_GET_DEFAULTWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1E297E70)
#define SYSTEM_NET_WEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1E2969E0)
#define SYSTEM_NET_WEBREQUEST_GET_IMPERSONATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1E297A40)
#define SYSTEM_NET_WEBREQUEST_GET_INTERNALDEFAULTWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1E297AB0)
#define SYSTEM_NET_WEBREQUEST_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1E295250)
#define SYSTEM_NET_WEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1E296850)
#define SYSTEM_NET_WEBREQUEST_GET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1E296DA0)
#define SYSTEM_NET_WEBREQUEST_GET_PREFIXLIST_OFFSET UNITYSDK_OFFSET(0x1E295670)
#define SYSTEM_NET_WEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1E296D00)
#define SYSTEM_NET_WEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1E2968F0)
#define SYSTEM_NET_WEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E296E40)
#define SYSTEM_NET_WEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1E296C60)
#define SYSTEM_NET_WEBREQUEST_INTERNALGETSYSTEMWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1E297FB0)
#define SYSTEM_NET_WEBREQUEST_INTERNALSETCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1E2967E0)
#define SYSTEM_NET_WEBREQUEST_POPULATEPREFIXLIST_OFFSET UNITYSDK_OFFSET(0x1E296450)
#define SYSTEM_NET_WEBREQUEST_REGISTERPORTABLEWEBREQUESTCREATOR_OFFSET UNITYSDK_OFFSET(0x1E295240)
#define SYSTEM_NET_WEBREQUEST_REGISTERPREFIX_OFFSET UNITYSDK_OFFSET(0x1E295EC0)
#define SYSTEM_NET_WEBREQUEST_REQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E297A60)
#define SYSTEM_NET_WEBREQUEST_SAFECAPTUREIDENITY_OFFSET UNITYSDK_OFFSET(0x1E2974B0)
#define SYSTEM_NET_WEBREQUEST_SETUPCACHEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E297FF0)
#define SYSTEM_NET_WEBREQUEST_SET_AUTHENTICATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1E297A30)
#define SYSTEM_NET_WEBREQUEST_SET_CACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1E296770)
#define SYSTEM_NET_WEBREQUEST_SET_CACHEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E297A10)
#define SYSTEM_NET_WEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1E296990)
#define SYSTEM_NET_WEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1E296AD0)
#define SYSTEM_NET_WEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E296B70)
#define SYSTEM_NET_WEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1E296C10)
#define SYSTEM_NET_WEBREQUEST_SET_DEFAULTCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1E2966B0)
#define SYSTEM_NET_WEBREQUEST_SET_DEFAULTWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1E297ED0)
#define SYSTEM_NET_WEBREQUEST_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1E296A30)
#define SYSTEM_NET_WEBREQUEST_SET_IMPERSONATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1E297A50)
#define SYSTEM_NET_WEBREQUEST_SET_INTERNALDEFAULTWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1E297CB0)
#define SYSTEM_NET_WEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1E2968A0)
#define SYSTEM_NET_WEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1E296DF0)
#define SYSTEM_NET_WEBREQUEST_SET_PREFIXLIST_OFFSET UNITYSDK_OFFSET(0x1E2963F0)
#define SYSTEM_NET_WEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1E296D50)
#define SYSTEM_NET_WEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E296E90)
#define SYSTEM_NET_WEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1E296CB0)
#define SYSTEM_NET_WEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E296600)
#define SYSTEM_NET_WEBREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E298220)
#define SYSTEM_NET_WEBREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2965F0)
#define SYSTEM_NET_WEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2965E0)
#define SYSTEM_NET_WEBREQUEST__GETREQUESTSTREAMASYNC_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E2982B0)
#define SYSTEM_NET_WEBREQUEST__GETRESPONSEASYNC_B__79_0_OFFSET UNITYSDK_OFFSET(0x1E298460)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_TypeDefinitionIndex = 3349;

	class WebRequest : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Net::WebRequest_DesignerWebRequestCreate** StaticGet_webRequestCreate()
		{
			return (::System::Net::WebRequest_DesignerWebRequestCreate**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x3B00);
		}
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x3B08);
		}
		static ::System::Net::TimerThread_Queue** StaticGet_s_DefaultTimerQueue()
		{
			return (::System::Net::TimerThread_Queue**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x3B10);
		}
		static ::System::Collections::ArrayList** StaticGet_s_PrefixList()
		{
			return (::System::Collections::ArrayList**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x3B18);
		}
		static ::System::Net::IWebProxy** StaticGet_s_DefaultWebProxy()
		{
			return (::System::Net::IWebProxy**)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x3B20);
		}
		static ::System::Boolean* StaticGet_s_DefaultWebProxyInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WebRequest_TypeDefinitionIndex)->GetStaticField(0x1460);
		}
		// static const ::System::Int32 DefaultTimeout = 0x186A0; // 0x0
		::System::Net::Cache::RequestCacheBinding* m_CacheBinding; // 0x18
		::System::Net::Cache::RequestCachePolicy* m_CachePolicy; // 0x20
		::System::Net::Cache::RequestCacheProtocol* m_CacheProtocol; // 0x28
		::System::Net::Security::AuthenticationLevel m_AuthenticationLevel; // 0x30
		::System::Security::Principal::TokenImpersonationLevel m_ImpersonationLevel; // 0x34

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

		::System::Net::IWebRequestCreate* get_CreatorInstance()
		{
			return ((::System::Net::IWebRequestCreate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CREATORINSTANCE_OFFSET))(this);
		}

		static ::System::Void RegisterPortableWebRequestCreator(::System::Net::IWebRequestCreate* creator)
		{
			return ((::System::Void(*)(::System::Net::IWebRequestCreate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_REGISTERPORTABLEWEBREQUESTCREATOR_OFFSET))(creator);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		static ::System::Net::TimerThread_Queue* get_DefaultTimerQueue()
		{
			return ((::System::Net::TimerThread_Queue*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_DEFAULTTIMERQUEUE_OFFSET))();
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

		static ::System::Net::WebRequest* CreateDefault(::System::Uri* requestUri)
		{
			return ((::System::Net::WebRequest*(*)(::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_CREATEDEFAULT_OFFSET))(requestUri);
		}

		static ::System::Net::HttpWebRequest* CreateHttp(::System::String* requestUriString)
		{
			return ((::System::Net::HttpWebRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_CREATEHTTP_OFFSET))(requestUriString);
		}

		static ::System::Net::HttpWebRequest* CreateHttp_1(::System::Uri* requestUri)
		{
			return ((::System::Net::HttpWebRequest*(*)(::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_CREATEHTTP_1_OFFSET))(requestUri);
		}

		static ::System::Boolean RegisterPrefix(::System::String* prefix, ::System::Net::IWebRequestCreate* creator)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::IWebRequestCreate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_REGISTERPREFIX_OFFSET))(prefix, creator);
		}

		static ::System::Collections::ArrayList* get_PrefixList()
		{
			return ((::System::Collections::ArrayList*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_PREFIXLIST_OFFSET))();
		}

		static ::System::Void set_PrefixList(::System::Collections::ArrayList* value)
		{
			return ((::System::Void(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_PREFIXLIST_OFFSET))(value);
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

		static ::System::Net::Cache::RequestCachePolicy* get_DefaultCachePolicy()
		{
			return ((::System::Net::Cache::RequestCachePolicy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_DEFAULTCACHEPOLICY_OFFSET))();
		}

		static ::System::Void set_DefaultCachePolicy(::System::Net::Cache::RequestCachePolicy* value)
		{
			return ((::System::Void(*)(::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_DEFAULTCACHEPOLICY_OFFSET))(value);
		}

		::System::Net::Cache::RequestCachePolicy* get_CachePolicy()
		{
			return ((::System::Net::Cache::RequestCachePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CACHEPOLICY_OFFSET))(this);
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

		::System::String* get_ConnectionGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CONNECTIONGROUPNAME_OFFSET))(this);
		}

		::System::Void set_ConnectionGroupName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::Void set_Headers(::System::Net::WebHeaderCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_HEADERS_OFFSET))(this, value);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CONTENTLENGTH_OFFSET))(this, value);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CONTENTTYPE_OFFSET))(this);
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

		::System::Boolean get_PreAuthenticate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_PREAUTHENTICATE_OFFSET))(this);
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

		::System::Net::Security::AuthenticationLevel get_AuthenticationLevel()
		{
			return ((::System::Net::Security::AuthenticationLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_AUTHENTICATIONLEVEL_OFFSET))(this);
		}

		::System::Void set_AuthenticationLevel(::System::Net::Security::AuthenticationLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Security::AuthenticationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_AUTHENTICATIONLEVEL_OFFSET))(this, value);
		}

		::System::Security::Principal::TokenImpersonationLevel get_ImpersonationLevel()
		{
			return ((::System::Security::Principal::TokenImpersonationLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_IMPERSONATIONLEVEL_OFFSET))(this);
		}

		::System::Void set_ImpersonationLevel(::System::Security::Principal::TokenImpersonationLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::TokenImpersonationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_IMPERSONATIONLEVEL_OFFSET))(this, value);
		}

		::System::Void RequestCallback(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_REQUESTCALLBACK_OFFSET))(this, obj);
		}

		static ::System::Net::IWebProxy* get_InternalDefaultWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_INTERNALDEFAULTWEBPROXY_OFFSET))();
		}

		static ::System::Void set_InternalDefaultWebProxy(::System::Net::IWebProxy* value)
		{
			return ((::System::Void(*)(::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_INTERNALDEFAULTWEBPROXY_OFFSET))(value);
		}

		static ::System::Net::IWebProxy* get_DefaultWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_DEFAULTWEBPROXY_OFFSET))();
		}

		static ::System::Void set_DefaultWebProxy(::System::Net::IWebProxy* value)
		{
			return ((::System::Void(*)(::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_DEFAULTWEBPROXY_OFFSET))(value);
		}

		static ::System::Net::IWebProxy* GetSystemWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETSYSTEMWEBPROXY_OFFSET))();
		}

		static ::System::Net::IWebProxy* InternalGetSystemWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_INTERNALGETSYSTEMWEBPROXY_OFFSET))();
		}

		::System::Void SetupCacheProtocol(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SETUPCACHEPROTOCOL_OFFSET))(this, uri);
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
