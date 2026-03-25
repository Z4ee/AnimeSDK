#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseGroupValueObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
class WwiseSwitchGroupReference;

#define WWISESWITCHREFERENCE_GET_GROUPOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18C4F840)
#define WWISESWITCHREFERENCE_GET_GROUPWWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x18C4F8C0)
#define WWISESWITCHREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x18C4F830)
#define WWISESWITCHREFERENCE_SET_GROUPOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18C4F850)
#define WWISESWITCHREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4F8D0)

inline static constexpr unsigned int WwiseSwitchReference_TypeDefinitionIndex = 34628;

class WwiseSwitchReference : public ::WwiseGroupValueObjectReference
{
public:
	::WwiseSwitchGroupReference* WwiseSwitchGroupReference; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}

	::WwiseObjectReference* get_GroupObjectReference()
	{
		return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE_GET_GROUPOBJECTREFERENCE_OFFSET))(this);
	}

	::System::Void set_GroupObjectReference(::WwiseObjectReference* value)
	{
		return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE_SET_GROUPOBJECTREFERENCE_OFFSET))(this, value);
	}

	::WwiseObjectType get_GroupWwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE_GET_GROUPWWISEOBJECTTYPE_OFFSET))(this);
	}
};
