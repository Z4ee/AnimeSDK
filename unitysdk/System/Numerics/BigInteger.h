#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Numerics/BigInteger_GetBytesMode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x1E98CC00)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0xA45EE0)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_2_OFFSET UNITYSDK_OFFSET(0xA45F00)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA45E50)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA45CF0)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xA45D70)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA45CE0)
#define SYSTEM_NUMERICS_BIGINTEGER_GETDIFFLENGTH_OFFSET UNITYSDK_OFFSET(0x1E98B4B0)
#define SYSTEM_NUMERICS_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA45C50)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x634790)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E98E5C0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E98ED70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1E98E0E0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1E98E460)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E98DB10)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1E98DCA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1E98DD20)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1E98DDA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1E98DB90)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1E98DE20)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1E98DEC0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1E98DFC0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1E98E070)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E98DAF0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E98D8F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1E98D940)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1E98D990)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1E98D9E0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1E98DA60)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1E98CD70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1E98A560)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E98D8A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1E98EDE0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E98EB70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_1_OFFSET UNITYSDK_OFFSET(0x1E98ECE0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_2_OFFSET UNITYSDK_OFFSET(0x1E98EEE0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1E98EB50)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_1_OFFSET UNITYSDK_OFFSET(0x1E98EE50)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1E98EC50)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E98E680)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E98D190)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1E98E5A0)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1E98AFE0)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_OFFSET UNITYSDK_OFFSET(0x1E98AF60)
#define SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1E98D250)
#define SYSTEM_NUMERICS_BIGINTEGER_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA45FA0)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA46030)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0xA46060)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA46000)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYGETBYTES_OFFSET UNITYSDK_OFFSET(0xA45FD0)
#define SYSTEM_NUMERICS_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98EF70)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA45B50)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA45BD0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA45BE0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_4_OFFSET UNITYSDK_OFFSET(0xA45BF0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_5_OFFSET UNITYSDK_OFFSET(0xA45C00)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_6_OFFSET UNITYSDK_OFFSET(0xA45C10)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x41FE00)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_8_OFFSET UNITYSDK_OFFSET(0xA45C40)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA45AD0)

