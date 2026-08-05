#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapProfileId_TypeDefinitionIndex = 27487;

	enum class NapProfileId : ::System::Int32
	{
		VREffectOutline = 9,
		MKGlow = 12,
		CharacterGhost = 14,
		Pixelation = 13,
		VREffectDistortion = 8,
		RadialBlur = 0,
		CharacterIgnisFatuus = 15,
		UberPost = 11,
		NapBloom = 1,
		NapSecondaryBloom = 3,
		UnsharpMask = 10,
		VREffects = 7,
		PostProcessPass_Render = 17,
		OutlineEffect = 2,
		PartialBlur = 5,
		PostProcessPass_RenderFinalPass = 16,
		DistortionBlit = 4,
		ComicDot = 6,
	};
}
