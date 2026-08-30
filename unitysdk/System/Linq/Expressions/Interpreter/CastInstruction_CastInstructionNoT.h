#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/CastInstruction.h"

namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_CREATE_OFFSET UNITYSDK_OFFSET(0x1AFD2900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_RUN_OFFSET UNITYSDK_OFFSET(0x1AFD2A20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD29F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastInstruction_CastInstructionNoT_TypeDefinitionIndex = 3653;

	class CastInstruction_CastInstructionNoT : public ::System::Linq::Expressions::Interpreter::CastInstruction
	{
	public:
		::System::Type* _t; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT__CTOR_OFFSET))(this, a1);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction* Create(::System::Type* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::CastInstruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_CREATE_OFFSET))(a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_RUN_OFFSET))(this, a1);
		}
	};
}
