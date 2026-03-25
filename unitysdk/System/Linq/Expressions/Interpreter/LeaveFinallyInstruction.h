#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x184D3C60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184D3C70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x184D3CB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x184D3CF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184D3C50)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveFinallyInstruction_TypeDefinitionIndex = 3315;

	class LeaveFinallyInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LeaveFinallyInstruction_TypeDefinitionIndex)->GetStaticField(0xFB90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
