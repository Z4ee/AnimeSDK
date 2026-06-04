#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Runtime::CompilerServices { class RuntimeWrappedException; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADB3030)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADB3010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADB3020)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_RUNTIMEWRAP_OFFSET UNITYSDK_OFFSET(0x1ADB3200)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1ADB3040)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_WRAPTHROWNOBJECT_OFFSET UNITYSDK_OFFSET(0x1ADB3170)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADB34C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB3000)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ThrowInstruction_TypeDefinitionIndex = 3325;

	class ThrowInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::ThrowInstruction** StaticGet_VoidThrow()
		{
			return (::System::Linq::Expressions::Interpreter::ThrowInstruction**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x2AC80);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet__runtimeWrappedExceptionCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x2AC88);
		}
		static ::System::Linq::Expressions::Interpreter::ThrowInstruction** StaticGet_VoidRethrow()
		{
			return (::System::Linq::Expressions::Interpreter::ThrowInstruction**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x2AC90);
		}
		static ::System::Linq::Expressions::Interpreter::ThrowInstruction** StaticGet_Throw()
		{
			return (::System::Linq::Expressions::Interpreter::ThrowInstruction**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x2AC98);
		}
		static ::System::Linq::Expressions::Interpreter::ThrowInstruction** StaticGet_Rethrow()
		{
			return (::System::Linq::Expressions::Interpreter::ThrowInstruction**)Il2CppClass::FromTypeDefinitionIndex(ThrowInstruction_TypeDefinitionIndex)->GetStaticField(0x2ACA0);
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
