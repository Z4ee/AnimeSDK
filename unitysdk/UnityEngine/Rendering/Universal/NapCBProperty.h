#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCBProperty_TypeDefinitionIndex = 27728;

	enum class NapCBProperty : ::System::Int32
	{
		AmbientLightStart = 9,
		PerObjectShadowResolveST = 38,
		ToonLightLast = 32,
		CharacterMainLightData1 = 2,
		PerObjectShadowData = 37,
		HeadMatrixWS2OS = 5,
		PerObjectShadowUvMatrix = 33,
		AmbientGradientShape = 3,
		Count = 41,
		CharacterMainLightData = 1,
		PerObjectShadowUvMatrixLast = 36,
		ToonLightStart = 25,
		HeadSphereNormalCenter = 4,
		MiddlePointPosition = 0,
		EntityInfo = 40,
		AmbientLightLast = 24,
		PerObjectShadowOffsetWS = 39,
	};
}
