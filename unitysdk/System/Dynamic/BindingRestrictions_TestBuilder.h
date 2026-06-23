#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/BindingRestrictions_TestBuilder_AndNode.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Dynamic { class BindingRestrictions; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TESTBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x1E110610)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TESTBUILDER_PUSH_OFFSET UNITYSDK_OFFSET(0x1E1106C0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TESTBUILDER_TOEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E110830)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TESTBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E110950)

namespace System::Dynamic
{
	inline static constexpr unsigned int BindingRestrictions_TestBuilder_TypeDefinitionIndex = 4967;

	class BindingRestrictions_TestBuilder : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Dynamic::BindingRestrictions_TestBuilder_AndNode>* _tests; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* _unique; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TESTBUILDER__CTOR_OFFSET))(this);
		}

		::System::Void Append(::System::Dynamic::BindingRestrictions* restrictions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Dynamic::BindingRestrictions*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TESTBUILDER_APPEND_OFFSET))(this, restrictions);
		}

		::System::Linq::Expressions::Expression* ToExpression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TESTBUILDER_TOEXPRESSION_OFFSET))(this);
		}

		::System::Void Push(::System::Linq::Expressions::Expression* node, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TESTBUILDER_PUSH_OFFSET))(this, node, depth);
		}
	};
}
