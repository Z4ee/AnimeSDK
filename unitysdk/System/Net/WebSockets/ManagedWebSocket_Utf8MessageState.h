#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_UTF8MESSAGESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D69E0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket_Utf8MessageState_TypeDefinitionIndex = 3873;

	class ManagedWebSocket_Utf8MessageState : public ::System::Object
	{
	public:
		::System::Int32 AdditionalBytesExpected; // 0x10
		::System::Int32 CurrentDecodeBits; // 0x14
		::System::Boolean SequenceInProgress; // 0x18
		::System::Int32 ExpectedValueMin; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_UTF8MESSAGESTATE__CTOR_OFFSET))(this);
		}
	};
}
