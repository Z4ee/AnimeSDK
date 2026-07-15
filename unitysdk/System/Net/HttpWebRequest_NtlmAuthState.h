#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpWebRequest_NtlmAuthState_TypeDefinitionIndex = 2851;

	enum class HttpWebRequest_NtlmAuthState : ::System::Int32
	{
		None = 0,
		Challenge = 1,
		Response = 2,
	};
}
