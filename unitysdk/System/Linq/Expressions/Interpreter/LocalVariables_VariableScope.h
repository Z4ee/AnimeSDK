#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_VARIABLESCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E74F670)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalVariables_VariableScope_TypeDefinitionIndex = 3521;

	class LocalVariables_VariableScope : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* Parent; // 0x10
		::System::Linq::Expressions::Interpreter::LocalVariable* Variable; // 0x18
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*>* ChildScopes; // 0x20
		::System::Int32 Stop; // 0x28
		::System::Int32 Start; // 0x2C

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::LocalVariable* a1, ::System::Int32 a2, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LocalVariable*, ::System::Int32, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_VARIABLESCOPE__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
