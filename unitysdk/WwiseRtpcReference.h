#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISERTPCREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1F8C30C0)
#define WWISERTPCREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C30D0)

inline static constexpr unsigned int WwiseRtpcReference_TypeDefinitionIndex = 33747;

class WwiseRtpcReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISERTPCREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISERTPCREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}
};
