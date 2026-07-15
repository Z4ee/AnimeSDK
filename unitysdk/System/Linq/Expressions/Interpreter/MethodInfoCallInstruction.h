#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/CallInstruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GETARGS_OFFSET UNITYSDK_OFFSET(0x1C1B2B60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C1B24D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C1B24F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1C1B25B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C1B2CA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B24E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MethodInfoCallInstruction_TypeDefinitionIndex = 3310;

	class MethodInfoCallInstruction : public ::System::Linq::Expressions::Interpreter::CallInstruction
	{
	public:
		::System::Reflection::MethodInfo* _target; // 0x10
		::System::Int32 _argumentCount; // 0x18

		::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_RUN_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GETARGS_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
