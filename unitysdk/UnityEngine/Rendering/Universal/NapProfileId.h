#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapProfileId_TypeDefinitionIndex = 26375;

	enum class NapProfileId : ::System::Int32
	{
		OutlineEffect = 2,
		RadialBlur = 0,
		CharacterGhost = 14,
		VREffectDistortion = 8,
		NapSecondaryBloom = 3,
		PostProcessPass_Render = 17,
		NapBloom = 1,
		VREffects = 7,
		MKGlow = 12,
		DistortionBlit = 4,
		PartialBlur = 5,
		VREffectOutline = 9,
		PostProcessPass_RenderFinalPass = 16,
		ComicDot = 6,
		CharacterIgnisFatuus = 15,
		UnsharpMask = 10,
		Pixelation = 13,
		UberPost = 11,
	};
}
