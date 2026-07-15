#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int DllImportSearchPath_TypeDefinitionIndex = 1412;

	enum class DllImportSearchPath : ::System::Int32
	{
		UseDllDirectoryForDependencies = 256,
		ApplicationDirectory = 512,
		UserDirectories = 1024,
		System32 = 2048,
		SafeDirectories = 4096,
		AssemblyDirectory = 2,
		LegacyBehavior = 0,
	};
}
