#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InstructionList_DebugView_InstructionView.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InstructionList; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_GETINSTRUCTIONVIEWS_1_OFFSET UNITYSDK_OFFSET(0x1F7BC6B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_GETINSTRUCTIONVIEWS_OFFSET UNITYSDK_OFFSET(0x1F7BC610)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_GET_A0_OFFSET UNITYSDK_OFFSET(0x1F7BC580)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7BC4E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW__GETINSTRUCTIONVIEWS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F7BCD10)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InstructionList_DebugView_TypeDefinitionIndex = 4704;

	class InstructionList_DebugView : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Interpreter::InstructionList* _list; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::InstructionList* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW__CTOR_OFFSET))(this, list);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>* get_A0()
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_GET_A0_OFFSET))(this);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>* GetInstructionViews(::System::Boolean includeDebugCookies)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_GETINSTRUCTIONVIEWS_OFFSET))(this, includeDebugCookies);
		}

		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>* GetInstructionViews_1(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>* instructions, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects, ::System::Func_2<::System::Int32, ::System::Int32>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* debugCookies)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView>*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW_GETINSTRUCTIONVIEWS_1_OFFSET))(instructions, objects, labelIndexer, debugCookies);
		}

		::System::Int32 _GetInstructionViews_b__4_0(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_DEBUGVIEW__GETINSTRUCTIONVIEWS_B__4_0_OFFSET))(this, index);
		}
	};
}
