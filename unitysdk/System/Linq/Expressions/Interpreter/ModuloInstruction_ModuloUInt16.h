#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ModuloInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x1DC44C60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC44E80)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ModuloInstruction_ModuloUInt16_TypeDefinitionIndex = 4797;

	class ModuloInstruction_ModuloUInt16 : public ::System::Linq::Expressions::Interpreter::ModuloInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOUINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOUINT16_RUN_OFFSET))(this, frame);
		}
	};
}
