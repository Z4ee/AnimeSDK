#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ModuloInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x1F479980)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F479B90)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ModuloInstruction_ModuloSingle_TypeDefinitionIndex = 4800;

	class ModuloInstruction_ModuloSingle : public ::System::Linq::Expressions::Interpreter::ModuloInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOSINGLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOSINGLE_RUN_OFFSET))(this, frame);
		}
	};
}
