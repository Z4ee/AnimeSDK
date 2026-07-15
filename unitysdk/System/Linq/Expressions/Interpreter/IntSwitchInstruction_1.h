#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IntSwitchInstruction_1_TypeDefinitionIndex = 3330;

	template <typename T>
	class IntSwitchInstruction_1 : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Collections::Generic::Dictionary_2<T, ::System::Int32>* _cases; // 0x0
	};
}
