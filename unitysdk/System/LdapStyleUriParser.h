#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"

#define SYSTEM_LDAPSTYLEURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBE010)

namespace System
{
	inline static constexpr unsigned int LdapStyleUriParser_TypeDefinitionIndex = 2684;

	class LdapStyleUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LDAPSTYLEURIPARSER__CTOR_OFFSET))(this);
		}
	};
}
