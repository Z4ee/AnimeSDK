#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseGroupValueObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
class WwiseStateGroupReference;

#define WWISESTATEREFERENCE_GET_GROUPOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18C4F750)
#define WWISESTATEREFERENCE_GET_GROUPWWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x18C4F7D0)
#define WWISESTATEREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x18C4F740)
#define WWISESTATEREFERENCE_SET_GROUPOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18C4F760)
#define WWISESTATEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4F7E0)

inline static constexpr unsigned int WwiseStateReference_TypeDefinitionIndex = 34626;

class WwiseStateReference : public ::WwiseGroupValueObjectReference
{
public:
	::WwiseStateGroupReference* WwiseStateGroupReference; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}

	::WwiseObjectReference* get_GroupObjectReference()
	{
		return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE_GET_GROUPOBJECTREFERENCE_OFFSET))(this);
	}

	::System::Void set_GroupObjectReference(::WwiseObjectReference* value)
	{
		return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE_SET_GROUPOBJECTREFERENCE_OFFSET))(this, value);
	}

	::WwiseObjectType get_GroupWwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE_GET_GROUPWWISEOBJECTTYPE_OFFSET))(this);
	}
};
