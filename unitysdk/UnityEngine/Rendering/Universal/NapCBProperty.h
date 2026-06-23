#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCBProperty_TypeDefinitionIndex = 27093;

	enum class NapCBProperty : ::System::Int32
	{
		PerObjectShadowResolveST = 38,
		AmbientGradientShape = 3,
		HeadSphereNormalCenter = 4,
		PerObjectShadowData = 37,
		ToonLightLast = 32,
		AmbientLightStart = 9,
		CharacterMainLightData = 1,
		Count = 41,
		HeadMatrixWS2OS = 5,
		CharacterMainLightData1 = 2,
		EntityInfo = 40,
		ToonLightStart = 25,
		PerObjectShadowUvMatrix = 33,
		PerObjectShadowUvMatrixLast = 36,
		PerObjectShadowOffsetWS = 39,
		AmbientLightLast = 24,
		MiddlePointPosition = 0,
	};
}
