#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"

namespace System::Security { class IPermission; }

#define SYSTEM_SECURITY_PERMISSIONS_SECURITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD58DF0)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int SecurityAttribute_TypeDefinitionIndex = 958;

	class SecurityAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean m_Unrestricted; // 0x10
		::System::Security::Permissions::SecurityAction m_Action; // 0x14

		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYATTRIBUTE__CTOR_OFFSET))(this, action);
		}
	};
}
