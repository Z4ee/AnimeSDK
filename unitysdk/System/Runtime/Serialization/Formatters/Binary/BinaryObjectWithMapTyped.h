#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.h"

namespace System { class String; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_READ_OFFSET UNITYSDK_OFFSET(0x1DC02930)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_SET_OFFSET UNITYSDK_OFFSET(0x1DC02670)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_WRITE_OFFSET UNITYSDK_OFFSET(0x1DC026B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC02660)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC02650)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryObjectWithMapTyped_TypeDefinitionIndex = 1193;

	class BinaryObjectWithMapTyped : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* typeInformationA; // 0x10
		::Il2CppArray<::System::Int32>* memberAssemIds; // 0x18
		::Il2CppArray<::System::String*>* memberNames; // 0x20
		::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA; // 0x28
		::System::String* name; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum; // 0x38
		::System::Int32 assemId; // 0x3C
		::System::Int32 numMembers; // 0x40
		::System::Int32 objectId; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED__CTOR_1_OFFSET))(this, binaryHeaderEnum);
		}

		::System::Void Set(::System::Int32 objectId, ::System::String* name, ::System::Int32 numMembers, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, ::Il2CppArray<::System::Object*>* typeInformationA, ::Il2CppArray<::System::Int32>* memberAssemIds, ::System::Int32 assemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_SET_OFFSET))(this, objectId, name, numMembers, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds, assemId);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_READ_OFFSET))(this, input);
		}
	};
}
