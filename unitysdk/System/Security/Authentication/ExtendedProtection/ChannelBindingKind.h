#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int ChannelBindingKind_TypeDefinitionIndex = 3154;

	enum class ChannelBindingKind : ::System::Int32
	{
		Unknown = 0,
		Unique = 25,
		Endpoint = 26,
	};
}
