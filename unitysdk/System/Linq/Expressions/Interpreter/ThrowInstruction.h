#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Runtime::CompilerServices { class RuntimeWrappedException; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1DF48950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1DF48900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1DF48940)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_RUNTIMEWRAP_OFFSET UNITYSDK_OFFSET(0x1DF48B20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1DF48960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_WRAPTHROWNOBJECT_OFFSET UNITYSDK_OFFSET(0x1DF48A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF48DF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF488F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ThrowInstruction_TypeDefinitionIndex = 3337;

	class ThrowInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::ThrowInstruction** StaticGet_VoidThrow()
		{
			return (::System::Linq::Expressions::Interpreter::ThrowInstruction**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x3200);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet__runtimeWrappedExceptionCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x3208);
		}
		static ::System::Linq::Expressions::Interpreter::ThrowInstruction** StaticGet_VoidRethrow()
		{
			return (::System::Linq::Expressions::Interpreter::ThrowInstruction**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x3210);
		}
		static ::System::Linq::Expressions::Interpreter::ThrowInstruction** StaticGet_Throw()
		{
			return (::System::Linq::Expressions::Interpreter::ThrowInstruction**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x3218);
		}
		static ::System::Linq::Expressions::Interpreter::ThrowInstruction** StaticGet_Rethrow()
		{
			return (::System::Linq::Expressions::Interpreter::ThrowInstruction**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x3220);
		}
		::System::Boolean _rethrow; // 0x10
		::System::Boolean _hasResult; // 0x11

		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_RUN_OFFSET))(this, a1);
		}

		static ::System::Exception* WrapThrownObject(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_WRAPTHROWNOBJECT_OFFSET))(a1);
		}

		static ::System::Runtime::CompilerServices::RuntimeWrappedException* RuntimeWrap(::System::Object* a1)
		{
			return ((::System::Runtime::CompilerServices::RuntimeWrappedException*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_RUNTIMEWRAP_OFFSET))(a1);
		}
	};
}
