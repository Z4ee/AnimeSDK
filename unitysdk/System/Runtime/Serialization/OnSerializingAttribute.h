#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ONSERIALIZINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x187CC9F0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OnSerializingAttribute_TypeDefinitionIndex = 1112;

	class OnSerializingAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ONSERIALIZINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
