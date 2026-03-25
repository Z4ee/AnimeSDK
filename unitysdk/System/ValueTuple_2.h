#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

namespace System
{
	inline static constexpr unsigned int ValueTuple_2_TypeDefinitionIndex = 129;

	template <typename T1, typename T2>
	struct ValueTuple_2
	{
		T1 Item1; // 0x0
		T2 Item2; // 0x0
	};
}
