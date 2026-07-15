#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackTrace_TraceFormat_TypeDefinitionIndex = 1578;

	enum class StackTrace_TraceFormat : ::System::Int32
	{
		Normal = 0,
		TrailingNewLine = 1,
		NoResourceLookup = 2,
	};
}
