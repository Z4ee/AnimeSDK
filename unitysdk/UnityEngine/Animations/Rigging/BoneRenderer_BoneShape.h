#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int BoneRenderer_BoneShape_TypeDefinitionIndex = 80493;

	enum class BoneRenderer_BoneShape : ::System::Int32
	{
		Pyramid = 1,
		Line = 0,
		Box = 2,
	};
}
