#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/OffsetInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1C3C6FA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C3C7050)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C3C7010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C3C7060)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1C3C7070)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C70D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CoalescingBranchInstruction_TypeDefinitionIndex = 4591;

	class CoalescingBranchInstruction : public ::System::Linq::Expressions::Interpreter::OffsetInstruction
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_cache()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(CoalescingBranchInstruction_TypeDefinitionIndex)->GetStaticField(0x3D10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>* get_Cache()
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_GET_CACHE_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_COALESCINGBRANCHINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
