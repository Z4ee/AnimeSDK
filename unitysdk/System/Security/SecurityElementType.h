#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security
{
	inline static constexpr unsigned int SecurityElementType_TypeDefinitionIndex = 943;

	enum class SecurityElementType : ::System::Int32
	{
		Regular = 0,
		Format = 1,
		Comment = 2,
	};
}
