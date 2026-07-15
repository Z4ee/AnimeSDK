#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderMode_TypeDefinitionIndex = 5759;

	enum class ParticleSystemRenderMode : ::System::Int32
	{
		Billboard = 0,
		Stretch = 1,
		HorizontalBillboard = 2,
		VerticalBillboard = 3,
		Mesh = 4,
		None = 5,
	};
}
