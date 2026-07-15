#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRCompositorError_TypeDefinitionIndex = 37092;

	enum class EVRCompositorError : ::System::Int32
	{
		None = 0,
		RequestFailed = 1,
		IncompatibleVersion = 100,
		DoNotHaveFocus = 101,
		InvalidTexture = 102,
		IsNotSceneApplication = 103,
		TextureIsOnWrongDevice = 104,
		TextureUsesUnsupportedFormat = 105,
		SharedTexturesNotSupported = 106,
		IndexOutOfRange = 107,
		AlreadySubmitted = 108,
		InvalidBounds = 109,
	};
}
