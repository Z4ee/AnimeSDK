#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AOMethod_TypeDefinitionIndex = 4820;

	enum class AOMethod : ::System::Int32
	{
		None = 0,
		SSAO = 1,
		HBAO = 2,
		GTAO = 3,
	};
}
