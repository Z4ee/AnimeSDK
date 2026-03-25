#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int Process_StreamReadMode_TypeDefinitionIndex = 2535;

	enum class Process_StreamReadMode : ::System::Int32
	{
		undefined = 0,
		syncMode = 1,
		asyncMode = 2,
	};
}
