#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRendererTarget_TypeDefinitionIndex = 5251;

	enum class ParticleSystemRendererTarget : ::System::Int32
	{
		World = 0,
		Canvas = 1,
	};
}
