#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_SERIALIZABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x166DE680)

namespace System
{
	inline static constexpr unsigned int SerializableAttribute_TypeDefinitionIndex = 326;

	class SerializableAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SERIALIZABLEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
