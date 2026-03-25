#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189E9B80)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerAttribute_TypeDefinitionIndex = 3802;

	class NativeContainerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
