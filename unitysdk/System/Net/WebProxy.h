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
namespace System::Net { class ProxyChain; }
namespace System::Net { class WebProxyData; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_NET_WEBPROXY_ABORTGETPROXIESAUTO_OFFSET UNITYSDK_OFFSET(0x19238720)
#define SYSTEM_NET_WEBPROXY_AREALLBYPASSED_OFFSET UNITYSDK_OFFSET(0x192382F0)
#define SYSTEM_NET_WEBPROXY_CHECKFORCHANGES_OFFSET UNITYSDK_OFFSET(0x192370E0)
#define SYSTEM_NET_WEBPROXY_CREATEDEFAULTPROXY_OFFSET UNITYSDK_OFFSET(0x1921D4E0)
#define SYSTEM_NET_WEBPROXY_CREATEPROXYURI_OFFSET UNITYSDK_OFFSET(0x19236720)
#define SYSTEM_NET_WEBPROXY_DELETESCRIPTENGINE_OFFSET UNITYSDK_OFFSET(0x19236C80)
#define SYSTEM_NET_WEBPROXY_GETDEFAULTPROXY_OFFSET UNITYSDK_OFFSET(0x19237A50)
#define SYSTEM_NET_WEBPROXY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19237D80)
#define SYSTEM_NET_WEBPROXY_GETPROXIESAUTO_OFFSET UNITYSDK_OFFSET(0x192386F0)
#define SYSTEM_NET_WEBPROXY_GETPROXYAUTOFAILOVER_OFFSET UNITYSDK_OFFSET(0x19238730)
#define SYSTEM_NET_WEBPROXY_GETPROXYAUTO_OFFSET UNITYSDK_OFFSET(0x192372B0)
#define SYSTEM_NET_WEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x192370F0)
#define SYSTEM_NET_WEBPROXY_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x19236C50)
#define SYSTEM_NET_WEBPROXY_GET_BYPASSARRAYLIST_OFFSET UNITYSDK_OFFSET(0x19237030)
#define SYSTEM_NET_WEBPROXY_GET_BYPASSLIST_OFFSET UNITYSDK_OFFSET(0x19236D80)
#define SYSTEM_NET_WEBPROXY_GET_BYPASSPROXYONLOCAL_OFFSET UNITYSDK_OFFSET(0x19236D50)
#define SYSTEM_NET_WEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x19236F30)
#define SYSTEM_NET_WEBPROXY_GET_SCRIPTENGINE_OFFSET UNITYSDK_OFFSET(0x19238090)
#define SYSTEM_NET_WEBPROXY_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x19236F50)
#define SYSTEM_NET_WEBPROXY_ISBYPASSEDAUTO_OFFSET UNITYSDK_OFFSET(0x19237A20)
#define SYSTEM_NET_WEBPROXY_ISBYPASSEDMANUAL_OFFSET UNITYSDK_OFFSET(0x192372F0)
#define SYSTEM_NET_WEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x19237970)
#define SYSTEM_NET_WEBPROXY_ISLOCALINPROXYHASH_OFFSET UNITYSDK_OFFSET(0x19237820)
#define SYSTEM_NET_WEBPROXY_ISLOCAL_OFFSET UNITYSDK_OFFSET(0x192375C0)
#define SYSTEM_NET_WEBPROXY_ISMATCHINBYPASSLIST_OFFSET UNITYSDK_OFFSET(0x192373A0)
#define SYSTEM_NET_WEBPROXY_PROXYURI_OFFSET UNITYSDK_OFFSET(0x19238620)
#define SYSTEM_NET_WEBPROXY_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x19236C60)
#define SYSTEM_NET_WEBPROXY_SET_AUTODETECT_OFFSET UNITYSDK_OFFSET(0x19236C90)
#define SYSTEM_NET_WEBPROXY_SET_BYPASSLIST_OFFSET UNITYSDK_OFFSET(0x19236EB0)
#define SYSTEM_NET_WEBPROXY_SET_BYPASSPROXYONLOCAL_OFFSET UNITYSDK_OFFSET(0x19236D60)
#define SYSTEM_NET_WEBPROXY_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x19236F40)
#define SYSTEM_NET_WEBPROXY_SET_SCRIPTENGINE_OFFSET UNITYSDK_OFFSET(0x192380A0)
#define SYSTEM_NET_WEBPROXY_SET_SCRIPTLOCATION_OFFSET UNITYSDK_OFFSET(0x19236CF0)
#define SYSTEM_NET_WEBPROXY_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x19236FC0)
#define SYSTEM_NET_WEBPROXY_SYSTEM_NET_IAUTOWEBPROXY_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x192381B0)
#define SYSTEM_NET_WEBPROXY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19237D50)
#define SYSTEM_NET_WEBPROXY_UNSAFEUPDATEFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x19237D40)
#define SYSTEM_NET_WEBPROXY_UPDATEREGEXLIST_OFFSET UNITYSDK_OFFSET(0x19236230)
#define SYSTEM_NET_WEBPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x192380B0)
#define SYSTEM_NET_WEBPROXY__CTOR_10_OFFSET UNITYSDK_OFFSET(0x19237AA0)
#define SYSTEM_NET_WEBPROXY__CTOR_11_OFFSET UNITYSDK_OFFSET(0x19237A90)
#define SYSTEM_NET_WEBPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19236100)
#define SYSTEM_NET_WEBPROXY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19236150)
#define SYSTEM_NET_WEBPROXY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x192361A0)
#define SYSTEM_NET_WEBPROXY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19236080)
#define SYSTEM_NET_WEBPROXY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x192364D0)
#define SYSTEM_NET_WEBPROXY__CTOR_6_OFFSET UNITYSDK_OFFSET(0x192365F0)
#define SYSTEM_NET_WEBPROXY__CTOR_7_OFFSET UNITYSDK_OFFSET(0x19236810)
#define SYSTEM_NET_WEBPROXY__CTOR_8_OFFSET UNITYSDK_OFFSET(0x19236950)
#define SYSTEM_NET_WEBPROXY__CTOR_9_OFFSET UNITYSDK_OFFSET(0x19236AD0)
#define SYSTEM_NET_WEBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19236040)

namespace System::Net
{
	inline static constexpr unsigned int WebProxy_TypeDefinitionIndex = 3479;

