#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NewInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class ByRefUpdater; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class ConstructorInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19EF78C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x19EF7900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF78B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ByRefNewInstruction_TypeDefinitionIndex = 3545;

	class ByRefNewInstruction : public ::System::Linq::Expressions::Interpreter::NewInstruction
	{
	public:
		::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* _byrefArgs; // 0x20

		::System::Void _ctor(::System::Reflection::ConstructorInfo* target, ::System::Int32 argumentCount, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* byrefArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::System::Int32, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION__CTOR_OFFSET))(this, target, argumentCount, byrefArgs);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
