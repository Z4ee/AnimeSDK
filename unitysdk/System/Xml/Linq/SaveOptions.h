#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Linq
{
	inline static constexpr unsigned int SaveOptions_TypeDefinitionIndex = 3893;

	enum class SaveOptions : ::System::Int32
	{
		None = 0,
		DisableFormatting = 1,
		OmitDuplicateNamespaces = 2,
	};
}
