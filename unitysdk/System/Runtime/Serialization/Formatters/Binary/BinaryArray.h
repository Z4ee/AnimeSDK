#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryArrayTypeEnum.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_READ_OFFSET UNITYSDK_OFFSET(0x179F8740)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_SET_OFFSET UNITYSDK_OFFSET(0x179F7F90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_WRITE_OFFSET UNITYSDK_OFFSET(0x179F7FF0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179F7F80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x179F7F70)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryArray_TypeDefinitionIndex = 1150;

	class BinaryArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* lengthA; // 0x10
		::Il2CppArray<::System::Int32>* lowerBoundA; // 0x18
		::System::Object* typeInformation; // 0x20
		::System::Int32 assemId; // 0x28
		::System::Int32 rank; // 0x2C
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum; // 0x30
		::System::Int32 objectId; // 0x34
		::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY__CTOR_1_OFFSET))(this, binaryHeaderEnum);
		}

		::System::Void Set(::System::Int32 objectId, ::System::Int32 rank, ::Il2CppArray<::System::Int32>* lengthA, ::Il2CppArray<::System::Int32>* lowerBoundA, ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Object* typeInformation, ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum, ::System::Int32 assemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_SET_OFFSET))(this, objectId, rank, lengthA, lowerBoundA, binaryTypeEnum, typeInformation, binaryArrayTypeEnum, assemId);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_READ_OFFSET))(this, input);
		}
	};
}
