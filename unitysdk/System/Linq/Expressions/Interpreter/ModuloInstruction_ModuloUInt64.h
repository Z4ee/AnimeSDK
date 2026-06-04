#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ModuloInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA20F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA1340)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ModuloInstruction_ModuloUInt64_TypeDefinitionIndex = 3516;

	class ModuloInstruction_ModuloUInt64 : public ::System::Linq::Expressions::Interpreter::ModuloInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MODULOINSTRUCTION_MODULOUINT64_RUN_OFFSET))(this, a1);
		}
	};
}
