#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ByRefUpdater.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_PARAMETERBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19F36530)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_PARAMETERBYREFUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F36520)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ParameterByRefUpdater_TypeDefinitionIndex = 3475;

	class ParameterByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater
	{
	public:
		::System::Linq::Expressions::Interpreter::LocalVariable* _parameter; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::LocalVariable* parameter, ::System::Int32 argumentIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LocalVariable*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_PARAMETERBYREFUPDATER__CTOR_OFFSET))(this, parameter, argumentIndex);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_PARAMETERBYREFUPDATER_UPDATE_OFFSET))(this, frame, value);
		}
	};
}
