#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Linq
{
	inline static constexpr unsigned int LoadOptions_TypeDefinitionIndex = 4913;

	enum class LoadOptions : ::System::Int32
	{
		None = 0,
		PreserveWhitespace = 1,
		SetBaseUri = 2,
		SetLineInfo = 4,
	};
}
