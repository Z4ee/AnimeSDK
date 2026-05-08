#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapProfileId_TypeDefinitionIndex = 30148;

	enum class NapProfileId : ::System::Int32
	{
		RadialBlur = 0,
		NapBloom = 1,
		OutlineEffect = 2,
		NapSecondaryBloom = 3,
		DistortionBlit = 4,
		PartialBlur = 5,
		ComicDot = 6,
		VREffects = 7,
		VREffectDistortion = 8,
		UnsharpMask = 9,
		UberPost = 10,
		MKGlow = 11,
		CharacterGhost = 12,
		CharacterIgnisFatuus = 13,
		PostProcessPass_RenderFinalPass = 14,
		PostProcessPass_Render = 15,
	};
}
