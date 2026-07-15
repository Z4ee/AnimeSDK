#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int OffMeshLinkType_TypeDefinitionIndex = 5653;

	enum class OffMeshLinkType : ::System::Int32
	{
		LinkTypeManual = 0,
		LinkTypeDropDown = 1,
		LinkTypeJumpAcross = 2,
	};
}
