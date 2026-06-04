#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsAccountType_TypeDefinitionIndex = 981;

	enum class WindowsAccountType : ::System::Int32
	{
		Normal = 0,
		Guest = 1,
		System = 2,
		Anonymous = 3,
	};
}
