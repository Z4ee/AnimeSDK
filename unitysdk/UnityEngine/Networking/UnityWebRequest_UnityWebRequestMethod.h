#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequest_UnityWebRequestMethod_TypeDefinitionIndex = 5361;

	enum class UnityWebRequest_UnityWebRequestMethod : ::System::Int32
	{
		Get = 0,
		Post = 1,
		Put = 2,
		Head = 3,
		Custom = 4,
	};
}
