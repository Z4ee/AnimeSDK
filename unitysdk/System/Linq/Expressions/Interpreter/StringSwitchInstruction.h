#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Runtime::CompilerServices { template <typename T> class StrongBox_1; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1D24C690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1D24C650)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1D24C6A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D24C640)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StringSwitchInstruction_TypeDefinitionIndex = 4606;

	class StringSwitchInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _cases; // 0x10
		::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>* _nullCase; // 0x18

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* cases, ::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>* nullCase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION__CTOR_OFFSET))(this, cases, nullCase);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}
