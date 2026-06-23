#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"
#include "unitysdk/System/Security/Permissions/SecurityAttribute.h"

#define SYSTEM_SECURITY_PERMISSIONS_CODEACCESSSECURITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2DAA0)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int CodeAccessSecurityAttribute_TypeDefinitionIndex = 952;

	class CodeAccessSecurityAttribute : public ::System::Security::Permissions::SecurityAttribute
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_CODEACCESSSECURITYATTRIBUTE__CTOR_OFFSET))(this, action);
		}
	};
}
