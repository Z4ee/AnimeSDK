#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_PARAMARRAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x163634F0)

namespace System
{
	inline static constexpr unsigned int ParamArrayAttribute_TypeDefinitionIndex = 312;

	class ParamArrayAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMARRAYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
