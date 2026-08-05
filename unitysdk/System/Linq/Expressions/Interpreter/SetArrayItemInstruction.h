#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1F47A7A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1F47A7B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1F47A7F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F47A8F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F47A790)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SetArrayItemInstruction_TypeDefinitionIndex = 4579;

	class SetArrayItemInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::SetArrayItemInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::SetArrayItemInstruction**)Il2CppClass::FromTypeDefinitionIndex(SetArrayItemInstruction_TypeDefinitionIndex)->GetStaticField(0x3E20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
