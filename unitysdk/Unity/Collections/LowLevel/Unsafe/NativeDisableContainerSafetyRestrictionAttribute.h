#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29B9E0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeDisableContainerSafetyRestrictionAttribute_TypeDefinitionIndex = 5105;

	class NativeDisableContainerSafetyRestrictionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
