#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::Remoting::Messaging { class CADMethodReturnMessage; }

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainSink_ProcessMessageRes_TypeDefinitionIndex = 1259;

	struct alignas(8) CrossAppDomainSink_ProcessMessageRes
	{
		::Il2CppArray<::System::Byte>* arrResponse; // 0x10
		::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm; // 0x18
	};
}
