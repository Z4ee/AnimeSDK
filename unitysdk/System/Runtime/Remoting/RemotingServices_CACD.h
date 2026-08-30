#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CACD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFD1B0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingServices_CACD_TypeDefinitionIndex = 1219;

	class RemotingServices_CACD : public ::System::Object
	{
	public:
		::System::Object* d; // 0x10
		::System::Object* c; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CACD__CTOR_OFFSET))(this);
		}
	};
}
