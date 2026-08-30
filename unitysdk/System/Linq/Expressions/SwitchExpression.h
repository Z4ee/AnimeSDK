#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class SwitchCase; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_CASES_OFFSET UNITYSDK_OFFSET(0x1DF51580)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_COMPARISON_OFFSET UNITYSDK_OFFSET(0x1DF515A0)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_DEFAULTBODY_OFFSET UNITYSDK_OFFSET(0x1DF51590)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_SWITCHVALUE_OFFSET UNITYSDK_OFFSET(0x1DF51570)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SwitchExpression_TypeDefinitionIndex = 3276;

	class SwitchExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _DefaultBody_k__BackingField; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* _Cases_k__BackingField; // 0x18
		::System::Linq::Expressions::Expression* _SwitchValue_k__BackingField; // 0x20
		::System::Reflection::MethodInfo* _Comparison_k__BackingField; // 0x28

		::System::Linq::Expressions::Expression* get_SwitchValue()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_SWITCHVALUE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* get_Cases()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_CASES_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_DefaultBody()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_DEFAULTBODY_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Comparison()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_COMPARISON_OFFSET))(this);
		}
	};
}
