#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderingThreadingMode_TypeDefinitionIndex = 4715;

	enum class RenderingThreadingMode : ::System::Int32
	{
		Direct = 0,
		SingleThreaded = 1,
		MultiThreaded = 2,
		LegacyJobified = 3,
		NativeGraphicsJobs = 4,
		NativeGraphicsJobsWithoutRenderThread = 5,
	};
}
