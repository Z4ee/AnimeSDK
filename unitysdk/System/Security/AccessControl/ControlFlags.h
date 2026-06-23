#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int ControlFlags_TypeDefinitionIndex = 980;

	enum class ControlFlags : ::System::Int32
	{
		None = 0,
		OwnerDefaulted = 1,
		GroupDefaulted = 2,
		DiscretionaryAclPresent = 4,
		DiscretionaryAclDefaulted = 8,
		SystemAclPresent = 16,
		SystemAclDefaulted = 32,
		DiscretionaryAclUntrusted = 64,
		ServerSecurity = 128,
		DiscretionaryAclAutoInheritRequired = 256,
		SystemAclAutoInheritRequired = 512,
		DiscretionaryAclAutoInherited = 1024,
		SystemAclAutoInherited = 2048,
		DiscretionaryAclProtected = 4096,
		SystemAclProtected = 8192,
		RMControlValid = 16384,
		SelfRelative = 32768,
	};
}
