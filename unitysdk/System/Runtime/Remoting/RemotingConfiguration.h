#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Runtime::Remoting { class ActivatedClientTypeEntry; }
namespace System::Runtime::Remoting { class ActivatedServiceTypeEntry; }
namespace System::Runtime::Remoting { class ChannelData; }
namespace System::Runtime::Remoting { class ProviderData; }
namespace System::Runtime::Remoting { class WellKnownClientTypeEntry; }
namespace System::Runtime::Remoting { class WellKnownServiceTypeEntry; }

#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_CUSTOMERRORSENABLED_OFFSET UNITYSDK_OFFSET(0x1879F4E0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x1879CE30)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x1879CEF0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISREMOTELYACTIVATEDCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x1879D370)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISWELLKNOWNCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x1879D510)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_LOADDEFAULTDELAYEDCHANNELS_OFFSET UNITYSDK_OFFSET(0x1879CFE0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x1879D6B0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDSERVICETYPE_OFFSET UNITYSDK_OFFSET(0x1879D990)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELS_OFFSET UNITYSDK_OFFSET(0x1879E230)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1879E080)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCLIENTPROVIDERTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1879E110)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERSERVERPROVIDERTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1879E1A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERTYPES_OFFSET UNITYSDK_OFFSET(0x1879EF80)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x1879DAF0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNSERVICETYPE_OFFSET UNITYSDK_OFFSET(0x1879DDD0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SETCUSTOMERRORSMODE_OFFSET UNITYSDK_OFFSET(0x1879F5E0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x1879CE90)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1879F740)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingConfiguration_TypeDefinitionIndex = 1203;

	class RemotingConfiguration : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_channelTemplates()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB390);
		}
		static ::System::String** StaticGet__errorMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB398);
		}
		static ::System::String** StaticGet_applicationName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB3A0);
		}
		static ::System::Collections::Hashtable** StaticGet_wellKnownServiceEntries()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB3A8);
		}
		static ::System::Collections::Hashtable** StaticGet_serverProviderTemplates()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB3B0);
		}
		static ::System::Collections::Hashtable** StaticGet_activatedClientEntries()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB3B8);
		}
		static ::System::String** StaticGet_processGuid()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB3C0);
		}
		static ::System::Collections::Hashtable** StaticGet_clientProviderTemplates()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB3C8);
		}
		static ::System::Collections::Hashtable** StaticGet_wellKnownClientEntries()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB3D0);
		}
		static ::System::String** StaticGet_applicationID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB3D8);
		}
		static ::System::Collections::Hashtable** StaticGet_activatedServiceEntries()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xB3E0);
		}
		static ::System::Boolean* StaticGet_defaultConfigRead()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0x4680);
		}
		static ::System::Boolean* StaticGet_defaultDelayedConfigRead()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0x4681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION__CCTOR_OFFSET))();
		}

		static ::System::String* get_ApplicationName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_APPLICATIONNAME_OFFSET))();
		}

		static ::System::Void set_ApplicationName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SET_APPLICATIONNAME_OFFSET))(a1);
		}

		static ::System::String* get_ProcessId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_PROCESSID_OFFSET))();
		}

		static ::System::Void LoadDefaultDelayedChannels()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_LOADDEFAULTDELAYEDCHANNELS_OFFSET))();
		}

		static ::System::Runtime::Remoting::ActivatedClientTypeEntry* IsRemotelyActivatedClientType(::System::Type* a1)
		{
			return ((::System::Runtime::Remoting::ActivatedClientTypeEntry*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISREMOTELYACTIVATEDCLIENTTYPE_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::WellKnownClientTypeEntry* IsWellKnownClientType(::System::Type* a1)
		{
			return ((::System::Runtime::Remoting::WellKnownClientTypeEntry*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISWELLKNOWNCLIENTTYPE_OFFSET))(a1);
		}

		static ::System::Void RegisterActivatedClientType(::System::Runtime::Remoting::ActivatedClientTypeEntry* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDCLIENTTYPE_OFFSET))(a1);
		}

		static ::System::Void RegisterActivatedServiceType(::System::Runtime::Remoting::ActivatedServiceTypeEntry* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ActivatedServiceTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDSERVICETYPE_OFFSET))(a1);
		}

		static ::System::Void RegisterWellKnownClientType(::System::Runtime::Remoting::WellKnownClientTypeEntry* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNCLIENTTYPE_OFFSET))(a1);
		}

		static ::System::Void RegisterWellKnownServiceType(::System::Runtime::Remoting::WellKnownServiceTypeEntry* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::WellKnownServiceTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNSERVICETYPE_OFFSET))(a1);
		}

		static ::System::Void RegisterChannelTemplate(::System::Runtime::Remoting::ChannelData* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ChannelData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELTEMPLATE_OFFSET))(a1);
		}

		static ::System::Void RegisterClientProviderTemplate(::System::Runtime::Remoting::ProviderData* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ProviderData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCLIENTPROVIDERTEMPLATE_OFFSET))(a1);
		}

		static ::System::Void RegisterServerProviderTemplate(::System::Runtime::Remoting::ProviderData* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ProviderData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERSERVERPROVIDERTEMPLATE_OFFSET))(a1);
		}

		static ::System::Void RegisterChannels(::System::Collections::ArrayList* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Collections::ArrayList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELS_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterTypes(::System::Collections::ArrayList* a1)
		{
			return ((::System::Void(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERTYPES_OFFSET))(a1);
		}

		static ::System::Boolean CustomErrorsEnabled(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_CUSTOMERRORSENABLED_OFFSET))(a1);
		}

		static ::System::Void SetCustomErrorsMode(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SETCUSTOMERRORSMODE_OFFSET))(a1);
		}
	};
}
