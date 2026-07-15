#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::ConstrainedExecution
{
	inline static constexpr unsigned int Consistency_TypeDefinitionIndex = 1335;

	enum class Consistency : ::System::Int32
	{
		MayCorruptProcess = 0,
		MayCorruptAppDomain = 1,
		MayCorruptInstance = 2,
		WillNotCorruptState = 3,
	};
}
