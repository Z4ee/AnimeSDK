#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.h"

namespace System { class String; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_READ_OFFSET UNITYSDK_OFFSET(0x187AC890)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_SET_OFFSET UNITYSDK_OFFSET(0x187AC630)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_WRITE_OFFSET UNITYSDK_OFFSET(0x187AC670)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187AC620)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED__CTOR_OFFSET UNITYSDK_OFFSET(0x187AC610)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryObjectWithMapTyped_TypeDefinitionIndex = 1148;

	class BinaryObjectWithMapTyped : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* memberAssemIds; // 0x10
		::Il2CppArray<::System::String*>* memberNames; // 0x18
		::System::String* name; // 0x20
		::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA; // 0x28
		::Il2CppArray<::System::Object*>* typeInformationA; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum; // 0x38
		::System::Int32 objectId; // 0x3C
		::System::Int32 numMembers; // 0x40
		::System::Int32 assemId; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::Il2CppArray<::System::String*>* a4, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* a5, ::Il2CppArray<::System::Object*>* a6, ::Il2CppArray<::System::Int32>* a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_SET_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_READ_OFFSET))(this, a1);
		}
	};
}
