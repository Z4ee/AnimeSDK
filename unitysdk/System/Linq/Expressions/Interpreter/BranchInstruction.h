#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/OffsetInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1E306620)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E3068A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E3068E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E3068B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E306920)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3068D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3068C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int BranchInstruction_TypeDefinitionIndex = 4591;

	class BranchInstruction : public ::System::Linq::Expressions::Interpreter::OffsetInstruction
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>*>*>** StaticGet_s_caches()
		{
			return (::Il2CppArray<::Il2CppArray<::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(BranchInstruction_TypeDefinitionIndex)->GetStaticField(0x4020);
		}
		::System::Boolean _hasValue; // 0x18
		::System::Boolean _hasResult; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean hasResult, ::System::Boolean hasValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION__CTOR_1_OFFSET))(this, hasResult, hasValue);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>* get_Cache()
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CACHE_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
