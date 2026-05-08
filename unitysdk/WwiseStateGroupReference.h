#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISESTATEGROUPREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C2A35B0)
#define WWISESTATEGROUPREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A35C0)

inline static constexpr unsigned int WwiseStateGroupReference_TypeDefinitionIndex = 31562;

class WwiseStateGroupReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEGROUPREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEGROUPREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}
};
