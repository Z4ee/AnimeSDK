#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_FIXUP_OFFSET UNITYSDK_OFFSET(0x1F081810)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x1F0818C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0819E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F081A80)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int OffsetInstruction_TypeDefinitionIndex = 4587;

	class OffsetInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		// static const ::System::Int32 Unknown = 0x80000000; // 0x0
		// static const ::System::Int32 CacheSize = 0x20; // 0x0
		::System::Int32 _offset; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Fixup(::System::Int32 offset)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_FIXUP_OFFSET))(this, offset);
		}

		::System::String* ToDebugString(::System::Int32 instructionIndex, ::System::Object* cookie, ::System::Func_2<::System::Int32, ::System::Int32>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TODEBUGSTRING_OFFSET))(this, instructionIndex, cookie, labelIndexer, objects);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
