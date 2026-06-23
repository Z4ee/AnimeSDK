#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int CollectionChangeAction_TypeDefinitionIndex = 2832;

	enum class CollectionChangeAction : ::System::Int32
	{
		Add = 1,
		Remove = 2,
		Refresh = 3,
	};
}
