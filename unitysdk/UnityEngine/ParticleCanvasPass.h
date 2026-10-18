#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleCanvasPass_TypeDefinitionIndex = 6021;

	enum class ParticleCanvasPass : ::System::Byte
	{
		Main = 0x0,
		Trail = 0x1,
	};
}
