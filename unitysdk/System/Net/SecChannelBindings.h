#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_SECCHANNELBINDINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC1CA0)

namespace System::Net
{
	inline static constexpr unsigned int SecChannelBindings_TypeDefinitionIndex = 3314;

	class SecChannelBindings : public ::System::Object
	{
	public:
		::System::Int32 dwInitiatorAddrType; // 0x10
		::System::Int32 cbInitiatorLength; // 0x14
		::System::Int32 dwInitiatorOffset; // 0x18
		::System::Int32 dwAcceptorAddrType; // 0x1C
		::System::Int32 cbAcceptorLength; // 0x20
		::System::Int32 dwAcceptorOffset; // 0x24
		::System::Int32 cbApplicationDataLength; // 0x28
		::System::Int32 dwApplicationDataOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECCHANNELBINDINGS__CTOR_OFFSET))(this);
		}
	};
}
