#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalMemberValueE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization::Formatters::Binary { class ParseRecord; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_ARRAYCOUNTINCREMENT_OFFSET UNITYSDK_OFFSET(0x163D4DC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_GETNEXT_OFFSET UNITYSDK_OFFSET(0x163D4DD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_INIT_OFFSET UNITYSDK_OFFSET(0x163D4C90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x163D4EF0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x163D4C30)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectProgress_TypeDefinitionIndex = 1154;

	class ObjectProgress : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_opRecordIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjectProgress_TypeDefinitionIndex)->GetStaticField(0x3F30);
		}
		::System::Object* typeInformation; // 0x10
		::Il2CppArray<::System::Type*>* memberTypes; // 0x18
		::System::Type* dtType; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr; // 0x28
		::System::Object* expectedTypeInformation; // 0x30
		::Il2CppArray<::System::Object*>* typeInformationA; // 0x38
		::System::String* name; // 0x40
		::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA; // 0x48
		::Il2CppArray<::System::String*>* memberNames; // 0x50
		::System::Int32 numItems; // 0x58
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE objectTypeEnum; // 0x5C
		::System::Boolean isInitial; // 0x60
		::System::Int32 count; // 0x64
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE memberValueEnum; // 0x68
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum; // 0x6C
		::System::Int32 memberLength; // 0x70
		::System::Int32 nullCount; // 0x74
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE memberTypeEnum; // 0x78
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_INIT_OFFSET))(this);
		}

		::System::Void ArrayCountIncrement(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_ARRAYCOUNTINCREMENT_OFFSET))(this, value);
		}

		::System::Boolean GetNext(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& outBinaryTypeEnum, ::System::Object*& outTypeInformation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum&, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_GETNEXT_OFFSET))(this, outBinaryTypeEnum, outTypeInformation);
		}
	};
}
