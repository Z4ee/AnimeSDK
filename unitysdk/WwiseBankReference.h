#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISEBANKREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1B7036F0)
#define WWISEBANKREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B703700)

inline static constexpr unsigned int WwiseBankReference_TypeDefinitionIndex = 42080;

class WwiseBankReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEBANKREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEBANKREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}
};
