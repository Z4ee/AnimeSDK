#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Runtime::CompilerServices { template <typename T> class StrongBox_1; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E7606A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E760660)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E7606B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E760650)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StringSwitchInstruction_TypeDefinitionIndex = 3339;

	class StringSwitchInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>* _nullCase; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _cases; // 0x18

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a1, ::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}
