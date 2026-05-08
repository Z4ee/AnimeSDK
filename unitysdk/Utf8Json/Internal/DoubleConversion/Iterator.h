#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9D6840)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1C3FC9C0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1C3FCA10)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_EQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1C3FCA90)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C3FC9F0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C3FCB10)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1C3FCB90)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1C3FC9B0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1C3FCA50)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_INEQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1C3FCAD0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C3FCA00)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C3FCB50)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1C3FCBD0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1C3FC9E0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x39EDC0)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int Iterator_TypeDefinitionIndex = 85699;

	struct alignas(8) Iterator
	{
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Int32 offset; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR__CTOR_OFFSET))(this, buffer, offset);
		}

		::System::Byte get_Value()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_GET_VALUE_OFFSET))(this);
		}

		static ::Utf8Json::Internal::DoubleConversion::Iterator op_Increment(::Utf8Json::Internal::DoubleConversion::Iterator self)
		{
			return ((::Utf8Json::Internal::DoubleConversion::Iterator(*)(::Utf8Json::Internal::DoubleConversion::Iterator))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_INCREMENT_OFFSET))(self);
		}

		static ::Utf8Json::Internal::DoubleConversion::Iterator op_Addition(::Utf8Json::Internal::DoubleConversion::Iterator self, ::System::Int32 length)
		{
			return ((::Utf8Json::Internal::DoubleConversion::Iterator(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_ADDITION_OFFSET))(self, length);
		}

		static ::System::Int32 op_Subtraction(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::Utf8Json::Internal::DoubleConversion::Iterator rhs)
		{
			return ((::System::Int32(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::Utf8Json::Internal::DoubleConversion::Iterator))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_SUBTRACTION_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Equality(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::Utf8Json::Internal::DoubleConversion::Iterator rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::Utf8Json::Internal::DoubleConversion::Iterator))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::Utf8Json::Internal::DoubleConversion::Iterator rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::Utf8Json::Internal::DoubleConversion::Iterator))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Equality_1(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::System::Char rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_EQUALITY_1_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality_1(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::System::Char rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_INEQUALITY_1_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Equality_2(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::System::Byte rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_EQUALITY_2_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality_2(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::System::Byte rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_INEQUALITY_2_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::System::Char rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_GREATERTHANOREQUAL_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_LessThanOrEqual(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::System::Char rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_LESSTHANOREQUAL_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_GreaterThan(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::System::Char rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_GREATERTHAN_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_LessThan(::Utf8Json::Internal::DoubleConversion::Iterator lhs, ::System::Char rhs)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_ITERATOR_OP_LESSTHAN_OFFSET))(lhs, rhs);
		}
	};
}
