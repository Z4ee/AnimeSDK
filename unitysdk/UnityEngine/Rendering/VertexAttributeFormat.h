#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VertexAttributeFormat_TypeDefinitionIndex = 4676;

	enum class VertexAttributeFormat : ::System::Int32
	{
		Float32 = 0,
		Float16 = 1,
		UNorm8 = 2,
		SNorm8 = 3,
		UNorm16 = 4,
		SNorm16 = 5,
		UInt8 = 6,
		SInt8 = 7,
		UInt16 = 8,
		SInt16 = 9,
		UInt32 = 10,
		SInt32 = 11,
	};
}
