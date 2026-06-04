#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/CommonObjectSecurity.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int NativeObjectSecurity_TypeDefinitionIndex = 964;

	class NativeObjectSecurity : public ::System::Security::AccessControl::CommonObjectSecurity
	{
	public:
	};
}
