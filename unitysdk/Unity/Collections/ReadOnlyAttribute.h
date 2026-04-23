#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_READONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4239A0)

namespace Unity::Collections
{
	inline static constexpr unsigned int ReadOnlyAttribute_TypeDefinitionIndex = 3791;

	class ReadOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_READONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
