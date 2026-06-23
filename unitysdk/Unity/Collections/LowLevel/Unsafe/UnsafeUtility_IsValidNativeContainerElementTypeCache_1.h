#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeUtility_IsValidNativeContainerElementTypeCache_1_TypeDefinitionIndex = 5110;

	template <typename T>
	struct UnsafeUtility_IsValidNativeContainerElementTypeCache_1
	{
		static ::System::Int32* StaticGet_value()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnsafeUtility_IsValidNativeContainerElementTypeCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
