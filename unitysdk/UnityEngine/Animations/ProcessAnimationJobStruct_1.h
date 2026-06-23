#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int ProcessAnimationJobStruct_1_TypeDefinitionIndex = 6669;

	template <typename T>
	struct ProcessAnimationJobStruct_1
	{
		static ::System::IntPtr* StaticGet_jobReflectionData()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(ProcessAnimationJobStruct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
