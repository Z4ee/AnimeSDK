#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LightCompiler; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GETDEBUGCOOKIE_OFFSET UNITYSDK_OFFSET(0x1E116EC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x1E116DB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E116D90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONTINUATIONSBALANCE_OFFSET UNITYSDK_OFFSET(0x1E116E10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x1E116DC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E116DA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_STACKBALANCE_OFFSET UNITYSDK_OFFSET(0x1E116DD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_NULLCHECK_OFFSET UNITYSDK_OFFSET(0x1E116ED0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x1E116EA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E116E40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1157E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int Instruction_TypeDefinitionIndex = 4700;

	class Instruction : public ::System::Object
	{
	public:
		// static const ::System::Int32 UnknownInstrIndex = 0x7FFFFFFF; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ConsumedContinuations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET))(this);
		}

		::System::Int32 get_ProducedContinuations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET))(this);
		}

		::System::Int32 get_StackBalance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_STACKBALANCE_OFFSET))(this);
		}

		::System::Int32 get_ContinuationsBalance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONTINUATIONSBALANCE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToDebugString(::System::Int32 instructionIndex, ::System::Object* cookie, ::System::Func_2<::System::Int32, ::System::Int32>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_TODEBUGSTRING_OFFSET))(this, instructionIndex, cookie, labelIndexer, objects);
		}

		::System::Object* GetDebugCookie(::System::Linq::Expressions::Interpreter::LightCompiler* compiler)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightCompiler*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GETDEBUGCOOKIE_OFFSET))(this, compiler);
		}

		static ::System::Void NullCheck(::System::Object* o)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_NULLCHECK_OFFSET))(o);
		}
	};
}
