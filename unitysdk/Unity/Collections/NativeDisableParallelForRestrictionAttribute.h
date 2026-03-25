#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189EA0A0)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeDisableParallelForRestrictionAttribute_TypeDefinitionIndex = 3794;

	class NativeDisableParallelForRestrictionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
