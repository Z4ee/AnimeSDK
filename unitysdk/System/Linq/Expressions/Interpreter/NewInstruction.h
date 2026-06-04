#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class ConstructorInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GETARGS_OFFSET UNITYSDK_OFFSET(0x1ADA6060)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADA5E20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADA5E40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADA5E30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA5E80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ADA6180)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA5E10)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NewInstruction_TypeDefinitionIndex = 3545;

	class NewInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Reflection::ConstructorInfo* _constructor; // 0x10
		::System::Int32 _argumentCount; // 0x18

		::System::Void _ctor(::System::Reflection::ConstructorInfo* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_RUN_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GETARGS_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
