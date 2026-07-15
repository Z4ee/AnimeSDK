#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISEAUXBUSREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1B7036C0)
#define WWISEAUXBUSREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7036D0)

inline static constexpr unsigned int WwiseAuxBusReference_TypeDefinitionIndex = 42079;

class WwiseAuxBusReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEAUXBUSREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEAUXBUSREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}
};
