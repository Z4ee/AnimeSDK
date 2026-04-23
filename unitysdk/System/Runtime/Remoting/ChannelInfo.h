#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELINFO_GET_CHANNELDATA_OFFSET UNITYSDK_OFFSET(0x179C59B0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179C5910)
#define SYSTEM_RUNTIME_REMOTING_CHANNELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x179C5420)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ChannelInfo_TypeDefinitionIndex = 1193;

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
