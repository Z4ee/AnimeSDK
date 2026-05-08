#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EffectWallPosConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TRAFFICLIGHTWALLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A15B900)

inline static constexpr unsigned int TrafficLightWallConfig_TypeDefinitionIndex = 47071;

class TrafficLightWallConfig : public ::System::Object
{
public:
	::System::String* effectKey; // 0x10
	::System::Collections::Generic::List_1<::EffectWallPosConfig*>* posInfo; // 0x18
	::System::Boolean isActive; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAFFICLIGHTWALLCONFIG__CTOR_OFFSET))(this);
	}
};
