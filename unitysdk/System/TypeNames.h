#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_TYPENAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B7180)

namespace System
{
	inline static constexpr unsigned int TypeNames_TypeDefinitionIndex = 425;

	class TypeNames : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMES__CTOR_OFFSET))(this);
		}
	};
}
