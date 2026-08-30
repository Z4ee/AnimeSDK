#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq::Expressions::Interpreter { class InstructionList; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x1AFD0F70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD0F60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ByRefUpdater_TypeDefinitionIndex = 3487;

	class ByRefUpdater : public ::System::Object
	{
	public:
		::System::Int32 ArgumentIndex; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER__CTOR_OFFSET))(this, a1);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* a1, ::System::Linq::Expressions::Interpreter::LocalVariables* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_UNDEFINETEMPS_OFFSET))(this, a1, a2);
		}
	};
}
