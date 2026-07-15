#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int Ephemeron_TypeDefinitionIndex = 1391;

	struct alignas(8) Ephemeron
	{
		::System::Object* key; // 0x10
		::System::Object* value; // 0x18
	};
}
