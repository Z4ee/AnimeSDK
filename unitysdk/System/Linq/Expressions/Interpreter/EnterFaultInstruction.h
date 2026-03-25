#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IndexedBranchInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x184C2800)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184C27B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184C27F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x184C2910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x184C2AF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184C2790)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterFaultInstruction_TypeDefinitionIndex = 3316;

	class EnterFaultInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*>** StaticGet_s_cache()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*>**)Il2CppClass::FromTypeDefinitionIndex(EnterFaultInstruction_TypeDefinitionIndex)->GetStaticField(0xF5B0);
		}

		::System::Void _ctor(::System::Int32 labelIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION__CTOR_OFFSET))(this, labelIndex);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::EnterFaultInstruction* Create(::System::Int32 labelIndex)
		{
			return ((::System::Linq::Expressions::Interpreter::EnterFaultInstruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_CREATE_OFFSET))(labelIndex);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
