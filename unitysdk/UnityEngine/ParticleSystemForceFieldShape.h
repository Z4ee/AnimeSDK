#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemForceFieldShape_TypeDefinitionIndex = 5794;

	enum class ParticleSystemForceFieldShape : ::System::Int32
	{
		Sphere = 0,
		Hemisphere = 1,
		Cylinder = 2,
		Box = 3,
	};
}
