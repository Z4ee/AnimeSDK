#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/MethodInfoCallInstruction.h"

namespace System::Linq::Expressions::Interpreter { class ByRefUpdater; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AFD0010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AFD00D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD0000)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ByRefMethodInfoCallInstruction_TypeDefinitionIndex = 3319;

	class ByRefMethodInfoCallInstruction : public ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction
	{
	public:
		::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* _byrefArgs; // 0x20

		::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::System::Int32 a2, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Int32, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
