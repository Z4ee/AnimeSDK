#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int CookieCollection_Stamp_TypeDefinitionIndex = 2794;

	enum class CookieCollection_Stamp : ::System::Int32
	{
		Check = 0,
		Set = 1,
		SetToUnused = 2,
		SetToMaxUsed = 3,
	};
}
