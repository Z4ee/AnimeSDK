#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Policy/PolicyStatementAttribute.h"

namespace System::Security { class PermissionSet; }

namespace System::Security::Policy
{
	inline static constexpr unsigned int PolicyStatement_TypeDefinitionIndex = 955;

	class PolicyStatement : public ::System::Object
	{
	public:
		::System::Security::PermissionSet* perms; // 0x10
		::System::Security::Policy::PolicyStatementAttribute attrs; // 0x18
	};
}
