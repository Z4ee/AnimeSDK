#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x18501940)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x18501960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x18501950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x185019A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18501A20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18501930)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TypeIsInstruction_TypeDefinitionIndex = 3625;

	class TypeIsInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Type* _type; // 0x10

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION__CTOR_OFFSET))(this, type);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_RUN_OFFSET))(this, frame);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
