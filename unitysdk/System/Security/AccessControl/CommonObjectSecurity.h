#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/ObjectSecurity.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int CommonObjectSecurity_TypeDefinitionIndex = 970;

	class CommonObjectSecurity : public ::System::Security::AccessControl::ObjectSecurity
	{
	public:
	};
}
