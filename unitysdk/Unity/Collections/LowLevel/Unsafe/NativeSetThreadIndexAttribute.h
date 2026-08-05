#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESETTHREADINDEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F344C10)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeSetThreadIndexAttribute_TypeDefinitionIndex = 5102;

	class NativeSetThreadIndexAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESETTHREADINDEXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
