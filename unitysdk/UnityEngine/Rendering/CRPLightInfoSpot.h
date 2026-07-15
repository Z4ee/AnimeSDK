#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPLightInfoSpot_TypeDefinitionIndex = 4860;

	struct alignas(4) CRPLightInfoSpot
	{
		::System::Single CookieAtten; // 0x10
		::System::Single CookieHeight; // 0x14
	};
}
