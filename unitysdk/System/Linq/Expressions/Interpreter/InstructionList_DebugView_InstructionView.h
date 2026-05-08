#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_INSTRUCTIONVIEW_GETDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x9BFB90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_INSTRUCTIONVIEW_GETNAME_OFFSET UNITYSDK_OFFSET(0x9BFB80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_INSTRUCTIONVIEW_GETVALUE_OFFSET UNITYSDK_OFFSET(0x381840)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_INSTRUCTIONVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9BFBA0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InstructionList_DebugView_InstructionView_TypeDefinitionIndex = 4706;

	struct alignas(8) InstructionList_DebugView_InstructionView
	{
		::System::Int32 _index; // 0x10
		::System::Int32 _stackDepth; // 0x14
		::System::Int32 _continuationsDepth; // 0x18
		::System::String* _name; // 0x20
		::System::Linq::Expressions::Interpreter::Instruction* _instruction; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::Instruction* instruction, ::System::String* name, ::System::Int32 index, ::System::Int32 stackDepth, ::System::Int32 continuationsDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Instruction*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_INSTRUCTIONVIEW__CTOR_OFFSET))(this, instruction, name, index, stackDepth, continuationsDepth);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_INSTRUCTIONVIEW_GETNAME_OFFSET))(this);
		}

		::System::String* GetValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_INSTRUCTIONVIEW_GETVALUE_OFFSET))(this);
		}

		::System::String* GetDisplayType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_INSTRUCTIONVIEW_GETDISPLAYTYPE_OFFSET))(this);
		}
	};
}
