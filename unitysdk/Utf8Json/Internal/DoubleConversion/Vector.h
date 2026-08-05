#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_FIRST_OFFSET UNITYSDK_OFFSET(0xAC88B0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xAC9920)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_IS_EMPTY_OFFSET UNITYSDK_OFFSET(0xA66960)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_LAST_OFFSET UNITYSDK_OFFSET(0xAC99A0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_LENGTH_OFFSET UNITYSDK_OFFSET(0x330F60)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xAC9960)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_SUBVECTOR_OFFSET UNITYSDK_OFFSET(0xAC99E0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x355940)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int Vector_TypeDefinitionIndex = 95204;

	struct alignas(8) Vector
	{
		::Il2CppArray<::System::Byte>* bytes; // 0x10
		::System::Int32 start; // 0x18
		::System::Int32 _length; // 0x1C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR__CTOR_OFFSET))(this, bytes, start, length);
		}

		::System::Byte get_Item(::System::Int32 i)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_SET_ITEM_OFFSET))(this, i, value);
		}

		::System::Int32 length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_LENGTH_OFFSET))(this);
		}

		::System::Byte first()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_FIRST_OFFSET))(this);
		}

		::System::Byte last()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_LAST_OFFSET))(this);
		}

		::System::Boolean is_empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_IS_EMPTY_OFFSET))(this);
		}

		::Utf8Json::Internal::DoubleConversion::Vector SubVector(::System::Int32 from, ::System::Int32 to)
		{
			return ((::Utf8Json::Internal::DoubleConversion::Vector(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_VECTOR_SUBVECTOR_OFFSET))(this, from, to);
		}
	};
}
