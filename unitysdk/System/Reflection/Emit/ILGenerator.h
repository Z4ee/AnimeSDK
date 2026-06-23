#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"
#include "unitysdk/System/Reflection/Emit/OpCode.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_DECLARELOCAL_1_OFFSET UNITYSDK_OFFSET(0x1AE4A8A0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_DECLARELOCAL_OFFSET UNITYSDK_OFFSET(0x1AE4A850)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_DEFINELABEL_OFFSET UNITYSDK_OFFSET(0x1AE4A8F0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_10_OFFSET UNITYSDK_OFFSET(0x1AE4AC60)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_11_OFFSET UNITYSDK_OFFSET(0x1AE4ACB0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_12_OFFSET UNITYSDK_OFFSET(0x1AE4AD00)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_13_OFFSET UNITYSDK_OFFSET(0x1AE4AD50)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_1_OFFSET UNITYSDK_OFFSET(0x1AE4A990)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_2_OFFSET UNITYSDK_OFFSET(0x1AE4A9E0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_3_OFFSET UNITYSDK_OFFSET(0x1AE4AA30)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_4_OFFSET UNITYSDK_OFFSET(0x1AE4AA80)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_5_OFFSET UNITYSDK_OFFSET(0x1AE4AAD0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_6_OFFSET UNITYSDK_OFFSET(0x1AE4AB20)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_7_OFFSET UNITYSDK_OFFSET(0x1AE4AB70)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_8_OFFSET UNITYSDK_OFFSET(0x1AE4ABC0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_9_OFFSET UNITYSDK_OFFSET(0x1AE4AC10)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_OFFSET UNITYSDK_OFFSET(0x1AE4A940)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_MARKLABEL_OFFSET UNITYSDK_OFFSET(0x1AE4ADA0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4A840)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int ILGenerator_TypeDefinitionIndex = 616;

	class ILGenerator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Reflection::Emit::LocalBuilder* DeclareLocal(::System::Type* localType)
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_DECLARELOCAL_OFFSET))(this, localType);
		}

		::System::Reflection::Emit::LocalBuilder* DeclareLocal_1(::System::Type* localType, ::System::Boolean pinned)
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_DECLARELOCAL_1_OFFSET))(this, localType, pinned);
		}

		::System::Reflection::Emit::Label DefineLabel()
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_DEFINELABEL_OFFSET))(this);
		}

		::System::Void Emit(::System::Reflection::Emit::OpCode opcode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_OFFSET))(this, opcode);
		}

		::System::Void Emit_1(::System::Reflection::Emit::OpCode opcode, ::System::Byte arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_1_OFFSET))(this, opcode, arg);
		}

		::System::Void Emit_2(::System::Reflection::Emit::OpCode opcode, ::System::Int16 arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_2_OFFSET))(this, opcode, arg);
		}

		::System::Void Emit_3(::System::Reflection::Emit::OpCode opcode, ::System::Int32 arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_3_OFFSET))(this, opcode, arg);
		}

		::System::Void Emit_4(::System::Reflection::Emit::OpCode opcode, ::System::Int64 arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_4_OFFSET))(this, opcode, arg);
		}

		::System::Void Emit_5(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::ConstructorInfo* con)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_5_OFFSET))(this, opcode, con);
		}

		::System::Void Emit_6(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::Emit::Label label)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::Emit::Label))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_6_OFFSET))(this, opcode, label);
		}

		::System::Void Emit_7(::System::Reflection::Emit::OpCode opcode, ::Il2CppArray<::System::Reflection::Emit::Label>* labels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::Il2CppArray<::System::Reflection::Emit::Label>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_7_OFFSET))(this, opcode, labels);
		}

		::System::Void Emit_8(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::Emit::LocalBuilder* local)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_8_OFFSET))(this, opcode, local);
		}

		::System::Void Emit_9(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::FieldInfo* field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_9_OFFSET))(this, opcode, field);
		}

		::System::Void Emit_10(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::MethodInfo* meth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_10_OFFSET))(this, opcode, meth);
		}

		::System::Void Emit_11(::System::Reflection::Emit::OpCode opcode, ::System::SByte arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_11_OFFSET))(this, opcode, arg);
		}

		::System::Void Emit_12(::System::Reflection::Emit::OpCode opcode, ::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_12_OFFSET))(this, opcode, str);
		}

		::System::Void Emit_13(::System::Reflection::Emit::OpCode opcode, ::System::Type* cls)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_13_OFFSET))(this, opcode, cls);
		}

		::System::Void MarkLabel(::System::Reflection::Emit::Label loc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::Label))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_MARKLABEL_OFFSET))(this, loc);
		}
	};
}
