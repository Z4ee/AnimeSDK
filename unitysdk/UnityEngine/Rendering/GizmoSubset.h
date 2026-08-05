#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GizmoSubset_TypeDefinitionIndex = 6248;

	enum class GizmoSubset : ::System::Int32
	{
		PreImageEffects = 0,
		PostImageEffects = 1,
	};
}
