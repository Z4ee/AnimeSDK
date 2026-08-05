#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/CastInstruction.h"

namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_CREATE_OFFSET UNITYSDK_OFFSET(0x1F750CA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_RUN_OFFSET UNITYSDK_OFFSET(0x1F750D60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F750C90)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastInstruction_CastInstructionNoT_TypeDefinitionIndex = 4924;

	class CastInstruction_CastInstructionNoT : public ::System::Linq::Expressions::Interpreter::CastInstruction
	{
	public:
		::System::Type* _t; // 0x10

		::System::Void _ctor(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT__CTOR_OFFSET))(this, t);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction* Create(::System::Type* t)
		{
			return ((::System::Linq::Expressions::Interpreter::CastInstruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_CREATE_OFFSET))(t);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_RUN_OFFSET))(this, frame);
		}
	};
}
