#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NewInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class ByRefUpdater; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class ConstructorInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x195662E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x19566320)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x195662D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ByRefNewInstruction_TypeDefinitionIndex = 3550;

	class ByRefNewInstruction : public ::System::Linq::Expressions::Interpreter::NewInstruction
	{
	public:
		::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* _byrefArgs; // 0x20

		::System::Void _ctor(::System::Reflection::ConstructorInfo* a1, ::System::Int32 a2, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::System::Int32, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
