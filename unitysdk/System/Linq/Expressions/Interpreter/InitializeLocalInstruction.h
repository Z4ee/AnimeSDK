#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalAccessInstruction.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184CBC60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InitializeLocalInstruction_TypeDefinitionIndex = 3493;

	class InitializeLocalInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction
	{
	public:
		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION__CTOR_OFFSET))(this, index);
		}
	};
}
