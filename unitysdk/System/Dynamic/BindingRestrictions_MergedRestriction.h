#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/BindingRestrictions.h"

namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_MERGEDRESTRICTION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1BDA4950)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_MERGEDRESTRICTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA48E0)

namespace System::Dynamic
{
	inline static constexpr unsigned int BindingRestrictions_MergedRestriction_TypeDefinitionIndex = 4970;

	class BindingRestrictions_MergedRestriction : public ::System::Dynamic::BindingRestrictions
	{
	public:
		::System::Dynamic::BindingRestrictions* Left; // 0x10
		::System::Dynamic::BindingRestrictions* Right; // 0x18

		::System::Void _ctor(::System::Dynamic::BindingRestrictions* left, ::System::Dynamic::BindingRestrictions* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Dynamic::BindingRestrictions*, ::System::Dynamic::BindingRestrictions*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_MERGEDRESTRICTION__CTOR_OFFSET))(this, left, right);
		}

		::System::Linq::Expressions::Expression* GetExpression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_MERGEDRESTRICTION_GETEXPRESSION_OFFSET))(this);
		}
	};
}
