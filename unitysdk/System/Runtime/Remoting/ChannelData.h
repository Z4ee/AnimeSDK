#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1CCB8140)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CLIENTPROVIDERS_OFFSET UNITYSDK_OFFSET(0x1CCB7FE0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CUSTOMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CCB8090)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_SERVERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x1CCB7F30)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB8F80)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ChannelData_TypeDefinitionIndex = 1250;

	class ChannelData : public ::System::Object
	{
	public:
		::System::String* Ref; // 0x10
		::System::Collections::Hashtable* _customProperties; // 0x18
		::System::String* Type; // 0x20
		::System::Collections::ArrayList* _clientProviders; // 0x28
		::System::Collections::ArrayList* _serverProviders; // 0x30
		::System::String* DelayLoadAsClientChannel; // 0x38
		::System::String* Id; // 0x40

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

		::System::Void CopyFrom(::System::Runtime::Remoting::ChannelData* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ChannelData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_COPYFROM_OFFSET))(this, other);
		}
	};
}
