#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/CallInstruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GETARGS_OFFSET UNITYSDK_OFFSET(0x1AE1BC20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE1B780)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AE1B7A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AE1B800)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE1BDA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1B790)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MethodInfoCallInstruction_TypeDefinitionIndex = 4586;

	class MethodInfoCallInstruction : public ::System::Linq::Expressions::Interpreter::CallInstruction
	{
	public:
		::System::Reflection::MethodInfo* _target; // 0x10
		::System::Int32 _argumentCount; // 0x18

		::System::Void _ctor(::System::Reflection::MethodInfo* target, ::System::Int32 argumentCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION__CTOR_OFFSET))(this, target, argumentCount);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_RUN_OFFSET))(this, frame);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Int32 first, ::System::Int32 skip)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GETARGS_OFFSET))(this, frame, first, skip);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}
