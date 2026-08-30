#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/ValueFixupEnum.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class ParseRecord; }
namespace System::Runtime::Serialization::Formatters::Binary { class ReadObjectInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_FIXUP_OFFSET UNITYSDK_OFFSET(0x1BE12B20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE143A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE13C20)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ValueFixup_TypeDefinitionIndex = 1197;

	class ValueFixup : public ::System::Object
	{
	public:
		static ::System::Reflection::MemberInfo** StaticGet_valueInfo()
		{
			return (::System::Reflection::MemberInfo**)Il2CppClass::FromTypeDefinitionIndex(ValueFixup_TypeDefinitionIndex)->GetStaticField(0x15860);
		}
		::System::Array* arrayObj; // 0x10
		::System::Object* memberObject; // 0x18
		::System::Object* header; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo; // 0x28
		::System::String* memberName; // 0x30
		::Il2CppArray<::System::Int32>* indexMap; // 0x38
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
