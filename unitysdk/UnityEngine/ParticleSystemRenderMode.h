#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderMode_TypeDefinitionIndex = 18801;

	enum class ParticleSystemRenderMode : ::System::Int32
	{
		Billboard = 0,
		Stretch = 1,
		HorizontalBillboard = 2,
		VerticalBillboard = 3,
		Mesh = 4,
		Text = 5,
		None = 6,
	};
}
