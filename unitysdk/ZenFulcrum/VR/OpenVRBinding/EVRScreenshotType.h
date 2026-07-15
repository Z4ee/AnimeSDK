#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRScreenshotType_TypeDefinitionIndex = 37082;

	enum class EVRScreenshotType : ::System::Int32
	{
		None = 0,
		Mono = 1,
		Stereo = 2,
		Cubemap = 3,
		MonoPanorama = 4,
		StereoPanorama = 5,
	};
}
