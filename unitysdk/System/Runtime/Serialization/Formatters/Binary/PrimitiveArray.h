#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System { class Array; }
namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_INIT_OFFSET UNITYSDK_OFFSET(0x17929860)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17923F00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x179231D0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int PrimitiveArray_TypeDefinitionIndex = 1193;

	class PrimitiveArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* charA; // 0x10
		::Il2CppArray<::System::Int16>* int16A; // 0x18
		::Il2CppArray<::System::Single>* singleA; // 0x20
		::Il2CppArray<::System::UInt64>* uint64A; // 0x28
		::Il2CppArray<::System::UInt32>* uint32A; // 0x30
		::Il2CppArray<::System::Int64>* int64A; // 0x38
		::Il2CppArray<::System::UInt16>* uint16A; // 0x40
		::Il2CppArray<::System::Boolean>* booleanA; // 0x48
		::Il2CppArray<::System::SByte>* sbyteA; // 0x50
		::Il2CppArray<::System::Int32>* int32A; // 0x58
		::Il2CppArray<::System::Double>* doubleA; // 0x60
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code; // 0x68

		::System::Void _ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1, ::System::Array* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Init(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1, ::System::Array* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void SetValue(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_SETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