namespace System::Numerics
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 6385;

	struct alignas(8) BigInteger
	{
		static ::Il2CppArray<::System::Byte>** StaticGet_s_success()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x58B0);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnMinusOneInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x58B8);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnOneInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x58C8);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnZeroInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x58D8);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnMinInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x58E8);
		}
		::System::Int32 _sign; // 0x10
		::Il2CppArray<::System::UInt32>* _bits; // 0x18

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_4_OFFSET))(this, value);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_5_OFFSET))(this, value);
		}

		/*
		::System::Void _ctor_6(::System::ReadOnlySpan_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_6_OFFSET))(this, value);
		}
		*/

		::System::Void _ctor_7(::System::Int32 n, ::Il2CppArray<::System::UInt32>* rgu)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_7_OFFSET))(this, n, rgu);
		}

		::System::Void _ctor_8(::Il2CppArray<::System::UInt32>* value, ::System::Boolean negative)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_8_OFFSET))(this, value, negative);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GET_ISZERO_OFFSET))(this);
		}

		static ::System::Numerics::BigInteger Parse(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_OFFSET))(value, provider);
		}

		static ::System::Numerics::BigInteger Parse_1(::System::String* value, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_1_OFFSET))(value, style, provider);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Int64 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::System::Numerics::BigInteger other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_2_OFFSET))(this, other);
		}

		::System::Int32 CompareTo(::System::Int64 other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 CompareTo_1(::System::Numerics::BigInteger other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_1_OFFSET))(this, other);
		}

		::System::Int32 CompareTo_2(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_2_OFFSET))(this, obj);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOBYTEARRAY_OFFSET))(this);
		}

		/*
		::Il2CppArray<::System::Byte>* TryGetBytes(::System::Numerics::BigInteger_GetBytesMode mode, ::System::Span_1<::System::Byte> destination, ::System::Int32& bytesWritten)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Numerics::BigInteger_GetBytesMode, ::System::Span_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYGETBYTES_OFFSET))(this, mode, destination, bytesWritten);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_1_OFFSET))(this, provider);
		}

		::System::String* ToString_2(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_2_OFFSET))(this, format, provider);
		}

		static ::System::Numerics::BigInteger Add(::Il2CppArray<::System::UInt32>* leftBits, ::System::Int32 leftSign, ::Il2CppArray<::System::UInt32>* rightBits, ::System::Int32 rightSign)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ADD_OFFSET))(leftBits, leftSign, rightBits, rightSign);
		}

		static ::System::Numerics::BigInteger op_Subtraction(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_SUBTRACTION_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger Subtract(::Il2CppArray<::System::UInt32>* leftBits, ::System::Int32 leftSign, ::Il2CppArray<::System::UInt32>* rightBits, ::System::Int32 rightSign)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_OFFSET))(leftBits, leftSign, rightBits, rightSign);
		}

		static ::System::Numerics::BigInteger op_Implicit(::System::Byte value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Implicit_1(::System::SByte value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Implicit_2(::System::Int16 value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Implicit_3(::System::UInt16 value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_3_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Implicit_4(::System::Int32 value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_4_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Implicit_5(::System::UInt32 value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_5_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Implicit_6(::System::Int64 value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_6_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Implicit_7(::System::UInt64 value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_7_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Explicit(::System::Double value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_OFFSET))(value);
		}

		static ::System::Byte op_Explicit_1(::System::Numerics::BigInteger value)
		{
			return ((::System::Byte(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_1_OFFSET))(value);
		}

		static ::System::SByte op_Explicit_2(::System::Numerics::BigInteger value)
		{
			return ((::System::SByte(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_2_OFFSET))(value);
		}

		static ::System::Int16 op_Explicit_3(::System::Numerics::BigInteger value)
		{
			return ((::System::Int16(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_3_OFFSET))(value);
		}

		static ::System::UInt16 op_Explicit_4(::System::Numerics::BigInteger value)
		{
			return ((::System::UInt16(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_4_OFFSET))(value);
		}

		static ::System::Int32 op_Explicit_5(::System::Numerics::BigInteger value)
		{
			return ((::System::Int32(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_5_OFFSET))(value);
		}

		static ::System::UInt32 op_Explicit_6(::System::Numerics::BigInteger value)
		{
			return ((::System::UInt32(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_6_OFFSET))(value);
		}

		static ::System::Int64 op_Explicit_7(::System::Numerics::BigInteger value)
		{
			return ((::System::Int64(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_7_OFFSET))(value);
		}

		static ::System::UInt64 op_Explicit_8(::System::Numerics::BigInteger value)
		{
			return ((::System::UInt64(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_8_OFFSET))(value);
		}

		static ::System::Single op_Explicit_9(::System::Numerics::BigInteger value)
		{
			return ((::System::Single(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_9_OFFSET))(value);
		}

		static ::System::Double op_Explicit_10(::System::Numerics::BigInteger value)
		{
			return ((::System::Double(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_10_OFFSET))(value);
		}

		/*
		static ::System::Decimal op_Explicit_11(::System::Numerics::BigInteger value)
		{
			return ((::System::Decimal(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_11_OFFSET))(value);
		}
		*/

		static ::System::Numerics::BigInteger op_UnaryNegation(::System::Numerics::BigInteger value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYNEGATION_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Addition(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_ADDITION_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger op_Multiply(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_MULTIPLY_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual_1(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality_1(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan_1(::System::Int64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual_2(::System::Int64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_2_OFFSET))(left, right);
		}

		static ::System::Int32 GetDiffLength(::Il2CppArray<::System::UInt32>* rgu1, ::Il2CppArray<::System::UInt32>* rgu2, ::System::Int32 cu)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETDIFFLENGTH_OFFSET))(rgu1, rgu2, cu);
		}
	};
}
