#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InstructionArray.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/RuntimeLabel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_CLOSURESIZE_OFFSET UNITYSDK_OFFSET(0x1AFD3840)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_CLOSUREVARIABLES_OFFSET UNITYSDK_OFFSET(0x1AFEB6D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_INSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1AFEB6B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_LOCALCOUNT_OFFSET UNITYSDK_OFFSET(0x1AFEB6A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AFEB690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_RUN_OFFSET UNITYSDK_OFFSET(0x1AFEB6E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFEB800)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEB630)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int Interpreter_TypeDefinitionIndex = 3438;

	class Interpreter : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_NoValue()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Interpreter_TypeDefinitionIndex)->GetStaticField(0x323B0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* _ClosureVariables_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>* _labels; // 0x20
		::Il2CppArray<::System::Object*>* _objects; // 0x28
		::System::Linq::Expressions::Interpreter::InstructionArray _instructions; // 0x30
		::Il2CppArray<::System::Linq::Expressions::Interpreter::DebugInfo*>* _debugInfos; // 0x58
		::System::Int32 _LocalCount_k__BackingField; // 0x60

		::System::Void _ctor(::System::String* a1, ::System::Linq::Expressions::Interpreter::LocalVariables* a2, ::System::Linq::Expressions::Interpreter::InstructionArray a3, ::Il2CppArray<::System::Linq::Expressions::Interpreter::DebugInfo*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Linq::Expressions::Interpreter::LocalVariables*, ::System::Linq::Expressions::Interpreter::InstructionArray, ::Il2CppArray<::System::Linq::Expressions::Interpreter::DebugInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_LocalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_LOCALCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ClosureSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_CLOSURESIZE_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::InstructionArray get_Instructions()
		{
			return ((::System::Linq::Expressions::Interpreter::InstructionArray(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_INSTRUCTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* get_ClosureVariables()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_CLOSUREVARIABLES_OFFSET))(this);
		}

		::System::Void Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_RUN_OFFSET))(this, a1);
		}
	};
}
