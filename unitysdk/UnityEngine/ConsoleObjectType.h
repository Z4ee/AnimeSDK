#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleObjectType_TypeDefinitionIndex = 5152;

	enum class ConsoleObjectType : ::System::SByte
	{
		UnkownType = 0,
		TextureType = 1,
	};
}
