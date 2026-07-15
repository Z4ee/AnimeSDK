#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C8710)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeDisableUnsafePtrRestrictionAttribute_TypeDefinitionIndex = 3992;

	class NativeDisableUnsafePtrRestrictionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
