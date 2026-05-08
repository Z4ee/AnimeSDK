#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IndexedBranchInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE080C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AE08080)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1AE08040)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AE08090)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AE08220)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE08320)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE080A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GotoInstruction_TypeDefinitionIndex = 4594;

	class GotoInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::GotoInstruction*>** StaticGet_s_cache()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::GotoInstruction*>**)Il2CppClass::FromTypeDefinitionIndex(GotoInstruction_TypeDefinitionIndex)->GetStaticField(0x41D0);
		}
		// static const ::System::Int32 Variants = 0x8; // 0x0
		::System::Boolean _labelTargetGetsValue; // 0x18
		::System::Boolean _hasValue; // 0x19
		::System::Boolean _hasResult; // 0x1A

		::System::Void _ctor(::System::Int32 targetIndex, ::System::Boolean hasResult, ::System::Boolean hasValue, ::System::Boolean labelTargetGetsValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION__CTOR_OFFSET))(this, targetIndex, hasResult, hasValue, labelTargetGetsValue);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::GotoInstruction* Create(::System::Int32 labelIndex, ::System::Boolean hasResult, ::System::Boolean hasValue, ::System::Boolean labelTargetGetsValue)
		{
			return ((::System::Linq::Expressions::Interpreter::GotoInstruction*(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_CREATE_OFFSET))(labelIndex, hasResult, hasValue, labelTargetGetsValue);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
