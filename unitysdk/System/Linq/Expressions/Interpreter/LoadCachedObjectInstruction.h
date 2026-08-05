#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1EEF5890)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1EEF5880)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1EEF58D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x1EEF59B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EEF5AF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF5870)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadCachedObjectInstruction_TypeDefinitionIndex = 4891;

	class LoadCachedObjectInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::UInt32 _index; // 0x10

		::System::Void _ctor(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION__CTOR_OFFSET))(this, index);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_RUN_OFFSET))(this, frame);
		}

		::System::String* ToDebugString(::System::Int32 instructionIndex, ::System::Object* cookie, ::System::Func_2<::System::Int32, ::System::Int32>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TODEBUGSTRING_OFFSET))(this, instructionIndex, cookie, labelIndexer, objects);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
