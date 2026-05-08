#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/OffsetInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1B6CF170)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1B6CF220)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1B6CF1E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1B6CF230)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CF330)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int BranchFalseInstruction_TypeDefinitionIndex = 4589;

	class BranchFalseInstruction : public ::System::Linq::Expressions::Interpreter::OffsetInstruction
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_cache()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(BranchFalseInstruction_TypeDefinitionIndex)->GetStaticField(0x44F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>* get_Cache()
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_CACHE_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
