#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EMaterialLodStatus_TypeDefinitionIndex = 26607;

	enum class EMaterialLodStatus : ::System::Int32
	{
		IsShow = 0,
		IsHide = 2,
		Showing = 1,
	};
}
