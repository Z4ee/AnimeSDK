#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EDecalHideType_TypeDefinitionIndex = 27044;

	enum class EDecalHideType : ::System::Int32
	{
		HideAll = 1,
		JustEmission = 0,
	};
}
