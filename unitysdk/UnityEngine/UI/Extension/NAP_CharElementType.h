#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_CharElementType_TypeDefinitionIndex = 49999;

	enum class NAP_CharElementType : ::System::Byte
	{
		Icon = 0x1,
		Character = 0x0,
	};
}
