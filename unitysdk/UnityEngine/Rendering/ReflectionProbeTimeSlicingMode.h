#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeTimeSlicingMode_TypeDefinitionIndex = 4706;

	enum class ReflectionProbeTimeSlicingMode : ::System::Int32
	{
		AllFacesAtOnce = 0,
		IndividualFaces = 1,
		NoTimeSlicing = 2,
	};
}
