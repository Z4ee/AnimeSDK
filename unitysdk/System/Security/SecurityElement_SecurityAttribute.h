#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_SECURITYELEMENT_SECURITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9DD400)

namespace System::Security
{
	inline static constexpr unsigned int SecurityElement_SecurityAttribute_TypeDefinitionIndex = 946;

	class SecurityElement_SecurityAttribute : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::System::String* _value; // 0x18

		::System::Void _ctor(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SECURITYATTRIBUTE__CTOR_OFFSET))(this, name, value);
		}
	};
}
