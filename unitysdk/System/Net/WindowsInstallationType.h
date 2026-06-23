#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WindowsInstallationType_TypeDefinitionIndex = 3298;

	enum class WindowsInstallationType : ::System::Int32
	{
		Unknown = 0,
		Client = 1,
		Server = 2,
		ServerCore = 3,
		Embedded = 4,
	};
}
