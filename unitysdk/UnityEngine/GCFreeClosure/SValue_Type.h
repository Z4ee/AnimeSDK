#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_Type_TypeDefinitionIndex = 4453;

	enum class SValue_Type : ::System::Int32
	{
		Nil = 0,
		Boolean = 1,
		Int8 = 2,
		UInt8 = 3,
		Char = 4,
		Int16 = 5,
		UInt16 = 6,
		Int32 = 7,
		UInt32 = 8,
		Int64 = 9,
		UInt64 = 10,
		Single = 11,
		Double = 12,
		String = 13,
		Object = 14,
	};
}
