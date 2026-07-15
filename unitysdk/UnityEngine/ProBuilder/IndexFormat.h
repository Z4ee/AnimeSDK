#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int IndexFormat_TypeDefinitionIndex = 41598;

	enum class IndexFormat : ::System::Int32
	{
		Local = 0,
		Common = 1,
		Both = 2,
	};
}
