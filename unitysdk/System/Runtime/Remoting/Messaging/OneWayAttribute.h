#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ONEWAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0AAF70)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int OneWayAttribute_TypeDefinitionIndex = 1363;

	class OneWayAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ONEWAYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
