#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERSUPPORTSDEFERREDCONVERTLISTTOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED03970)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerSupportsDeferredConvertListToArray_TypeDefinitionIndex = 3996;

	class NativeContainerSupportsDeferredConvertListToArray : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERSUPPORTSDEFERREDCONVERTLISTTOARRAY__CTOR_OFFSET))(this);
		}
	};
}
