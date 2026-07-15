#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPropertyType_TypeDefinitionIndex = 42484;

	enum class aiPropertyType : ::System::Int32
	{
		Unknown = 0,
		Bool = 1,
		Int = 2,
		UInt = 3,
		Float = 4,
		Float2 = 5,
		Float3 = 6,
		Float4 = 7,
		Float4x4 = 8,
		BoolArray = 9,
		IntArray = 10,
		UIntArray = 11,
		FloatArray = 12,
		Float2Array = 13,
		Float3Array = 14,
		Float4Array = 15,
		Float4x4Array = 16,
		ScalarTypeBegin = 1,
		ScalarTypeEnd = 8,
		ArrayTypeBegin = 9,
		ArrayTypeEnd = 16,
	};
}
