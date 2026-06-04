#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x1AD861D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AD861C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1AD861E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AD86220)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD86250)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD861B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveFaultInstruction_TypeDefinitionIndex = 3320;

	class LeaveFaultInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LeaveFaultInstruction_TypeDefinitionIndex)->GetStaticField(0x2ACE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ConsumedContinuations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
