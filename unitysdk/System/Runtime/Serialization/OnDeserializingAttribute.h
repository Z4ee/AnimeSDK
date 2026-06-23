#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AEDA0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OnDeserializingAttribute_TypeDefinitionIndex = 1162;

	class OnDeserializingAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
