#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppHideMetadataTypes_TypeDefinitionIndex = 6958;

	enum class Il2CppHideMetadataTypes : ::System::Int32
	{
		None = 0,
		All = 31,
		Events = 16,
		Methods = 2,
		Fields = 8,
		Standard = 1,
		Properties = 4,
	};
}
