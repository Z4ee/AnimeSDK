#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Net { class AutoWebProxyScriptEngine; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_NET_WEBPROXY_AREALLBYPASSED_OFFSET UNITYSDK_OFFSET(0x1872CE60)
#define SYSTEM_NET_WEBPROXY_CREATEDEFAULTPROXY_OFFSET UNITYSDK_OFFSET(0x1872CE30)
#define SYSTEM_NET_WEBPROXY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1872CB90)
#define SYSTEM_NET_WEBPROXY_GETPROXYAUTO_OFFSET UNITYSDK_OFFSET(0x1872C2A0)
#define SYSTEM_NET_WEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x1872C130)
#define SYSTEM_NET_WEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1872C030)
#define SYSTEM_NET_WEBPROXY_GET_SCRIPTENGINE_OFFSET UNITYSDK_OFFSET(0x1872CE20)
#define SYSTEM_NET_WEBPROXY_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1872C040)
#define SYSTEM_NET_WEBPROXY_ISBYPASSEDAUTO_OFFSET UNITYSDK_OFFSET(0x1872C910)
#define SYSTEM_NET_WEBPROXY_ISBYPASSEDMANUAL_OFFSET UNITYSDK_OFFSET(0x1872C2B0)
#define SYSTEM_NET_WEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x1872C8A0)
#define SYSTEM_NET_WEBPROXY_ISLOCALINPROXYHASH_OFFSET UNITYSDK_OFFSET(0x1872C7D0)
#define SYSTEM_NET_WEBPROXY_ISLOCAL_OFFSET UNITYSDK_OFFSET(0x1872C610)
#define SYSTEM_NET_WEBPROXY_ISMATCHINBYPASSLIST_OFFSET UNITYSDK_OFFSET(0x1872C340)
#define SYSTEM_NET_WEBPROXY_PROXYURI_OFFSET UNITYSDK_OFFSET(0x1872D160)
#define SYSTEM_NET_WEBPROXY_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1872C0B0)
#define SYSTEM_NET_WEBPROXY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1872CB60)
#define SYSTEM_NET_WEBPROXY_UNSAFEUPDATEFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x1872CB50)
#define SYSTEM_NET_WEBPROXY_UPDATEREGEXLIST_OFFSET UNITYSDK_OFFSET(0x1872BDD0)
#define SYSTEM_NET_WEBPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1872BD70)
#define SYSTEM_NET_WEBPROXY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1872C920)
#define SYSTEM_NET_WEBPROXY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1872CE50)
#define SYSTEM_NET_WEBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1872BD50)

namespace System::Net
{
	inline static constexpr unsigned int WebProxy_TypeDefinitionIndex = 2801;

	class WebProxy : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* _BypassList; // 0x10
		::Il2CppArray<::System::Text::RegularExpressions::Regex*>* _RegExBypassList; // 0x18
		::System::Net::ICredentials* _Credentials; // 0x20
		::System::Net::AutoWebProxyScriptEngine* m_ScriptEngine; // 0x28
		::System::Uri* _ProxyAddress; // 0x30
		::System::Collections::Hashtable* _ProxyHostAddresses; // 0x38
		::System::Boolean m_EnableAutoproxy; // 0x40
		::System::Boolean _UseRegistry; // 0x41
		::System::Boolean _BypassOnLocal; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Uri* Address, ::System::Boolean BypassOnLocal, ::Il2CppArray<::System::String*>* BypassList, ::System::Net::ICredentials* Credentials)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_1_OFFSET))(this, Address, BypassOnLocal, BypassList, Credentials);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_2_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_3(::System::Boolean enableAutoproxy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_3_OFFSET))(this, enableAutoproxy);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Uri* GetProxy(::System::Uri* destination)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXY_OFFSET))(this, destination);
		}

		::System::Void UpdateRegExList(::System::Boolean canThrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_UPDATEREGEXLIST_OFFSET))(this, canThrow);
		}

		::System::Boolean IsMatchInBypassList(::System::Uri* input)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISMATCHINBYPASSLIST_OFFSET))(this, input);
		}

		::System::Boolean IsLocal(::System::Uri* host)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISLOCAL_OFFSET))(this, host);
		}

		::System::Boolean IsLocalInProxyHash(::System::Uri* host)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISLOCALINPROXYHASH_OFFSET))(this, host);
		}

		::System::Boolean IsBypassed(::System::Uri* host)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSED_OFFSET))(this, host);
		}

		::System::Boolean IsBypassedManual(::System::Uri* host)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSEDMANUAL_OFFSET))(this, host);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Net::AutoWebProxyScriptEngine* get_ScriptEngine()
		{
			return ((::System::Net::AutoWebProxyScriptEngine*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_SCRIPTENGINE_OFFSET))(this);
		}

		static ::System::Net::IWebProxy* CreateDefaultProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_CREATEDEFAULTPROXY_OFFSET))();
		}

		::System::Void UnsafeUpdateFromRegistry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_UNSAFEUPDATEFROMREGISTRY_OFFSET))(this);
		}

		::System::Boolean GetProxyAuto(::System::Uri* destination, ::System::Uri*& proxyUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXYAUTO_OFFSET))(this, destination, proxyUri);
		}

		::System::Boolean IsBypassedAuto(::System::Uri* destination, ::System::Boolean& isBypassed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSEDAUTO_OFFSET))(this, destination, isBypassed);
		}

		static ::System::Boolean AreAllBypassed(::System::Collections::Generic::IEnumerable_1<::System::String*>* proxies, ::System::Boolean checkFirstOnly)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_AREALLBYPASSED_OFFSET))(proxies, checkFirstOnly);
		}

		static ::System::Uri* ProxyUri(::System::String* proxyName)
		{
			return ((::System::Uri*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_PROXYURI_OFFSET))(proxyName);
		}
	};
}
