#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_SECURITY_SECURITYCRITICALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x185D0FA0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityCriticalAttribute_TypeDefinitionIndex = 933;

	class SecurityCriticalAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYCRITICALATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
