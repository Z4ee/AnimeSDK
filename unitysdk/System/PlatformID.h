#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int PlatformID_TypeDefinitionIndex = 416;

	enum class PlatformID : ::System::Int32
	{
		Win32S = 0,
		Win32Windows = 1,
		Win32NT = 2,
		WinCE = 3,
		Unix = 4,
		Xbox = 5,
		MacOSX = 6,
	};
}
