#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERISREADONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE0030)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerIsReadOnlyAttribute_TypeDefinitionIndex = 5097;

	class NativeContainerIsReadOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERISREADONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
