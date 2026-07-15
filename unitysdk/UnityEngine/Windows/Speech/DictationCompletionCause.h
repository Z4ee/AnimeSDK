#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationCompletionCause_TypeDefinitionIndex = 4431;

	enum class DictationCompletionCause : ::System::Int32
	{
		Complete = 0,
		AudioQualityFailure = 1,
		Canceled = 2,
		TimeoutExceeded = 3,
		PauseLimitExceeded = 4,
		NetworkFailure = 5,
		MicrophoneUnavailable = 6,
		UnknownError = 7,
	};
}
