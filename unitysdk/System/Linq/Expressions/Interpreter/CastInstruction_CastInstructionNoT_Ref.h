#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionNoT.h"

namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_REF_CONVERTNULL_OFFSET UNITYSDK_OFFSET(0x1AD70B60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_REF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD70920)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastInstruction_CastInstructionNoT_Ref_TypeDefinitionIndex = 3642;

	class CastInstruction_CastInstructionNoT_Ref : public ::System::Linq::Expressions::Interpreter::CastInstruction_CastInstructionNoT
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_REF__CTOR_OFFSET))(this, a1);
		}

		::System::Void ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CASTINSTRUCTIONNOT_REF_CONVERTNULL_OFFSET))(this, a1);
		}
	};
}
