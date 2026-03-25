#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_FIXUP_OFFSET UNITYSDK_OFFSET(0x184FA360)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x184FA420)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184FA4C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int OffsetInstruction_TypeDefinitionIndex = 3305;

	class OffsetInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Int32 _offset; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Fixup(::System::Int32 offset)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_FIXUP_OFFSET))(this, offset);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
