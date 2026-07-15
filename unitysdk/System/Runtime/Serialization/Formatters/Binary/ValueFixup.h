#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/ValueFixupEnum.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class ParseRecord; }
namespace System::Runtime::Serialization::Formatters::Binary { class ReadObjectInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_FIXUP_OFFSET UNITYSDK_OFFSET(0x17922D90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17924600)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x17923EA0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ValueFixup_TypeDefinitionIndex = 1190;

	class ValueFixup : public ::System::Object
	{
	public:
		static ::System::Reflection::MemberInfo** StaticGet_valueInfo()
		{
			return (::System::Reflection::MemberInfo**)Il2CppClass::FromTypeDefinitionIndex(ValueFixup_TypeDefinitionIndex)->GetStaticField(0x19BF0);
		}
		::System::Array* arrayObj; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo; // 0x18
		::Il2CppArray<::System::Int32>* indexMap; // 0x20
		::System::Object* header; // 0x28
		::System::String* memberName; // 0x30
		::System::Object* memberObject; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum valueFixupEnum; // 0x40

		::System::Void _ctor(::System::Array* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Object* a1, ::System::String* a2, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Fixup(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_FIXUP_OFFSET))(this, a1, a2);
		}
	};
}
