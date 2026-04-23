#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A423950)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeDisableParallelForRestrictionAttribute_TypeDefinitionIndex = 3796;

	class NativeDisableParallelForRestrictionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
