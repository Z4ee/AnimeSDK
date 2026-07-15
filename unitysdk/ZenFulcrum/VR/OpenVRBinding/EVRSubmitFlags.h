#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRSubmitFlags_TypeDefinitionIndex = 37067;

	enum class EVRSubmitFlags : ::System::Int32
	{
		Submit_Default = 0,
		Submit_LensDistortionAlreadyApplied = 1,
		Submit_GlRenderBuffer = 2,
		Submit_Reserved = 4,
		Submit_TextureWithPose = 8,
	};
}
