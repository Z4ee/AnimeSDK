#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

namespace System
{
	inline static constexpr unsigned int ValueTuple_3_TypeDefinitionIndex = 130;

	template <typename T1, typename T2, typename T3>
	struct ValueTuple_3
	{
		T1 Item1; // 0x0
		T2 Item2; // 0x0
		T3 Item3; // 0x0
	};
}
