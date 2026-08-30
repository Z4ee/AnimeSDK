#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int SearchOption_TypeDefinitionIndex = 726;

	enum class SearchOption : ::System::Int32
	{
		TopDirectoryOnly = 0,
		AllDirectories = 1,
	};
}
