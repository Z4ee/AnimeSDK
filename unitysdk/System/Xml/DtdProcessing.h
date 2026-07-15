#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int DtdProcessing_TypeDefinitionIndex = 1792;

	enum class DtdProcessing : ::System::Int32
	{
		Prohibit = 0,
		Ignore = 1,
		Parse = 2,
	};
}
