#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InstructionArray.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InstructionList_DebugView_InstructionView.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_DEBUGVIEW_GETINSTRUCTIONVIEWS_OFFSET UNITYSDK_OFFSET(0x1F6896B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_DEBUGVIEW_GET_A0_OFFSET UNITYSDK_OFFSET(0x1F689640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_DEBUGVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1F689570)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_DEBUGVIEW__GETINSTRUCTIONVIEWS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F689730)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InstructionArray_DebugView_TypeDefinitionIndex = 4702;

	class InstructionArray_DebugView : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Interpreter::InstructionArray _array; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::InstructionArray array)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionArray))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_DEBUGVIEW__CTOR_OFFSET))(this, array);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>* get_A0()
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_DEBUGVIEW_GET_A0_OFFSET))(this);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>* GetInstructionViews(::System::Boolean includeDebugCookies)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_DEBUGVIEW_GETINSTRUCTIONVIEWS_OFFSET))(this, includeDebugCookies);
		}

		::System::Int32 _GetInstructionViews_b__4_0(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_DEBUGVIEW__GETINSTRUCTIONVIEWS_B__4_0_OFFSET))(this, index);
		}
	};
}
