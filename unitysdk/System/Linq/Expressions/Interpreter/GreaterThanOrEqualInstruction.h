#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x19F044B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x19F04440)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19F04460)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x19F04450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19F044A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GreaterThanOrEqualInstruction_TypeDefinitionIndex = 3399;

	class GreaterThanOrEqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12AF0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12AF8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B00);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B08);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B10);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B18);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullChar()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B20);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B28);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B30);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B38);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B40);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B48);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B50);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSingle()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B58);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B60);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B68);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B70);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B78);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullDouble()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B80);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B88);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B90);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(GreaterThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12B98);
		}
		::System::Object* _nullValue; // 0x10

		::System::Void _ctor(::System::Object* nullValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION__CTOR_OFFSET))(this, nullValue);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_CREATE_OFFSET))(type, liftedToNull);
		}
	};
}
