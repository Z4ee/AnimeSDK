#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int MethodCodeType_TypeDefinitionIndex = 1384;

	enum class MethodCodeType : ::System::Int32
	{
		IL = 0,
		Native = 1,
		OPTIL = 2,
		Runtime = 3,
	};
}
