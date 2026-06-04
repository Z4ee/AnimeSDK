#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IWebProxy; }

#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETDEFAULTPROXY_USINGOLDMONOCODE_OFFSET UNITYSDK_OFFSET(0x1AF589B0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSECTION_OFFSET UNITYSDK_OFFSET(0x1AF58A40)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSYSTEMWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1AF589D0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_CLASSSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1AF589F0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_WEBPROXY_OFFSET UNITYSDK_OFFSET(0x1AF58B70)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF58B60)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int DefaultProxySectionInternal_TypeDefinitionIndex = 2965;

	class DefaultProxySectionInternal : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_classSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultProxySectionInternal_TypeDefinitionIndex)->GetStaticField(0x23E00);
		}
		::System::Net::IWebProxy* webProxy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL__CTOR_OFFSET))(this);
		}

		static ::System::Net::IWebProxy* GetDefaultProxy_UsingOldMonoCode()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETDEFAULTPROXY_USINGOLDMONOCODE_OFFSET))();
		}

		static ::System::Net::IWebProxy* GetSystemWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSYSTEMWEBPROXY_OFFSET))();
		}

		static ::System::Object* get_ClassSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_CLASSSYNCOBJECT_OFFSET))();
		}

		static ::System::Net::Configuration::DefaultProxySectionInternal* GetSection()
		{
			return ((::System::Net::Configuration::DefaultProxySectionInternal*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSECTION_OFFSET))();
		}

		::System::Net::IWebProxy* get_WebProxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_WEBPROXY_OFFSET))(this);
		}
	};
}
