#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class ConstructorInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GETARGS_OFFSET UNITYSDK_OFFSET(0x19F2E6F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x19F2E4B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19F2E4D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x19F2E4C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x19F2E510)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F2E830)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19F2E4A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NewInstruction_TypeDefinitionIndex = 3544;

	class NewInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Reflection::ConstructorInfo* _constructor; // 0x10
		::System::Int32 _argumentCount; // 0x18

		::System::Void _ctor(::System::Reflection::ConstructorInfo* constructor, ::System::Int32 argumentCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION__CTOR_OFFSET))(this, constructor, argumentCount);
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

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_RUN_OFFSET))(this, frame);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Int32 first)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GETARGS_OFFSET))(this, frame, first);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
