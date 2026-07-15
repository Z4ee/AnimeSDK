#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemBakeMeshOptions_TypeDefinitionIndex = 5795;

	enum class ParticleSystemBakeMeshOptions : ::System::Int32
	{
		BakeRotationAndScale = 1,
		BakePosition = 2,
		ParticleBakeMeshAddPadding = 4,
		Default = 0,
	};
}
