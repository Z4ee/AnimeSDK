#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TRAFFICREDLIMITAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB1EC0)

inline static constexpr unsigned int TrafficRedLimitArea_TypeDefinitionIndex = 43862;

class TrafficRedLimitArea : public ::System::Object
{
public:
	::System::String* areaName; // 0x10
	::System::Single stayTime; // 0x18
	::System::Int32 transitionId; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAFFICREDLIMITAREA__CTOR_OFFSET))(this);
	}
};
