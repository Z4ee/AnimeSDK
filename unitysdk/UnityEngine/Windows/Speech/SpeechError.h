#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int SpeechError_TypeDefinitionIndex = 4430;

	enum class SpeechError : ::System::Int32
	{
		NoError = 0,
		TopicLanguageNotSupported = 1,
		GrammarLanguageMismatch = 2,
		GrammarCompilationFailure = 3,
		AudioQualityFailure = 4,
		PauseLimitExceeded = 5,
		TimeoutExceeded = 6,
		NetworkFailure = 7,
		MicrophoneUnavailable = 8,
		UnknownError = 9,
	};
}
