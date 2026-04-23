#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x19F02970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19F02990)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x19F02980)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x19F029D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F02B30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19F02960)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GetArrayItemInstruction_TypeDefinitionIndex = 3298;

	class GetArrayItemInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::GetArrayItemInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::GetArrayItemInstruction**)Il2CppClass::FromTypeDefinitionIndex(GetArrayItemInstruction_TypeDefinitionIndex)->GetStaticField(0x12A10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