	class WebProxy : public ::System::Object
	{
	public:
		::System::Net::ICredentials* _Credentials; // 0x10
		::System::Collections::Hashtable* _ProxyHostAddresses; // 0x18
		::Il2CppArray<::System::Text::RegularExpressions::Regex*>* _RegExBypassList; // 0x20
		::System::Collections::ArrayList* _BypassList; // 0x28
		::System::Net::AutoWebProxyScriptEngine* m_ScriptEngine; // 0x30
		::System::Uri* _ProxyAddress; // 0x38
		::System::Boolean m_EnableAutoproxy; // 0x40
		::System::Boolean _BypassOnLocal; // 0x41
		::System::Boolean _UseRegistry; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Uri* Address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_1_OFFSET))(this, Address);
		}

		::System::Void _ctor_2(::System::Uri* Address, ::System::Boolean BypassOnLocal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_2_OFFSET))(this, Address, BypassOnLocal);
		}

		::System::Void _ctor_3(::System::Uri* Address, ::System::Boolean BypassOnLocal, ::Il2CppArray<::System::String*>* BypassList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_3_OFFSET))(this, Address, BypassOnLocal, BypassList);
		}

		::System::Void _ctor_4(::System::Uri* Address, ::System::Boolean BypassOnLocal, ::Il2CppArray<::System::String*>* BypassList, ::System::Net::ICredentials* Credentials)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_4_OFFSET))(this, Address, BypassOnLocal, BypassList, Credentials);
		}

		::System::Void _ctor_5(::System::String* Host, ::System::Int32 Port)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_5_OFFSET))(this, Host, Port);
		}

		::System::Void _ctor_6(::System::String* Address)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_6_OFFSET))(this, Address);
		}

		::System::Void _ctor_7(::System::String* Address, ::System::Boolean BypassOnLocal)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_7_OFFSET))(this, Address, BypassOnLocal);
		}

		::System::Void _ctor_8(::System::String* Address, ::System::Boolean BypassOnLocal, ::Il2CppArray<::System::String*>* BypassList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_8_OFFSET))(this, Address, BypassOnLocal, BypassList);
		}

		::System::Void _ctor_9(::System::String* Address, ::System::Boolean BypassOnLocal, ::Il2CppArray<::System::String*>* BypassList, ::System::Net::ICredentials* Credentials)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_9_OFFSET))(this, Address, BypassOnLocal, BypassList, Credentials);
		}

		::System::Void _ctor_10(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_10_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_11(::System::Boolean enableAutoproxy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_11_OFFSET))(this, enableAutoproxy);
		}

		::System::Uri* get_Address()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_Address(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_ADDRESS_OFFSET))(this, value);
		}

		::System::Void set_AutoDetect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_AUTODETECT_OFFSET))(this, value);
		}

		::System::Void set_ScriptLocation(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_SCRIPTLOCATION_OFFSET))(this, value);
		}

		::System::Boolean get_BypassProxyOnLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_BYPASSPROXYONLOCAL_OFFSET))(this);
		}

		::System::Void set_BypassProxyOnLocal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_BYPASSPROXYONLOCAL_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_BypassList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_BYPASSLIST_OFFSET))(this);
		}

		::System::Void set_BypassList(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_BYPASSLIST_OFFSET))(this, value);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Collections::ArrayList* get_BypassArrayList()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_BYPASSARRAYLIST_OFFSET))(this);
		}

		::System::Void CheckForChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_CHECKFORCHANGES_OFFSET))(this);
		}

		::System::Uri* GetProxy(::System::Uri* destination)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXY_OFFSET))(this, destination);
		}

		static ::System::Uri* CreateProxyUri(::System::String* address)
		{
			return ((::System::Uri*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_CREATEPROXYURI_OFFSET))(address);
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

		static ::System::Net::WebProxy* GetDefaultProxy()
		{
			return ((::System::Net::WebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETDEFAULTPROXY_OFFSET))();
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

		::System::Void set_ScriptEngine(::System::Net::AutoWebProxyScriptEngine* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::AutoWebProxyScriptEngine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_SCRIPTENGINE_OFFSET))(this, value);
		}

		static ::System::Net::IWebProxy* CreateDefaultProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_CREATEDEFAULTPROXY_OFFSET))();
		}

		::System::Void DeleteScriptEngine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_DELETESCRIPTENGINE_OFFSET))(this);
		}

		::System::Void UnsafeUpdateFromRegistry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_UNSAFEUPDATEFROMREGISTRY_OFFSET))(this);
		}

		::System::Void Update(::System::Net::WebProxyData* webProxyData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebProxyData*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_UPDATE_OFFSET))(this, webProxyData);
		}

		::System::Net::ProxyChain* System_Net_IAutoWebProxy_GetProxies(::System::Uri* destination)
		{
			return ((::System::Net::ProxyChain*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SYSTEM_NET_IAUTOWEBPROXY_GETPROXIES_OFFSET))(this, destination);
		}

		::System::Boolean GetProxyAuto(::System::Uri* destination, ::System::Uri*& proxyUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXYAUTO_OFFSET))(this, destination, proxyUri);
		}

		::System::Boolean IsBypassedAuto(::System::Uri* destination, ::System::Boolean& isBypassed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSEDAUTO_OFFSET))(this, destination, isBypassed);
		}

		::Il2CppArray<::System::Uri*>* GetProxiesAuto(::System::Uri* destination, ::System::Int32& syncStatus)
		{
			return ((::Il2CppArray<::System::Uri*>*(*)(::PVOID, ::System::Uri*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXIESAUTO_OFFSET))(this, destination, syncStatus);
		}

		::System::Void AbortGetProxiesAuto(::System::Int32& syncStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ABORTGETPROXIESAUTO_OFFSET))(this, syncStatus);
		}

		::System::Uri* GetProxyAutoFailover(::System::Uri* destination)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXYAUTOFAILOVER_OFFSET))(this, destination);
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
