#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class LightLambda; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER1_OFFSET UNITYSDK_OFFSET(0x1C005B90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER2_OFFSET UNITYSDK_OFFSET(0x1C005BB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER3_OFFSET UNITYSDK_OFFSET(0x1C005BE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1C0052C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1C005250)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GETARRAYACCESSOR_OFFSET UNITYSDK_OFFSET(0x1C005410)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C005C10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C005210)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_INTERPRETLAMBDAINVOKE_OFFSET UNITYSDK_OFFSET(0x1C005CE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_TRYGETLIGHTLAMBDATARGET_OFFSET UNITYSDK_OFFSET(0x1C005C30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C005D40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CallInstruction_TypeDefinitionIndex = 4585;

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

		static ::System::Linq::Expressions::Interpreter::CallInstruction* Create(::System::Reflection::MethodInfo* info)
		{
			return ((::System::Linq::Expressions::Interpreter::CallInstruction*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_OFFSET))(info);
		}

		static ::System::Linq::Expressions::Interpreter::CallInstruction* Create_1(::System::Reflection::MethodInfo* info, ::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters)
		{
			return ((::System::Linq::Expressions::Interpreter::CallInstruction*(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_1_OFFSET))(info, parameters);
		}

		static ::System::Linq::Expressions::Interpreter::CallInstruction* GetArrayAccessor(::System::Reflection::MethodInfo* info, ::System::Int32 argumentCount)
		{
			return ((::System::Linq::Expressions::Interpreter::CallInstruction*(*)(::System::Reflection::MethodInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GETARRAYACCESSOR_OFFSET))(info, argumentCount);
		}

		static ::System::Void ArrayItemSetter1(::System::Array* array, ::System::Int32 index0, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER1_OFFSET))(array, index0, value);
		}

		static ::System::Void ArrayItemSetter2(::System::Array* array, ::System::Int32 index0, ::System::Int32 index1, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER2_OFFSET))(array, index0, index1, value);
		}

		static ::System::Void ArrayItemSetter3(::System::Array* array, ::System::Int32 index0, ::System::Int32 index1, ::System::Int32 index2, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER3_OFFSET))(array, index0, index1, index2, value);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		static ::System::Boolean TryGetLightLambdaTarget(::System::Object* instance, ::System::Linq::Expressions::Interpreter::LightLambda*& lightLambda)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Linq::Expressions::Interpreter::LightLambda*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_TRYGETLIGHTLAMBDATARGET_OFFSET))(instance, lightLambda);
		}

		::System::Object* InterpretLambdaInvoke(::System::Linq::Expressions::Interpreter::LightLambda* targetLambda, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightLambda*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_INTERPRETLAMBDAINVOKE_OFFSET))(this, targetLambda, args);
		}
	};
}
