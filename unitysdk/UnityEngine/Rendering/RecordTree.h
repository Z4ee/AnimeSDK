#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RecordParam.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RecordTree_TypeDefinitionIndex = 4817;

	struct alignas(8) RecordTree
	{
		::Il2CppArray<::UnityEngine::Rendering::RecordParam>* recordParams; // 0x10
		::System::Boolean valid; // 0x18
	};
}
