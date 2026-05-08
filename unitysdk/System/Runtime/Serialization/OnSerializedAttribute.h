#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ONSERIALIZEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E16E30)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OnSerializedAttribute_TypeDefinitionIndex = 1162;

	class OnSerializedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ONSERIALIZEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
