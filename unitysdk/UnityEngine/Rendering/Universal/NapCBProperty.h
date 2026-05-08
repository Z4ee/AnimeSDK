#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCBProperty_TypeDefinitionIndex = 30074;

	enum class NapCBProperty : ::System::Int32
	{
		MiddlePointPosition = 0,
		CharacterMainLightData = 1,
		CharacterMainLightData1 = 2,
		AmbientGradientShape = 3,
		HeadSphereNormalCenter = 4,
		HeadMatrixWS2OS = 5,
		AmbientLightStart = 9,
		AmbientLightLast = 24,
		ToonLightStart = 25,
		ToonLightLast = 32,
		PerObjectShadowUvMatrix = 33,
		PerObjectShadowUvMatrixLast = 36,
		PerObjectShadowData = 37,
		PerObjectShadowResolveST = 38,
		PerObjectShadowOffsetWS = 39,
		EntityInfo = 40,
		Count = 41,
	};
}
