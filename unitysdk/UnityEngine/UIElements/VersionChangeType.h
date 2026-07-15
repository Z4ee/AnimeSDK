#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VersionChangeType_TypeDefinitionIndex = 6145;

	enum class VersionChangeType : ::System::Int32
	{
		Bindings = 1,
		ViewData = 2,
		Hierarchy = 4,
		Layout = 8,
		StyleSheet = 16,
		Styles = 32,
		Overflow = 64,
		BorderRadius = 128,
		BorderWidth = 256,
		Transform = 512,
		Size = 1024,
		Repaint = 2048,
		Opacity = 4096,
	};
}
