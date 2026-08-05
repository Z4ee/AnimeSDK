#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int BoneRenderer_BoneShape_TypeDefinitionIndex = 60934;

	enum class BoneRenderer_BoneShape : ::System::Int32
	{
		Box = 2,
		Pyramid = 1,
		Line = 0,
	};
}
