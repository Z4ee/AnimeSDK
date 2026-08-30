#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ByRefUpdater.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalDefinition.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InstructionList; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x1E711CD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E711B90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E711B70)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ArrayByRefUpdater_TypeDefinitionIndex = 3489;

	class ArrayByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater
	{
	public:
		::System::Linq::Expressions::Interpreter::LocalDefinition _array; // 0x18
		::System::Linq::Expressions::Interpreter::LocalDefinition _index; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::LocalDefinition a1, ::System::Linq::Expressions::Interpreter::LocalDefinition a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LocalDefinition, ::System::Linq::Expressions::Interpreter::LocalDefinition, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* a1, ::System::Linq::Expressions::Interpreter::LocalVariables* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_UNDEFINETEMPS_OFFSET))(this, a1, a2);
		}
	};
}
