#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/ValueFixupEnum.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class ParseRecord; }
namespace System::Runtime::Serialization::Formatters::Binary { class ReadObjectInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_FIXUP_OFFSET UNITYSDK_OFFSET(0x1A0AEC20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0AFC40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0AFBB0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ValueFixup_TypeDefinitionIndex = 1234;

	class ValueFixup : public ::System::Object
	{
	public:
		static ::System::Reflection::MemberInfo** StaticGet_valueInfo()
		{
			return (::System::Reflection::MemberInfo**)Il2CppClass::FromTypeDefinitionIndex(ValueFixup_TypeDefinitionIndex)->GetStaticField(0xD60);
		}
		::System::Object* header; // 0x10
		::System::String* memberName; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo; // 0x20
		::Il2CppArray<::System::Int32>* indexMap; // 0x28
		::System::Array* arrayObj; // 0x30
		::System::Object* memberObject; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum valueFixupEnum; // 0x40

		::System::Void _ctor(::System::Array* arrayObj, ::Il2CppArray<::System::Int32>* indexMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_OFFSET))(this, arrayObj, indexMap);
		}

		::System::Void _ctor_1(::System::Object* memberObject, ::System::String* memberName, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP__CTOR_1_OFFSET))(this, memberObject, memberName, objectInfo);
		}

		::System::Void Fixup(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* record, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_FIXUP_OFFSET))(this, record, parent);
		}
	};
}
