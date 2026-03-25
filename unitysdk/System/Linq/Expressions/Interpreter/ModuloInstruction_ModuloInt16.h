#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ModuloInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOINT16_RUN_OFFSET UNITYSDK_OFFSET(0x184EEB40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x184EE8E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ModuloInstruction_ModuloInt16_TypeDefinitionIndex = 3508;

	class ModuloInstruction_ModuloInt16 : public ::System::Linq::Expressions::Interpreter::ModuloInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOINT16_RUN_OFFSET))(this, frame);
		}
	};
}
