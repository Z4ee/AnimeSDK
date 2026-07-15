#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppMethodImplOptions_TypeDefinitionIndex = 3966;

	enum class Il2CppMethodImplOptions : ::System::Int32
	{
		ForceInlining = 1,
		ILForceInlining = 2,
		NoMerge = 4,
		ILForceRemove = 8,
	};
}
