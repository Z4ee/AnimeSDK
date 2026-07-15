#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int MethodImplOptions_TypeDefinitionIndex = 1383;

	enum class MethodImplOptions : ::System::Int32
	{
		Unmanaged = 4,
		ForwardRef = 16,
		PreserveSig = 128,
		InternalCall = 4096,
		Synchronized = 32,
		NoInlining = 8,
		AggressiveInlining = 256,
		NoOptimization = 64,
	};
}
