#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableFlag_TypeDefinitionIndex = 5151;

	enum class ConsoleVariableFlag : ::System::SByte
	{
		None = 0,
		BoolType = 1,
		IntType = 2,
		ObjectType = 4,
		TypeMask = 7,
		ConstDuringOneFrame = 8,
		HDRRange = 16,
	};
}
