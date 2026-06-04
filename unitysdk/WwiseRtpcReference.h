#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISERTPCREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1B4D6150)
#define WWISERTPCREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D6160)

inline static constexpr unsigned int WwiseRtpcReference_TypeDefinitionIndex = 41270;

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
