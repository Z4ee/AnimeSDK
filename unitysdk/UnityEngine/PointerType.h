#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PointerType_TypeDefinitionIndex = 5211;

	enum class PointerType : ::System::Int32
	{
		Mouse = 0,
		Touch = 1,
		Pen = 2,
	};
}
