#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/RuntimeLabel.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x3868820)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InstructionArray_TypeDefinitionIndex = 3422;

	struct alignas(8) InstructionArray
	{
		::System::Int32 MaxStackDepth; // 0x10
		::System::Int32 MaxContinuationDepth; // 0x14
		::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>* Instructions; // 0x18
		::Il2CppArray<::System::Object*>* Objects; // 0x20
		::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>* Labels; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* DebugCookies; // 0x30

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>* a3, ::Il2CppArray<::System::Object*>* a4, ::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>* a5, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
