#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ViewTechnology_TypeDefinitionIndex = 3096;

	enum class ViewTechnology : ::System::Int32
	{
		Passthrough = 0,
		WindowsForms = 1,
		Default = 2,
	};
}
