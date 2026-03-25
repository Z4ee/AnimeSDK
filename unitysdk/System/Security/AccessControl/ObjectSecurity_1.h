#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/NativeObjectSecurity.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int ObjectSecurity_1_TypeDefinitionIndex = 965;

	template <typename T>
	class ObjectSecurity_1 : public ::System::Security::AccessControl::NativeObjectSecurity
	{
	public:
	};
}
