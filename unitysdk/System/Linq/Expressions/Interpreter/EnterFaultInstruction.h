#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IndexedBranchInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD74D50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1AD74D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AD74D40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AD74E40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD75090)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD74CE0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterFaultInstruction_TypeDefinitionIndex = 3319;

	class EnterFaultInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*>** StaticGet_s_cache()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*>**)Il2CppClass::FromTypeDefinitionIndex(EnterFaultInstruction_TypeDefinitionIndex)->GetStaticField(0x2A580);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION__CTOR_OFFSET))(this, a1);
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

		static ::System::Linq::Expressions::Interpreter::EnterFaultInstruction* Create(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::EnterFaultInstruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_CREATE_OFFSET))(a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
