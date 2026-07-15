#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceEventType_TypeDefinitionIndex = 2531;

	enum class TraceEventType : ::System::Int32
	{
		Critical = 1,
		Error = 2,
		Warning = 4,
		Information = 8,
		Verbose = 16,
		Start = 256,
		Stop = 512,
		Suspend = 1024,
		Resume = 2048,
		Transfer = 4096,
	};
}
