#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISEACOUSTICTEXTUREREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1A68A9F0)
#define WWISEACOUSTICTEXTUREREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68AA00)

inline static constexpr unsigned int WwiseAcousticTextureReference_TypeDefinitionIndex = 40436;

class WwiseAcousticTextureReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEACOUSTICTEXTUREREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEACOUSTICTEXTUREREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}
};
