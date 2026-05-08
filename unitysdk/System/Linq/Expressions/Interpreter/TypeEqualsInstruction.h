#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1BFEBD60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1BFEBD80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1BFEBD70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1BFEBDD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFEBE70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFEBDC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TypeEqualsInstruction_TypeDefinitionIndex = 4914;

	class TypeEqualsInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::TypeEqualsInstruction**)Il2CppClass::FromTypeDefinitionIndex(TypeEqualsInstruction_TypeDefinitionIndex)->GetStaticField(0x3E30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
