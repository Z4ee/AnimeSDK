#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProxy_State_TypeDefinitionIndex = 33858;

	enum class VolumeProxy_State : ::System::Int32
	{
		None = 0,
		Pending = 1,
		Finished = 2,
	};
}
