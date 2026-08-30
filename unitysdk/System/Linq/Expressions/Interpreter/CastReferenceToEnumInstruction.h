#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/CastInstruction.h"

namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTREFERENCETOENUMINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E715D30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTREFERENCETOENUMINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E715D20)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastReferenceToEnumInstruction_TypeDefinitionIndex = 3657;

	class CastReferenceToEnumInstruction : public ::System::Linq::Expressions::Interpreter::CastInstruction
	{
	public:
		::System::Type* _t; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTREFERENCETOENUMINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTREFERENCETOENUMINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
