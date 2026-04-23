#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System { class Array; }
namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_INIT_OFFSET UNITYSDK_OFFSET(0x17A0B540)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17A05F30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x17A051A0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int PrimitiveArray_TypeDefinitionIndex = 1192;

	class PrimitiveArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* booleanA; // 0x10
		::Il2CppArray<::System::UInt32>* uint32A; // 0x18
		::Il2CppArray<::System::Double>* doubleA; // 0x20
		::Il2CppArray<::System::Single>* singleA; // 0x28
		::Il2CppArray<::System::Int64>* int64A; // 0x30
		::Il2CppArray<::System::Char>* charA; // 0x38
		::Il2CppArray<::System::UInt64>* uint64A; // 0x40
		::Il2CppArray<::System::Int32>* int32A; // 0x48
		::Il2CppArray<::System::SByte>* sbyteA; // 0x50
		::Il2CppArray<::System::UInt16>* uint16A; // 0x58
		::Il2CppArray<::System::Int16>* int16A; // 0x60
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code; // 0x68

		::System::Void _ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY__CTOR_OFFSET))(this, code, array);
		}

		::System::Void Init(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_INIT_OFFSET))(this, code, array);
		}

		::System::Void SetValue(::System::String* value, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_SETVALUE_OFFSET))(this, value, index);
		}
	};
}
