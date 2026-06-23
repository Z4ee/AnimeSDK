#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EC480)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerIsAtomicWriteOnlyAttribute_TypeDefinitionIndex = 5098;

	class NativeContainerIsAtomicWriteOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
