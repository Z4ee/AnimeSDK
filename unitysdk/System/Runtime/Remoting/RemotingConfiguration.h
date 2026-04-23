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

#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_CUSTOMERRORSENABLED_OFFSET UNITYSDK_OFFSET(0x179EF110)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x179ECA90)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x179ECB50)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISREMOTELYACTIVATEDCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x179ED0A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISWELLKNOWNCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x179ED230)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_LOADDEFAULTDELAYEDCHANNELS_OFFSET UNITYSDK_OFFSET(0x179ECC80)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x179ED3C0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDSERVICETYPE_OFFSET UNITYSDK_OFFSET(0x179ED6A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELS_OFFSET UNITYSDK_OFFSET(0x179EDF40)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x179EDD90)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCLIENTPROVIDERTEMPLATE_OFFSET UNITYSDK_OFFSET(0x179EDE20)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERSERVERPROVIDERTEMPLATE_OFFSET UNITYSDK_OFFSET(0x179EDEB0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERTYPES_OFFSET UNITYSDK_OFFSET(0x179EEC00)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x179ED800)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNSERVICETYPE_OFFSET UNITYSDK_OFFSET(0x179EDAE0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SETCUSTOMERRORSMODE_OFFSET UNITYSDK_OFFSET(0x179EF210)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x179ECAF0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x179EF370)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingConfiguration_TypeDefinitionIndex = 1204;

	class RemotingConfiguration : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_wellKnownServiceEntries()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBB0);
		}
		static ::System::String** StaticGet_processGuid()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBB8);
		}
		static ::System::Collections::Hashtable** StaticGet_activatedServiceEntries()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBC0);
		}
		static ::System::Collections::Hashtable** StaticGet_clientProviderTemplates()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBC8);
		}
		static ::System::Collections::Hashtable** StaticGet_serverProviderTemplates()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBD0);
		}
		static ::System::Collections::Hashtable** StaticGet_activatedClientEntries()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBD8);
		}
		static ::System::Collections::Hashtable** StaticGet_channelTemplates()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBE0);
		}
		static ::System::Collections::Hashtable** StaticGet_wellKnownClientEntries()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBE8);
		}
		static ::System::String** StaticGet_applicationName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBF0);
		}
		static ::System::String** StaticGet__errorMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBBF8);
		}
		static ::System::String** StaticGet_applicationID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0xBC00);
		}
		static ::System::Boolean* StaticGet_defaultDelayedConfigRead()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0x4630);
		}
		static ::System::Boolean* StaticGet_defaultConfigRead()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RemotingConfiguration_TypeDefinitionIndex)->GetStaticField(0x4631);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION__CCTOR_OFFSET))();
		}

		static ::System::String* get_ApplicationName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_APPLICATIONNAME_OFFSET))();
		}

		static ::System::Void set_ApplicationName(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SET_APPLICATIONNAME_OFFSET))(value);
		}

		static ::System::String* get_ProcessId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_PROCESSID_OFFSET))();
		}

		static ::System::Void LoadDefaultDelayedChannels()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_LOADDEFAULTDELAYEDCHANNELS_OFFSET))();
		}

		static ::System::Runtime::Remoting::ActivatedClientTypeEntry* IsRemotelyActivatedClientType(::System::Type* svrType)
		{
			return ((::System::Runtime::Remoting::ActivatedClientTypeEntry*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISREMOTELYACTIVATEDCLIENTTYPE_OFFSET))(svrType);
		}

		static ::System::Runtime::Remoting::WellKnownClientTypeEntry* IsWellKnownClientType(::System::Type* svrType)
		{
			return ((::System::Runtime::Remoting::WellKnownClientTypeEntry*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISWELLKNOWNCLIENTTYPE_OFFSET))(svrType);
		}

		static ::System::Void RegisterActivatedClientType(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDCLIENTTYPE_OFFSET))(entry);
		}

		static ::System::Void RegisterActivatedServiceType(::System::Runtime::Remoting::ActivatedServiceTypeEntry* entry)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ActivatedServiceTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDSERVICETYPE_OFFSET))(entry);
		}

		static ::System::Void RegisterWellKnownClientType(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNCLIENTTYPE_OFFSET))(entry);
		}

		static ::System::Void RegisterWellKnownServiceType(::System::Runtime::Remoting::WellKnownServiceTypeEntry* entry)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::WellKnownServiceTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNSERVICETYPE_OFFSET))(entry);
		}

		static ::System::Void RegisterChannelTemplate(::System::Runtime::Remoting::ChannelData* channel)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ChannelData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELTEMPLATE_OFFSET))(channel);
		}

		static ::System::Void RegisterClientProviderTemplate(::System::Runtime::Remoting::ProviderData* prov)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ProviderData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCLIENTPROVIDERTEMPLATE_OFFSET))(prov);
		}

		static ::System::Void RegisterServerProviderTemplate(::System::Runtime::Remoting::ProviderData* prov)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ProviderData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERSERVERPROVIDERTEMPLATE_OFFSET))(prov);
		}

		static ::System::Void RegisterChannels(::System::Collections::ArrayList* channels, ::System::Boolean onlyDelayed)
		{
			return ((::System::Void(*)(::System::Collections::ArrayList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELS_OFFSET))(channels, onlyDelayed);
		}

		static ::System::Void RegisterTypes(::System::Collections::ArrayList* types)
		{
			return ((::System::Void(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERTYPES_OFFSET))(types);
		}

		static ::System::Boolean CustomErrorsEnabled(::System::Boolean isLocalRequest)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_CUSTOMERRORSENABLED_OFFSET))(isLocalRequest);
		}

		static ::System::Void SetCustomErrorsMode(::System::String* mode)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SETCUSTOMERRORSMODE_OFFSET))(mode);
		}
	};
}
