#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPGlobalMutationNameStats_TypeDefinitionIndex = 4827;

	struct alignas(8) CRPGlobalMutationNameStats
	{
		::System::String* name; // 0x10
		::System::Int32 count; // 0x18
	};
}
