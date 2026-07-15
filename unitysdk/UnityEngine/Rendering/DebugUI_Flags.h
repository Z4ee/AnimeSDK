#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Flags_TypeDefinitionIndex = 34109;

	enum class DebugUI_Flags : ::System::Int32
	{
		None = 0,
		EditorOnly = 2,
		RuntimeOnly = 4,
		EditorForceUpdate = 8,
	};
}
