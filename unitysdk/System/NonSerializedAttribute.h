#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_NONSERIALIZEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBB340)

namespace System
{
	inline static constexpr unsigned int NonSerializedAttribute_TypeDefinitionIndex = 291;

	class NonSerializedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NONSERIALIZEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
