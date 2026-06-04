#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

namespace System { class String; }

#define WWISEGROUPVALUEOBJECTREFERENCE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B4D6050)
#define WWISEGROUPVALUEOBJECTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D60F0)
#define WWISEGROUPVALUEOBJECTREFERENCE___IFIXBASEPROXY_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B4D6110)

inline static constexpr unsigned int WwiseGroupValueObjectReference_TypeDefinitionIndex = 41268;

class WwiseGroupValueObjectReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEGROUPVALUEOBJECTREFERENCE__CTOR_OFFSET))(this);
	}

	::System::String* get_DisplayName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEGROUPVALUEOBJECTREFERENCE_GET_DISPLAYNAME_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_get_DisplayName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEGROUPVALUEOBJECTREFERENCE___IFIXBASEPROXY_GET_DISPLAYNAME_OFFSET))(this);
	}
};
