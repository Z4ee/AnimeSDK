#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELINFO_GET_CHANNELDATA_OFFSET UNITYSDK_OFFSET(0x16398F20)
#define SYSTEM_RUNTIME_REMOTING_CHANNELINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16398E80)
#define SYSTEM_RUNTIME_REMOTING_CHANNELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16398990)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ChannelInfo_TypeDefinitionIndex = 1191;

	class ChannelInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* channelData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* remoteChannelData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELINFO__CTOR_1_OFFSET))(this, remoteChannelData);
		}

		::Il2CppArray<::System::Object*>* get_ChannelData()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELINFO_GET_CHANNELDATA_OFFSET))(this);
		}
	};
}
