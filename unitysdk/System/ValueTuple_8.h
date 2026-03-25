#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

namespace System
{
	inline static constexpr unsigned int ValueTuple_8_TypeDefinitionIndex = 135;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
	struct ValueTuple_8
	{
		T1 Item1; // 0x0
		T2 Item2; // 0x0
		T3 Item3; // 0x0
		T4 Item4; // 0x0
		T5 Item5; // 0x0
		T6 Item6; // 0x0
		T7 Item7; // 0x0
		TRest Rest; // 0x0
	};
}
