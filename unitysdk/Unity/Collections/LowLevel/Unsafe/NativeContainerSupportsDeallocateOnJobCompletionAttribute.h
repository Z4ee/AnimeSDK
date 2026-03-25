#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189E9B90)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerSupportsDeallocateOnJobCompletionAttribute_TypeDefinitionIndex = 3806;

	class NativeContainerSupportsDeallocateOnJobCompletionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
