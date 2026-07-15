#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SynthesizerType_TypeDefinitionIndex = 4767;

	enum class SynthesizerType : ::System::Int32
	{
		Blend = 0,
		Additive = 1,
	};
}
