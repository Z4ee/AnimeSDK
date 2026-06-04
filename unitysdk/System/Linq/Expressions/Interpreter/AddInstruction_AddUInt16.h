#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AddInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x1AD6A540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD69CA0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AddInstruction_AddUInt16_TypeDefinitionIndex = 3274;

	class AddInstruction_AddUInt16 : public ::System::Linq::Expressions::Interpreter::AddInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDUINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDUINT16_RUN_OFFSET))(this, a1);
		}
	};
}
