#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int WellKnownObjectMode_TypeDefinitionIndex = 1223;

	enum class WellKnownObjectMode : ::System::Int32
	{
		Singleton = 1,
		SingleCall = 2,
	};
}
