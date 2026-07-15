#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SSGIDisocclusionFixMethod_TypeDefinitionIndex = 4833;

	enum class SSGIDisocclusionFixMethod : ::System::Int32
	{
		None = 0,
		Mip = 1,
		Bilateral = 2,
	};
}
