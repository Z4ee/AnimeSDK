#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int UriPartial_TypeDefinitionIndex = 2461;

	enum class UriPartial : ::System::Int32
	{
		Scheme = 0,
		Authority = 1,
		Path = 2,
		Query = 3,
	};
}
