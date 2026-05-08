#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERNEEDSTHREADINDEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE6AB20)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerNeedsThreadIndexAttribute_TypeDefinitionIndex = 5104;

	class NativeContainerNeedsThreadIndexAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERNEEDSTHREADINDEXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
