#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_WRITEONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C91F0)

namespace Unity::Collections
{
	inline static constexpr unsigned int WriteOnlyAttribute_TypeDefinitionIndex = 3971;

	class WriteOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_WRITEONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
