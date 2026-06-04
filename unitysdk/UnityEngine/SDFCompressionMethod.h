#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SDFCompressionMethod_TypeDefinitionIndex = 4244;

	enum class SDFCompressionMethod : ::System::Int32
	{
		None = 0,
		BC4 = 1,
		NubisDXT1 = 2,
	};
}
