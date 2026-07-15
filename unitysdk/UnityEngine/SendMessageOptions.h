#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SendMessageOptions_TypeDefinitionIndex = 4004;

	enum class SendMessageOptions : ::System::Int32
	{
		RequireReceiver = 0,
		DontRequireReceiver = 1,
	};
}
