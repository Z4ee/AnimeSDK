#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA0060)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalAccessInstruction_TypeDefinitionIndex = 3485;

	class LocalAccessInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Int32 _index; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION__CTOR_OFFSET))(this, a1);
		}
	};
}
