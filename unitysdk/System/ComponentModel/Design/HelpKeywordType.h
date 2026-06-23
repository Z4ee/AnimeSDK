#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int HelpKeywordType_TypeDefinitionIndex = 3060;

	enum class HelpKeywordType : ::System::Int32
	{
		F1Keyword = 0,
		GeneralKeyword = 1,
		FilterKeyword = 2,
	};
}
