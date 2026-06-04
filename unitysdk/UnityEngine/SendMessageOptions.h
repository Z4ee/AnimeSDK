#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SendMessageOptions_TypeDefinitionIndex = 3999;

	enum class SendMessageOptions : ::System::Int32
	{
		RequireReceiver = 0,
		DontRequireReceiver = 1,
	};
}
