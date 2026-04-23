#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BlockExpression.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_GETORMAKEVARIABLES_OFFSET UNITYSDK_OFFSET(0x19F402B0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_GET_VARIABLESLIST_OFFSET UNITYSDK_OFFSET(0x19F402F0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_REUSEORVALIDATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x19F40230)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19F3FFF0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ScopeExpression_TypeDefinitionIndex = 3185;

	class ScopeExpression : public ::System::Linq::Expressions::BlockExpression
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* _variables; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION__CTOR_OFFSET))(this, variables);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* GetOrMakeVariables()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_GETORMAKEVARIABLES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* get_VariablesList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_GET_VARIABLESLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* ReuseOrValidateVariables(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_REUSEORVALIDATEVARIABLES_OFFSET))(this, variables);
		}
	};
}
