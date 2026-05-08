#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISEEVENTREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C4CD140)
#define WWISEEVENTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CD150)

inline static constexpr unsigned int WwiseEventReference_TypeDefinitionIndex = 31557;

class WwiseEventReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEEVENTREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEEVENTREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}
};
