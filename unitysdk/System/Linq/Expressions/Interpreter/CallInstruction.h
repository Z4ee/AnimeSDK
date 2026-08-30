#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class LightLambda; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER1_OFFSET UNITYSDK_OFFSET(0x1E714A20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER2_OFFSET UNITYSDK_OFFSET(0x1E714A40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER3_OFFSET UNITYSDK_OFFSET(0x1E714AB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1E713F70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1E713F30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GETARRAYACCESSOR_OFFSET UNITYSDK_OFFSET(0x1E714330)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E714B30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E713EF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_INTERPRETLAMBDAINVOKE_OFFSET UNITYSDK_OFFSET(0x1E713AB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_TRYGETLIGHTLAMBDATARGET_OFFSET UNITYSDK_OFFSET(0x1E7139F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E715260)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CallInstruction_TypeDefinitionIndex = 3317;

	class CallInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::CallInstruction* Create(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::CallInstruction*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::Interpreter::CallInstruction* Create_1(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2)
		{
			return ((::System::Linq::Expressions::Interpreter::CallInstruction*(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::Interpreter::CallInstruction* GetArrayAccessor(::System::Reflection::MethodInfo* a1, ::System::Int32 a2)
		{
			return ((::System::Linq::Expressions::Interpreter::CallInstruction*(*)(::System::Reflection::MethodInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GETARRAYACCESSOR_OFFSET))(a1, a2);
		}

		static ::System::Void ArrayItemSetter1(::System::Array* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ArrayItemSetter2(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ArrayItemSetter3(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER3_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		static ::System::Boolean TryGetLightLambdaTarget(::System::Object* a1, ::System::Linq::Expressions::Interpreter::LightLambda*& a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Linq::Expressions::Interpreter::LightLambda*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_TRYGETLIGHTLAMBDATARGET_OFFSET))(a1, a2);
		}

		::System::Object* InterpretLambdaInvoke(::System::Linq::Expressions::Interpreter::LightLambda* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightLambda*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_INTERPRETLAMBDAINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
