#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CRPGlobalMutationNameStats.h"

namespace System { class String; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPPassGlobalMutationStats_TypeDefinitionIndex = 4828;

	struct alignas(8) CRPPassGlobalMutationStats
	{
		::System::String* passName; // 0x10
		::System::Int32 totalMutationCount; // 0x18
		::System::Int32 keywordMutationCount; // 0x1C
		::Il2CppArray<::UnityEngine::Rendering::CRPGlobalMutationNameStats>* params; // 0x20
		::Il2CppArray<::UnityEngine::Rendering::CRPGlobalMutationNameStats>* keywords; // 0x28
	};
}
