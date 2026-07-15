#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CameraType_TypeDefinitionIndex = 4141;

	enum class CameraType : ::System::Int32
	{
		Game = 1,
		SceneView = 2,
		Preview = 4,
		VR = 8,
		Reflection = 16,
		FogEmission = 32,
		PVS = 64,
		GBufferOnly = 128,
		Transparent = 256,
		CullingOnly = 512,
	};
}
