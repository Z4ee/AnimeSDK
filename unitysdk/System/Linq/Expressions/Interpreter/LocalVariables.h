#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalDefinition.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions::Interpreter { class InstructionList; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables_VariableScope; }
namespace System::Linq::Expressions::Interpreter { template <typename T1, typename T2> class HybridReferenceDictionary_2; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_ADDCLOSUREVARIABLE_OFFSET UNITYSDK_OFFSET(0x19F28D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_BOX_OFFSET UNITYSDK_OFFSET(0x19F289F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_DEFINELOCAL_OFFSET UNITYSDK_OFFSET(0x19F28770)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_GET_CLOSUREVARIABLES_OFFSET UNITYSDK_OFFSET(0x19F28CF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_GET_LOCALCOUNT_OFFSET UNITYSDK_OFFSET(0x19F28BC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_TRYGETLOCALORCLOSURE_OFFSET UNITYSDK_OFFSET(0x19F28BD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_UNDEFINELOCAL_OFFSET UNITYSDK_OFFSET(0x19F28940)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES__CTOR_OFFSET UNITYSDK_OFFSET(0x19F28E40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalVariables_TypeDefinitionIndex = 3507;

	class LocalVariables : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* _closureVariables; // 0x10
		::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* _variables; // 0x18
		::System::Int32 _maxLocalCount; // 0x20
		::System::Int32 _localCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES__CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::LocalDefinition DefineLocal(::System::Linq::Expressions::ParameterExpression* variable, ::System::Int32 start)
		{
			return ((::System::Linq::Expressions::Interpreter::LocalDefinition(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_DEFINELOCAL_OFFSET))(this, variable, start);
		}

		::System::Void UndefineLocal(::System::Linq::Expressions::Interpreter::LocalDefinition definition, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LocalDefinition, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_UNDEFINELOCAL_OFFSET))(this, definition, end);
		}

		::System::Void Box(::System::Linq::Expressions::ParameterExpression* variable, ::System::Linq::Expressions::Interpreter::InstructionList* instructions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::InstructionList*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_BOX_OFFSET))(this, variable, instructions);
		}

		::System::Int32 get_LocalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_GET_LOCALCOUNT_OFFSET))(this);
		}

		::System::Boolean TryGetLocalOrClosure(::System::Linq::Expressions::ParameterExpression* var, ::System::Linq::Expressions::Interpreter::LocalVariable*& local)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_TRYGETLOCALORCLOSURE_OFFSET))(this, var, local);
		}

		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* get_ClosureVariables()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_GET_CLOSUREVARIABLES_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::LocalVariable* AddClosureVariable(::System::Linq::Expressions::ParameterExpression* variable)
		{
			return ((::System::Linq::Expressions::Interpreter::LocalVariable*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_ADDCLOSUREVARIABLE_OFFSET))(this, variable);
		}
	};
}
