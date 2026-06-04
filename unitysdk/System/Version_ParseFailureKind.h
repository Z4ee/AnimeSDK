#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int Version_ParseFailureKind_TypeDefinitionIndex = 362;

	enum class Version_ParseFailureKind : ::System::Int32
	{
		ArgumentNullException = 0,
		ArgumentException = 1,
		ArgumentOutOfRangeException = 2,
		FormatException = 3,
	};
}
