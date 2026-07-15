#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsDeviceType_TypeDefinitionIndex = 4695;

	enum class GraphicsDeviceType : ::System::Int32
	{
		OpenGL2 = 0,
		Direct3D9 = 1,
		Direct3D11 = 2,
		PlayStation3 = 3,
		Null = 4,
		Xbox360 = 6,
		OpenGLES2 = 8,
		OpenGLES3 = 11,
		PlayStationVita = 12,
		PlayStation4 = 13,
		XboxOne = 14,
		PlayStationMobile = 15,
		Metal = 16,
		OpenGLCore = 17,
		Direct3D12 = 18,
		N3DS = 19,
		Vulkan = 21,
		Switch = 22,
		XboxOneD3D12 = 23,
		GameCoreXboxOne = 24,
		GameCoreScarlett = 25,
		GameCoreXboxSeries = 25,
		PlayStation5 = 26,
	};
}
