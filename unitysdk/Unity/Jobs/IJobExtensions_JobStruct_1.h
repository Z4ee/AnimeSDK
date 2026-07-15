#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobExtensions_JobStruct_1_TypeDefinitionIndex = 3947;

	template <typename T>
	struct IJobExtensions_JobStruct_1
	{
		static ::System::IntPtr* StaticGet_jobReflectionData()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(IJobExtensions_JobStruct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
