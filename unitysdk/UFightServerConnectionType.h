#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int UFightServerConnectionType_TypeDefinitionIndex = 29287;

enum class UFightServerConnectionType : ::System::Int32
{
	FCT_NONE = 0,
	FCT_CONNECT_SUCCESSFUL = 2,
	FCT_LOGIN_SUCCESSFUL = 4,
	FCT_LOGIN_FAILED = 3,
	FCT_CONNECT_FAILED = 1,
};
