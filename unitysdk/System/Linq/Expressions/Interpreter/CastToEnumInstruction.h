#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/CastInstruction.h"

namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTTOENUMINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AD71370)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTTOENUMINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD71360)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastToEnumInstruction_TypeDefinitionIndex = 3644;

	class CastToEnumInstruction : public ::System::Linq::Expressions::Interpreter::CastInstruction
	{
	public:
		::System::Type* _t; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTTOENUMINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTTOENUMINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
