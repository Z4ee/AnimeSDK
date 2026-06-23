#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Web
{
	inline static constexpr unsigned int AspNetHostingPermissionLevel_TypeDefinitionIndex = 4102;

	enum class AspNetHostingPermissionLevel : ::System::Int32
	{
		High = 500,
		Low = 300,
		Medium = 400,
		Minimal = 200,
		None = 100,
		Unrestricted = 600,
	};
}
