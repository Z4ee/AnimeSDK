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

#define SYSTEM_NET_WEBPROXY_AREALLBYPASSED_OFFSET UNITYSDK_OFFSET(0x1AFCA460)
#define SYSTEM_NET_WEBPROXY_CREATEDEFAULTPROXY_OFFSET UNITYSDK_OFFSET(0x1AFCA430)
#define SYSTEM_NET_WEBPROXY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AFCA1A0)
#define SYSTEM_NET_WEBPROXY_GETPROXYAUTO_OFFSET UNITYSDK_OFFSET(0x1AFC9890)
#define SYSTEM_NET_WEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x1AFC9720)
#define SYSTEM_NET_WEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1AFC9610)
#define SYSTEM_NET_WEBPROXY_GET_SCRIPTENGINE_OFFSET UNITYSDK_OFFSET(0x1AFCA420)
#define SYSTEM_NET_WEBPROXY_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1AFC9620)
#define SYSTEM_NET_WEBPROXY_ISBYPASSEDAUTO_OFFSET UNITYSDK_OFFSET(0x1AFC9F20)
#define SYSTEM_NET_WEBPROXY_ISBYPASSEDMANUAL_OFFSET UNITYSDK_OFFSET(0x1AFC98A0)
#define SYSTEM_NET_WEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x1AFC9EB0)
#define SYSTEM_NET_WEBPROXY_ISLOCALINPROXYHASH_OFFSET UNITYSDK_OFFSET(0x1AFC9DE0)
#define SYSTEM_NET_WEBPROXY_ISLOCAL_OFFSET UNITYSDK_OFFSET(0x1AFC9BC0)
#define SYSTEM_NET_WEBPROXY_ISMATCHINBYPASSLIST_OFFSET UNITYSDK_OFFSET(0x1AFC9930)
#define SYSTEM_NET_WEBPROXY_PROXYURI_OFFSET UNITYSDK_OFFSET(0x1AFCA750)
#define SYSTEM_NET_WEBPROXY_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1AFC96A0)
#define SYSTEM_NET_WEBPROXY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AFCA170)
#define SYSTEM_NET_WEBPROXY_UNSAFEUPDATEFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x1AFCA160)
#define SYSTEM_NET_WEBPROXY_UPDATEREGEXLIST_OFFSET UNITYSDK_OFFSET(0x1AFC93F0)
#define SYSTEM_NET_WEBPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFC9390)
#define SYSTEM_NET_WEBPROXY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AFC9F30)
#define SYSTEM_NET_WEBPROXY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AFCA450)
#define SYSTEM_NET_WEBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC9370)

namespace System::Net
{
	inline static constexpr unsigned int WebProxy_TypeDefinitionIndex = 2802;

	class WebProxy : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Text::RegularExpressions::Regex*>* _RegExBypassList; // 0x10
		::System::Net::AutoWebProxyScriptEngine* m_ScriptEngine; // 0x18
		::System::Net::ICredentials* _Credentials; // 0x20
		::System::Collections::ArrayList* _BypassList; // 0x28
		::System::Collections::Hashtable* _ProxyHostAddresses; // 0x30
		::System::Uri* _ProxyAddress; // 0x38
		::System::Boolean _BypassOnLocal; // 0x40
		::System::Boolean _UseRegistry; // 0x41
		::System::Boolean m_EnableAutoproxy; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Uri* a1, ::System::Boolean a2, ::Il2CppArray<::System::String*>* a3, ::System::Net::ICredentials* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY__CTOR_3_OFFSET))(this, a1);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, a1);
		}

		::System::Uri* GetProxy(::System::Uri* a1)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXY_OFFSET))(this, a1);
		}

		::System::Void UpdateRegExList(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_UPDATEREGEXLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchInBypassList(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISMATCHINBYPASSLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsLocal(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISLOCAL_OFFSET))(this, a1);
		}

		::System::Boolean IsLocalInProxyHash(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISLOCALINPROXYHASH_OFFSET))(this, a1);
		}

		::System::Boolean IsBypassed(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSED_OFFSET))(this, a1);
		}

		::System::Boolean IsBypassedManual(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSEDMANUAL_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETOBJECTDATA_OFFSET))(this, a1, a2);
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

		::System::Boolean GetProxyAuto(::System::Uri* a1, ::System::Uri*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXYAUTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsBypassedAuto(::System::Uri* a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSEDAUTO_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean AreAllBypassed(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_AREALLBYPASSED_OFFSET))(a1, a2);
		}

		static ::System::Uri* ProxyUri(::System::String* a1)
		{
			return ((::System::Uri*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_PROXYURI_OFFSET))(a1);
		}
	};
}
