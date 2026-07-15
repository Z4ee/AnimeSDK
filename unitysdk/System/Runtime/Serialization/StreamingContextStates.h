#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int StreamingContextStates_TypeDefinitionIndex = 1128;

	enum class StreamingContextStates : ::System::Int32
	{
		CrossProcess = 1,
		CrossMachine = 2,
		File = 4,
		Persistence = 8,
		Remoting = 16,
		Other = 32,
		Clone = 64,
		CrossAppDomain = 128,
		All = 255,
	};
}
