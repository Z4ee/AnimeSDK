#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int UserAuthorization_TypeDefinitionIndex = 4024;

	enum class UserAuthorization : ::System::Int32
	{
		WebCam = 1,
		Microphone = 2,
	};
}
