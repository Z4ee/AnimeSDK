#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISETRIGGERREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D2F5140)
#define WWISETRIGGERREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F5150)

inline static constexpr unsigned int WwiseTriggerReference_TypeDefinitionIndex = 43701;

class WwiseTriggerReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISETRIGGERREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISETRIGGERREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}
};
