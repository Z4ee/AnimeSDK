#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/RuntimeLabel.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_GETLABEL_OFFSET UNITYSDK_OFFSET(0x184C29E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x184CBA00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184C27A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IndexedBranchInstruction_TypeDefinitionIndex = 3310;

	class IndexedBranchInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Int32 _labelIndex; // 0x10

		::System::Void _ctor(::System::Int32 labelIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION__CTOR_OFFSET))(this, labelIndex);
		}

		::System::Linq::Expressions::Interpreter::RuntimeLabel GetLabel(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Linq::Expressions::Interpreter::RuntimeLabel(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_GETLABEL_OFFSET))(this, frame);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
