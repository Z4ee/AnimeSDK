#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x1BDCF1B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDCD520)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalAccessInstruction_TypeDefinitionIndex = 4769;

	class LocalAccessInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Int32 _index; // 0x10

		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION__CTOR_OFFSET))(this, index);
		}

		::System::String* ToDebugString(::System::Int32 instructionIndex, ::System::Object* cookie, ::System::Func_2<::System::Int32, ::System::Int32>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION_TODEBUGSTRING_OFFSET))(this, instructionIndex, cookie, labelIndexer, objects);
		}
	};
}
