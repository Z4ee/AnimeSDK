#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int SpeechSystemStatus_TypeDefinitionIndex = 4429;

	enum class SpeechSystemStatus : ::System::Int32
	{
		Stopped = 0,
		Running = 1,
		Failed = 2,
	};
}
