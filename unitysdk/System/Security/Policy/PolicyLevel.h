#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/PolicyLevelType.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Security { class SecurityElement; }
namespace System::Security::Policy { class CodeGroup; }

#define SYSTEM_SECURITY_POLICY_POLICYLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x161E9AC0)

namespace System::Security::Policy
{
	inline static constexpr unsigned int PolicyLevel_TypeDefinitionIndex = 952;

	class PolicyLevel : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* fullNames; // 0x10
		::System::Collections::ArrayList* full_trust_assemblies; // 0x18
		::System::Collections::ArrayList* named_permission_sets; // 0x20
		::System::String* _location; // 0x28
		::System::Security::SecurityElement* xml; // 0x30
		::System::Security::Policy::CodeGroup* root_code_group; // 0x38
		::System::String* label; // 0x40
		::System::Security::PolicyLevelType _type; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_POLICYLEVEL__CTOR_OFFSET))(this);
		}
	};
}
