#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189E9BB0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerSupportsMinMaxWriteRestrictionAttribute_TypeDefinitionIndex = 3805;

	class NativeContainerSupportsMinMaxWriteRestrictionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
