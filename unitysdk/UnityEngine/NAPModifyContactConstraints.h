#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NAPModifyContactConstraints_TypeDefinitionIndex = 7770;

	enum class NAPModifyContactConstraints : ::System::Int32
	{
		None = 0,
		IgnoreNormalY = 1,
		IgnoreContact = 2,
	};
}
