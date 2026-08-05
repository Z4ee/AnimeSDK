#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq::Expressions::Interpreter { class InstructionList; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x1EEF2D70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF2D60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ByRefUpdater_TypeDefinitionIndex = 4757;

	class ByRefUpdater : public ::System::Object
	{
	public:
		::System::Int32 ArgumentIndex; // 0x10

		::System::Void _ctor(::System::Int32 argumentIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER__CTOR_OFFSET))(this, argumentIndex);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_UNDEFINETEMPS_OFFSET))(this, instructions, locals);
		}
	};
}
