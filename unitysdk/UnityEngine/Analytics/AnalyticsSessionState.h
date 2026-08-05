#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Analytics
{
	inline static constexpr unsigned int AnalyticsSessionState_TypeDefinitionIndex = 93735;

	enum class AnalyticsSessionState : ::System::Int32
	{
		kSessionStopped = 0,
		kSessionStarted = 1,
		kSessionPaused = 2,
		kSessionResumed = 3,
	};
}
