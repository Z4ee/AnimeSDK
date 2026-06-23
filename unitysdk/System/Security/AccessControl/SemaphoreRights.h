#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int SemaphoreRights_TypeDefinitionIndex = 3140;

	enum class SemaphoreRights : ::System::Int32
	{
		Modify = 2,
		Delete = 65536,
		ReadPermissions = 131072,
		ChangePermissions = 262144,
		TakeOwnership = 524288,
		Synchronize = 1048576,
		FullControl = 2031619,
	};
}
