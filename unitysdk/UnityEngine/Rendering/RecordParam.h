#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RecordParam_TypeDefinitionIndex = 4816;

	struct alignas(8) RecordParam
	{
		::System::String* key; // 0x10
		::System::String* value; // 0x18
	};
}
