#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int Guid_ParseFailureKind_TypeDefinitionIndex = 270;

	enum class Guid_ParseFailureKind : ::System::Int32
	{
		None = 0,
		ArgumentNull = 1,
		Format = 2,
		FormatWithParameter = 3,
		NativeException = 4,
		FormatWithInnerException = 5,
	};
}
