#pragma once
#include "unitysdk/unitysdk.h"

namespace Utf8Json
{
	inline static constexpr unsigned int CollectionDeserializeToBehaviour_TypeDefinitionIndex = 95006;

	enum class CollectionDeserializeToBehaviour : ::System::Int32
	{
		Add = 0,
		OverwriteReplace = 1,
	};
}
