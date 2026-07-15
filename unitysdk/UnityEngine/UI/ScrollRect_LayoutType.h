#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScrollRect_LayoutType_TypeDefinitionIndex = 5991;

	enum class ScrollRect_LayoutType : ::System::Int32
	{
		Default = 0,
		LeftOrDown = 1,
		CENTER = 2,
		RigthOrTop = 3,
	};
}
