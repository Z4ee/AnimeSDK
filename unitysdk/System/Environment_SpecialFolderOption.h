#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int Environment_SpecialFolderOption_TypeDefinitionIndex = 371;

	enum class Environment_SpecialFolderOption : ::System::Int32
	{
		None = 0,
		DoNotVerify = 16384,
		Create = 32768,
	};
}
