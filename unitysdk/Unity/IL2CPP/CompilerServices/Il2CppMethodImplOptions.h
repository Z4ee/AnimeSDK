#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppMethodImplOptions_TypeDefinitionIndex = 6972;

	enum class Il2CppMethodImplOptions : ::System::Int32
	{
		ForceInlining = 1,
		ILForceInlining = 2,
		ILForceRemove = 8,
		NoMerge = 4,
	};
}
