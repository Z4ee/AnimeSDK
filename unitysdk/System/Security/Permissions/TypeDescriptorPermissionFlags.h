#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Permissions
{
	inline static constexpr unsigned int TypeDescriptorPermissionFlags_TypeDefinitionIndex = 3142;

	enum class TypeDescriptorPermissionFlags : ::System::Int32
	{
		NoFlags = 0,
		RestrictedRegistrationAccess = 1,
	};
}
