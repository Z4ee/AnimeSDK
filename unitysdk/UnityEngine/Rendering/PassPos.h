#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PassPos_TypeDefinitionIndex = 4801;

	enum class PassPos : ::System::Int32
	{
		kSubPass = -1,
		kStart = 0,
		kPreShadow = 100,
		kGBuffer = 150,
		kDepthCopy = 200,
		kPostShadow = 250,
		kPreLighting = 300,
		kHiz = 400,
		kOC = 500,
		kDeferLighting = 600,
		kForwardOpaque = 700,
		kSSR = 800,
		kBeforeForwardTransparent = 890,
		kHybridTransparent = 900,
		kForwardTransparent = 910,
		kRefactor = 1000,
		kDistortion = 1100,
		kBeforeUber = 1200,
		kTAA = 1700,
		kUber = 2000,
	};
}
