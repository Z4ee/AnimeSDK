#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Permissions
{
	inline static constexpr unsigned int ReflectionPermissionFlag_TypeDefinitionIndex = 956;

	enum class ReflectionPermissionFlag : ::System::Int32
	{
		NoFlags = 0,
		TypeInformation = 1,
		MemberAccess = 2,
		ReflectionEmit = 4,
		AllFlags = 7,
		RestrictedMemberAccess = 8,
	};
}
