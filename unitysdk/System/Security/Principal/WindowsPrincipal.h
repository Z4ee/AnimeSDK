#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Claims/ClaimsPrincipal.h"

namespace System { class String; }
namespace System::Security::Principal { class WindowsIdentity; }

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsPrincipal_TypeDefinitionIndex = 1030;

	class WindowsPrincipal : public ::System::Security::Claims::ClaimsPrincipal
	{
	public:
		::System::Security::Principal::WindowsIdentity* _identity; // 0x30
		::Il2CppArray<::System::String*>* m_roles; // 0x38
	};
}
