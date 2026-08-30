#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Policy { class IMembershipCondition; }
namespace System::Security::Policy { class PolicyStatement; }

namespace System::Security::Policy
{
	inline static constexpr unsigned int CodeGroup_TypeDefinitionIndex = 956;

	class CodeGroup : public ::System::Object
	{
	public:
		::System::Security::Policy::IMembershipCondition* m_membershipCondition; // 0x10
		::System::Security::Policy::PolicyStatement* m_policy; // 0x18
		::System::String* m_description; // 0x20
		::System::Collections::ArrayList* m_children; // 0x28
		::System::String* m_name; // 0x30
	};
}
