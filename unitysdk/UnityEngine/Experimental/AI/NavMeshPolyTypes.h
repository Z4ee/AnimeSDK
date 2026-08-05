#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::AI
{
	inline static constexpr unsigned int NavMeshPolyTypes_TypeDefinitionIndex = 28018;

	enum class NavMeshPolyTypes : ::System::Int32
	{
		Ground = 0,
		OffMeshConnection = 1,
	};
}
