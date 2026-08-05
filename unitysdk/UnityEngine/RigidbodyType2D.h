#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RigidbodyType2D_TypeDefinitionIndex = 18784;

	enum class RigidbodyType2D : ::System::Int32
	{
		Dynamic = 0,
		Kinematic = 1,
		Static = 2,
	};
}
