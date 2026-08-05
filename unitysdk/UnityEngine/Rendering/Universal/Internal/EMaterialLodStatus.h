#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EMaterialLodStatus_TypeDefinitionIndex = 26857;

	enum class EMaterialLodStatus : ::System::Int32
	{
		IsHide = 2,
		IsShow = 0,
		Showing = 1,
	};
}
