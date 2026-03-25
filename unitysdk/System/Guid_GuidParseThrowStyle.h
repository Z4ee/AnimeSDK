#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int Guid_GuidParseThrowStyle_TypeDefinitionIndex = 270;

	enum class Guid_GuidParseThrowStyle : ::System::Int32
	{
		None = 0,
		All = 1,
		AllButOverflow = 2,
	};
}
