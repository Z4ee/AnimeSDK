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

#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_DECLARELOCAL_OFFSET UNITYSDK_OFFSET(0x1CC1B960)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_DEFINELABEL_OFFSET UNITYSDK_OFFSET(0x1CC1B9B0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_10_OFFSET UNITYSDK_OFFSET(0x1CC1BD20)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_11_OFFSET UNITYSDK_OFFSET(0x1CC1BD70)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_12_OFFSET UNITYSDK_OFFSET(0x1CC1BDC0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_13_OFFSET UNITYSDK_OFFSET(0x1CC1BE10)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_1_OFFSET UNITYSDK_OFFSET(0x1CC1BA50)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_2_OFFSET UNITYSDK_OFFSET(0x1CC1BAA0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_3_OFFSET UNITYSDK_OFFSET(0x1CC1BAF0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_4_OFFSET UNITYSDK_OFFSET(0x1CC1BB40)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_5_OFFSET UNITYSDK_OFFSET(0x1CC1BB90)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_6_OFFSET UNITYSDK_OFFSET(0x1CC1BBE0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_7_OFFSET UNITYSDK_OFFSET(0x1CC1BC30)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_8_OFFSET UNITYSDK_OFFSET(0x1CC1BC80)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_9_OFFSET UNITYSDK_OFFSET(0x1CC1BCD0)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_OFFSET UNITYSDK_OFFSET(0x1CC1BA00)
#define SYSTEM_REFLECTION_EMIT_ILGENERATOR_MARKLABEL_OFFSET UNITYSDK_OFFSET(0x1CC1BE60)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int ILGenerator_TypeDefinitionIndex = 647;

	class ILGenerator : public ::System::Object
	{
	public:
		::System::Reflection::Emit::LocalBuilder* DeclareLocal(::System::Type* a1)
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_DECLARELOCAL_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::Label DefineLabel()
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_DEFINELABEL_OFFSET))(this);
		}

		::System::Void Emit(::System::Reflection::Emit::OpCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_OFFSET))(this, a1);
		}

		::System::Void Emit_1(::System::Reflection::Emit::OpCode a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_1_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_2(::System::Reflection::Emit::OpCode a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_2_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_3(::System::Reflection::Emit::OpCode a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_3_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_4(::System::Reflection::Emit::OpCode a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_4_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_5(::System::Reflection::Emit::OpCode a1, ::System::Reflection::ConstructorInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_5_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_6(::System::Reflection::Emit::OpCode a1, ::System::Reflection::Emit::Label a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::Emit::Label))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_6_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_7(::System::Reflection::Emit::OpCode a1, ::Il2CppArray<::System::Reflection::Emit::Label>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::Il2CppArray<::System::Reflection::Emit::Label>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_7_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_8(::System::Reflection::Emit::OpCode a1, ::System::Reflection::Emit::LocalBuilder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_8_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_9(::System::Reflection::Emit::OpCode a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_9_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_10(::System::Reflection::Emit::OpCode a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_10_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_11(::System::Reflection::Emit::OpCode a1, ::System::SByte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_11_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_12(::System::Reflection::Emit::OpCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_12_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_13(::System::Reflection::Emit::OpCode a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::OpCode, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_EMIT_13_OFFSET))(this, a1, a2);
		}

		::System::Void MarkLabel(::System::Reflection::Emit::Label a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::Label))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ILGENERATOR_MARKLABEL_OFFSET))(this, a1);
		}
	};
}
