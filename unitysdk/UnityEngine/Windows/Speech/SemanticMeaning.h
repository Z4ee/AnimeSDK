#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int SemanticMeaning_TypeDefinitionIndex = 4432;

	struct alignas(8) SemanticMeaning
	{
		::System::String* key; // 0x10
		::Il2CppArray<::System::String*>* values; // 0x18
	};
}
