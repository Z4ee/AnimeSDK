#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int SeekOrigin_TypeDefinitionIndex = 727;

	enum class SeekOrigin : ::System::Int32
	{
		Begin = 0,
		Current = 1,
		End = 2,
	};
}
