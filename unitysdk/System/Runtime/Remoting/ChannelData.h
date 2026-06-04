#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x18775510)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CLIENTPROVIDERS_OFFSET UNITYSDK_OFFSET(0x18775440)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CUSTOMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x187754A0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_SERVERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x187753E0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18776200)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ChannelData_TypeDefinitionIndex = 1205;

	class ChannelData : public ::System::Object
	{
	public:
		::System::String* Id; // 0x10
		::System::Collections::ArrayList* _clientProviders; // 0x18
		::System::String* Type; // 0x20
		::System::String* DelayLoadAsClientChannel; // 0x28
		::System::String* Ref; // 0x30
		::System::Collections::ArrayList* _serverProviders; // 0x38
		::System::Collections::Hashtable* _customProperties; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_ServerProviders()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_SERVERPROVIDERS_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_ClientProviders()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CLIENTPROVIDERS_OFFSET))(this);
		}

		::System::Collections::Hashtable* get_CustomProperties()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CUSTOMPROPERTIES_OFFSET))(this);
		}

		::System::Void CopyFrom(::System::Runtime::Remoting::ChannelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ChannelData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_COPYFROM_OFFSET))(this, a1);
		}
	};
}
