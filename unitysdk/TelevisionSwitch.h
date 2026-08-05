#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TELEVISIONSWITCH_CHECKCLICK_OFFSET UNITYSDK_OFFSET(0x1C13F270)
#define TELEVISIONSWITCH_SWITCHNEXT_OFFSET UNITYSDK_OFFSET(0x1C13F130)
#define TELEVISIONSWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C13F220)
#define TELEVISIONSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13FA90)

inline static constexpr unsigned int TelevisionSwitch_TypeDefinitionIndex = 90957;

class TelevisionSwitch : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TELEVISIONSWITCH__CTOR_OFFSET))(this);
	}

	::System::Void SwitchNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TELEVISIONSWITCH_SWITCHNEXT_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TELEVISIONSWITCH_UPDATE_OFFSET))(this);
	}

	::System::Void CheckClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TELEVISIONSWITCH_CHECKCLICK_OFFSET))(this);
	}
};
