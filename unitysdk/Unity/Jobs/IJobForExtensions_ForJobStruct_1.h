#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobForExtensions_ForJobStruct_1_TypeDefinitionIndex = 5054;

	template <typename T>
	struct IJobForExtensions_ForJobStruct_1
	{
		static ::System::IntPtr* StaticGet_jobReflectionData()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(IJobForExtensions_ForJobStruct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
