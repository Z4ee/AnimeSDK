#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WebConnection_NtlmAuthState_TypeDefinitionIndex = 2876;

	enum class WebConnection_NtlmAuthState : ::System::Int32
	{
		None = 0,
		Challenge = 1,
		Response = 2,
	};
}
