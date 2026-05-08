#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FilmGrainLookup_TypeDefinitionIndex = 30122;

	enum class FilmGrainLookup : ::System::Int32
	{
		Thin1 = 0,
		Thin2 = 1,
		Medium1 = 2,
		Medium2 = 3,
		Medium3 = 4,
		Medium4 = 5,
		Medium5 = 6,
		Medium6 = 7,
		Large01 = 8,
		Large02 = 9,
		Custom = 10,
	};
}
