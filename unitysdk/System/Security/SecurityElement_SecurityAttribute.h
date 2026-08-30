#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_SECURITYELEMENT_SECURITYATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x166D91D0)
#define SYSTEM_SECURITY_SECURITYELEMENT_SECURITYATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x166D91E0)
#define SYSTEM_SECURITY_SECURITYELEMENT_SECURITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x166D6DD0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityElement_SecurityAttribute_TypeDefinitionIndex = 951;

	class SecurityElement_SecurityAttribute : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::System::String* _value; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SECURITYATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SECURITYATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SECURITYATTRIBUTE_GET_VALUE_OFFSET))(this);
		}
	};
}
