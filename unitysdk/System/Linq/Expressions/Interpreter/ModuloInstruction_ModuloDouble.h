#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ModuloInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULODOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x184EE960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULODOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x184EE950)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ModuloInstruction_ModuloDouble_TypeDefinitionIndex = 3515;

	class ModuloInstruction_ModuloDouble : public ::System::Linq::Expressions::Interpreter::ModuloInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULODOUBLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULODOUBLE_RUN_OFFSET))(this, frame);
		}
	};
}
