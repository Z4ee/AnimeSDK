#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Permissions
{
	inline static constexpr unsigned int PermissionState_TypeDefinitionIndex = 964;

	enum class PermissionState : ::System::Int32
	{
		Unrestricted = 1,
		None = 0,
	};
}
