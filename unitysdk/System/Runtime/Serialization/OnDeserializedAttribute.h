#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2FC90)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OnDeserializedAttribute_TypeDefinitionIndex = 1124;

	class OnDeserializedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
