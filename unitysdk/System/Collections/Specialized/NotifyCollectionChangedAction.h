#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedAction_TypeDefinitionIndex = 2993;

	enum class NotifyCollectionChangedAction : ::System::Int32
	{
		Add = 0,
		Remove = 1,
		Replace = 2,
		Move = 3,
		Reset = 4,
	};
}
