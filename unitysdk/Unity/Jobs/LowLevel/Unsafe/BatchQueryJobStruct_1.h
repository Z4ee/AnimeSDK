#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int BatchQueryJobStruct_1_TypeDefinitionIndex = 5062;

	template <typename T>
	struct BatchQueryJobStruct_1
	{
		static ::System::IntPtr* StaticGet_jobReflectionData()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(BatchQueryJobStruct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
