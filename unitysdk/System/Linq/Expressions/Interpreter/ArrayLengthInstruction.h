#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E711D60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E711D80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E711D70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E711DD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E711FF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E711DC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ArrayLengthInstruction_TypeDefinitionIndex = 3313;

	class ArrayLengthInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::ArrayLengthInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::ArrayLengthInstruction**)Il2CppClass::FromTypeDefinitionIndex(ArrayLengthInstruction_TypeDefinitionIndex)->GetStaticField(0x2CAF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
