#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

namespace System
{
	inline static constexpr unsigned int ValueTuple_1_TypeDefinitionIndex = 128;

	template <typename T1>
	struct ValueTuple_1
	{
		T1 Item1; // 0x0
	};
}
