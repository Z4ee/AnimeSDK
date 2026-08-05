#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationTopicConstraint_TypeDefinitionIndex = 5462;

	enum class DictationTopicConstraint : ::System::Int32
	{
		WebSearch = 0,
		Form = 1,
		Dictation = 2,
	};
}
