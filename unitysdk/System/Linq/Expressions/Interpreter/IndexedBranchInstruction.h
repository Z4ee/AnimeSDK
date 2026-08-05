#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/RuntimeLabel.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_GETLABEL_OFFSET UNITYSDK_OFFSET(0x1FAE99A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x1FAE9A00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAE9AC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE9990)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IndexedBranchInstruction_TypeDefinitionIndex = 4592;

	class IndexedBranchInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		// static const ::System::Int32 CacheSize = 0x20; // 0x0
		::System::Int32 _labelIndex; // 0x10

		::System::Void _ctor(::System::Int32 labelIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION__CTOR_OFFSET))(this, labelIndex);
		}

		::System::Linq::Expressions::Interpreter::RuntimeLabel GetLabel(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Linq::Expressions::Interpreter::RuntimeLabel(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_GETLABEL_OFFSET))(this, frame);
		}

		::System::String* ToDebugString(::System::Int32 instructionIndex, ::System::Object* cookie, ::System::Func_2<::System::Int32, ::System::Int32>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TODEBUGSTRING_OFFSET))(this, instructionIndex, cookie, labelIndexer, objects);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
