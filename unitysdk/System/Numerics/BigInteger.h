#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Numerics/BigInteger_GetBytesMode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_BIGINTEGER_ABS_OFFSET UNITYSDK_OFFSET(0x185447A0)
#define SYSTEM_NUMERICS_BIGINTEGER_ADD_1_OFFSET UNITYSDK_OFFSET(0x185498A0)
#define SYSTEM_NUMERICS_BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x18544890)
#define SYSTEM_NUMERICS_BIGINTEGER_ASSERTVALID_OFFSET UNITYSDK_OFFSET(0x1020)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x20FD0E0)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_2_OFFSET UNITYSDK_OFFSET(0x20EA080)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_3_OFFSET UNITYSDK_OFFSET(0x20FD150)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20EA0A0)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARE_OFFSET UNITYSDK_OFFSET(0x18544630)
#define SYSTEM_NUMERICS_BIGINTEGER_DIVIDE_OFFSET UNITYSDK_OFFSET(0x18544DD0)
#define SYSTEM_NUMERICS_BIGINTEGER_DIVREM_OFFSET UNITYSDK_OFFSET(0x18545300)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20FCF40)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x20FCFC0)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x20FD020)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x20FCF30)
#define SYSTEM_NUMERICS_BIGINTEGER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x20FD280)
#define SYSTEM_NUMERICS_BIGINTEGER_GETDIFFLENGTH_OFFSET UNITYSDK_OFFSET(0x18548040)
#define SYSTEM_NUMERICS_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20FCEA0)
#define SYSTEM_NUMERICS_BIGINTEGER_GETPARTSFORBITMANIPULATION_OFFSET UNITYSDK_OFFSET(0x1854B930)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISEVEN_OFFSET UNITYSDK_OFFSET(0x20FCE60)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISONE_OFFSET UNITYSDK_OFFSET(0x20FCE40)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x20FCDA0)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x74A40)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_MINUSONE_OFFSET UNITYSDK_OFFSET(0x18543AD0)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ONE_OFFSET UNITYSDK_OFFSET(0x18543A90)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_SIGN_OFFSET UNITYSDK_OFFSET(0x20E9FE0)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x18543A50)
#define SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_1_OFFSET UNITYSDK_OFFSET(0x185463E0)
#define SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_OFFSET UNITYSDK_OFFSET(0x18545CC0)
#define SYSTEM_NUMERICS_BIGINTEGER_LOG10_OFFSET UNITYSDK_OFFSET(0x18545C70)
#define SYSTEM_NUMERICS_BIGINTEGER_LOG_1_OFFSET UNITYSDK_OFFSET(0x18545920)
#define SYSTEM_NUMERICS_BIGINTEGER_LOG_OFFSET UNITYSDK_OFFSET(0x185458D0)
#define SYSTEM_NUMERICS_BIGINTEGER_MAX_OFFSET UNITYSDK_OFFSET(0x18546B20)
#define SYSTEM_NUMERICS_BIGINTEGER_MIN_OFFSET UNITYSDK_OFFSET(0x18546B60)
#define SYSTEM_NUMERICS_BIGINTEGER_MODPOW_OFFSET UNITYSDK_OFFSET(0x18546BA0)
#define SYSTEM_NUMERICS_BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18544B30)
#define SYSTEM_NUMERICS_BIGINTEGER_NEGATE_OFFSET UNITYSDK_OFFSET(0x18545890)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x18544940)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1854AB70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1854ADB0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1854BBC0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x18544E40)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1854C4A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1854C790)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_3_OFFSET UNITYSDK_OFFSET(0x1854C9F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_4_OFFSET UNITYSDK_OFFSET(0x1854CC30)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1854C120)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1854AFA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1854A690)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1854A740)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_12_OFFSET UNITYSDK_OFFSET(0x1854A780)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_13_OFFSET UNITYSDK_OFFSET(0x1854AA60)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1854A1D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1854A1F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1854A220)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1854A3B0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1854A430)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1854A4B0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1854A2A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1854A530)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1854A5D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1854A1B0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_1_OFFSET UNITYSDK_OFFSET(0x1854C420)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_2_OFFSET UNITYSDK_OFFSET(0x1854C710)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_3_OFFSET UNITYSDK_OFFSET(0x1854C990)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_4_OFFSET UNITYSDK_OFFSET(0x1854CBD0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x18544850)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_1_OFFSET UNITYSDK_OFFSET(0x1854C3A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_2_OFFSET UNITYSDK_OFFSET(0x1854C680)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_3_OFFSET UNITYSDK_OFFSET(0x1854C930)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_4_OFFSET UNITYSDK_OFFSET(0x1854CB70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1854C100)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1854A180)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1854A190)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1854A1A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x18545620)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x18546190)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x18545740)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x18542AF0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1854A170)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1854BAE0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1854C510)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1854C800)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_3_OFFSET UNITYSDK_OFFSET(0x1854CA50)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_4_OFFSET UNITYSDK_OFFSET(0x1854CC90)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1854C1E0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1854B170)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_1_OFFSET UNITYSDK_OFFSET(0x1854C320)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_2_OFFSET UNITYSDK_OFFSET(0x1854C600)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_3_OFFSET UNITYSDK_OFFSET(0x1854C8D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_4_OFFSET UNITYSDK_OFFSET(0x1854CB10)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1854C0E0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_1_OFFSET UNITYSDK_OFFSET(0x1854C290)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_2_OFFSET UNITYSDK_OFFSET(0x1854C580)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_3_OFFSET UNITYSDK_OFFSET(0x1854C870)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_4_OFFSET UNITYSDK_OFFSET(0x1854CAB0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1854C0C0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x18545100)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18544BA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1854B9E0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1854B4A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x18544A90)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x18544870)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x1854BAD0)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_1_OFFSET UNITYSDK_OFFSET(0x18543CB0)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_2_OFFSET UNITYSDK_OFFSET(0x18543D50)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_3_OFFSET UNITYSDK_OFFSET(0x18543D10)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_4_OFFSET UNITYSDK_OFFSET(0x18544250)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_OFFSET UNITYSDK_OFFSET(0x18543C30)
#define SYSTEM_NUMERICS_BIGINTEGER_POW_OFFSET UNITYSDK_OFFSET(0x18547A50)
#define SYSTEM_NUMERICS_BIGINTEGER_REMAINDER_OFFSET UNITYSDK_OFFSET(0x18545090)
#define SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x18549CD0)
#define SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x185449E0)
#define SYSTEM_NUMERICS_BIGINTEGER_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x20FD1F0)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x20FD330)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x20FD360)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x20FD390)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20FD300)
#define SYSTEM_NUMERICS_BIGINTEGER_TOUINT32ARRAY_OFFSET UNITYSDK_OFFSET(0x20FD2F0)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYGETBYTES_OFFSET UNITYSDK_OFFSET(0x20FD2C0)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x18544060)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_2_OFFSET UNITYSDK_OFFSET(0x185443B0)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x18543F20)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYWRITEBYTES_OFFSET UNITYSDK_OFFSET(0x20FD220)
#define SYSTEM_NUMERICS_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1854CD00)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_10_OFFSET UNITYSDK_OFFSET(0x20FCD80)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_11_OFFSET UNITYSDK_OFFSET(0x20FCD90)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20FCC70)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x20FCCE0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x20FCCF0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x20FCD00)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x20FCD10)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x20FCD20)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x20FCD40)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x20FCD50)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_9_OFFSET UNITYSDK_OFFSET(0x2BD80)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x20FCC10)

namespace System::Numerics
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 4847;

	struct alignas(8) BigInteger
	{
		static ::Il2CppArray<::System::Byte>** StaticGet_s_success()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x130);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnOneInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x138);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnZeroInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x148);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnMinusOneInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x158);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnMinInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x168);
		}
		// static const ::System::Int32 knMaskHighBit = 0x80000000; // 0x0
		// static const ::System::UInt32 kuMaskHighBit = 0x80000000; // 0x0
		// static const ::System::Int32 kcbitUint = 0x20; // 0x0
		// static const ::System::Int32 kcbitUlong = 0x40; // 0x0
		// static const ::System::Int32 DecimalScaleFactorMask = 0xFF0000; // 0x0
		// static const ::System::Int32 DecimalSignMask = 0x80000000; // 0x0
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

		::System::Void _ctor_4(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_4_OFFSET))(this, value);
		}

		::System::Void _ctor_5(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_5_OFFSET))(this, value);
		}

		/*
		::System::Void _ctor_6(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_6_OFFSET))(this, value);
		}
		*/

		::System::Void _ctor_7(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_7_OFFSET))(this, value);
		}

		/*
		::System::Void _ctor_8(::System::ReadOnlySpan_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_8_OFFSET))(this, value);
		}
		*/

		::System::Void _ctor_9(::System::Int32 n, ::Il2CppArray<::System::UInt32>* rgu)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_9_OFFSET))(this, n, rgu);
		}

		::System::Void _ctor_10(::Il2CppArray<::System::UInt32>* value, ::System::Boolean negative)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_10_OFFSET))(this, value, negative);
		}

		::System::Void _ctor_11(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_11_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CCTOR_OFFSET))();
		}

		static ::System::Numerics::BigInteger get_Zero()
		{
			return ((::System::Numerics::BigInteger(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GET_ZERO_OFFSET))();
		}

		static ::System::Numerics::BigInteger get_One()
		{
			return ((::System::Numerics::BigInteger(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GET_ONE_OFFSET))();
		}

		static ::System::Numerics::BigInteger get_MinusOne()
		{
			return ((::System::Numerics::BigInteger(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GET_MINUSONE_OFFSET))();
		}

		::System::Boolean get_IsPowerOfTwo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GET_ISPOWEROFTWO_OFFSET))(this);
		}

		::System::Boolean get_IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GET_ISZERO_OFFSET))(this);
		}

		::System::Boolean get_IsOne()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GET_ISONE_OFFSET))(this);
		}

		::System::Boolean get_IsEven()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GET_ISEVEN_OFFSET))(this);
		}

		::System::Int32 get_Sign()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GET_SIGN_OFFSET))(this);
		}

		static ::System::Numerics::BigInteger Parse(::System::String* value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger Parse_1(::System::String* value, ::System::Globalization::NumberStyles style)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::Globalization::NumberStyles))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_1_OFFSET))(value, style);
		}

		static ::System::Numerics::BigInteger Parse_2(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_2_OFFSET))(value, provider);
		}

		static ::System::Numerics::BigInteger Parse_3(::System::String* value, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_3_OFFSET))(value, style, provider);
		}

		static ::System::Boolean TryParse(::System::String* value, ::System::Numerics::BigInteger& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_OFFSET))(value, result);
		}

		static ::System::Boolean TryParse_1(::System::String* value, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::System::Numerics::BigInteger& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_1_OFFSET))(value, style, provider, result);
		}

		/*
		static ::System::Numerics::BigInteger Parse_4(::System::ReadOnlySpan_1<::System::Char> value, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider)
		{
			return ((::System::Numerics::BigInteger(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_4_OFFSET))(value, style, provider);
		}
		*/

		/*
		static ::System::Boolean TryParse_2(::System::ReadOnlySpan_1<::System::Char> value, ::System::Numerics::BigInteger& result, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Numerics::BigInteger&, ::System::Globalization::NumberStyles, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_2_OFFSET))(value, result, style, provider);
		}
		*/

		static ::System::Int32 Compare(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Int32(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARE_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger Abs(::System::Numerics::BigInteger value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ABS_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger Add(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ADD_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger Subtract(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger Multiply(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_MULTIPLY_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger Divide(::System::Numerics::BigInteger dividend, ::System::Numerics::BigInteger divisor)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_DIVIDE_OFFSET))(dividend, divisor);
		}

		static ::System::Numerics::BigInteger Remainder(::System::Numerics::BigInteger dividend, ::System::Numerics::BigInteger divisor)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_REMAINDER_OFFSET))(dividend, divisor);
		}

		static ::System::Numerics::BigInteger DivRem(::System::Numerics::BigInteger dividend, ::System::Numerics::BigInteger divisor, ::System::Numerics::BigInteger& remainder)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_DIVREM_OFFSET))(dividend, divisor, remainder);
		}

		static ::System::Numerics::BigInteger Negate(::System::Numerics::BigInteger value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_NEGATE_OFFSET))(value);
		}

		static ::System::Double Log(::System::Numerics::BigInteger value)
		{
			return ((::System::Double(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_LOG_OFFSET))(value);
		}

		static ::System::Double Log_1(::System::Numerics::BigInteger value, ::System::Double baseValue)
		{
			return ((::System::Double(*)(::System::Numerics::BigInteger, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_LOG_1_OFFSET))(value, baseValue);
		}

		static ::System::Double Log10(::System::Numerics::BigInteger value)
		{
			return ((::System::Double(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_LOG10_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger GreatestCommonDivisor(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger GreatestCommonDivisor_1(::Il2CppArray<::System::UInt32>* leftBits, ::Il2CppArray<::System::UInt32>* rightBits)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_1_OFFSET))(leftBits, rightBits);
		}

		static ::System::Numerics::BigInteger Max(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_MAX_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger Min(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_MIN_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger ModPow(::System::Numerics::BigInteger value, ::System::Numerics::BigInteger exponent, ::System::Numerics::BigInteger modulus)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_MODPOW_OFFSET))(value, exponent, modulus);
		}

		static ::System::Numerics::BigInteger Pow(::System::Numerics::BigInteger value, ::System::Int32 exponent)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_POW_OFFSET))(value, exponent);
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

		::System::Boolean Equals_2(::System::UInt64 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_2_OFFSET))(this, other);
		}

		::System::Boolean Equals_3(::System::Numerics::BigInteger other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_3_OFFSET))(this, other);
		}

		::System::Int32 CompareTo(::System::Int64 other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 CompareTo_1(::System::UInt64 other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_1_OFFSET))(this, other);
		}

		::System::Int32 CompareTo_2(::System::Numerics::BigInteger other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_2_OFFSET))(this, other);
		}

		::System::Int32 CompareTo_3(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_3_OFFSET))(this, obj);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOBYTEARRAY_OFFSET))(this);
		}

		/*
		::System::Boolean TryWriteBytes(::System::Span_1<::System::Byte> destination, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Span_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYWRITEBYTES_OFFSET))(this, destination, bytesWritten);
		}
		*/

		::System::Int32 GetByteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETBYTECOUNT_OFFSET))(this);
		}

		/*
		::Il2CppArray<::System::Byte>* TryGetBytes(::System::Numerics::BigInteger_GetBytesMode mode, ::System::Span_1<::System::Byte> destination, ::System::Int32& bytesWritten)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Numerics::BigInteger_GetBytesMode, ::System::Span_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYGETBYTES_OFFSET))(this, mode, destination, bytesWritten);
		}
		*/

		::Il2CppArray<::System::UInt32>* ToUInt32Array()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOUINT32ARRAY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_1_OFFSET))(this, provider);
		}

		::System::String* ToString_2(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_2_OFFSET))(this, format);
		}

		::System::String* ToString_3(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_3_OFFSET))(this, format, provider);
		}

		static ::System::Numerics::BigInteger Add_1(::Il2CppArray<::System::UInt32>* leftBits, ::System::Int32 leftSign, ::Il2CppArray<::System::UInt32>* rightBits, ::System::Int32 rightSign)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ADD_1_OFFSET))(leftBits, leftSign, rightBits, rightSign);
		}

		static ::System::Numerics::BigInteger op_Subtraction(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_SUBTRACTION_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger Subtract_1(::Il2CppArray<::System::UInt32>* leftBits, ::System::Int32 leftSign, ::Il2CppArray<::System::UInt32>* rightBits, ::System::Int32 rightSign)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_1_OFFSET))(leftBits, leftSign, rightBits, rightSign);
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

		static ::System::Numerics::BigInteger op_Explicit(::System::Single value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Explicit_1(::System::Double value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_1_OFFSET))(value);
		}

		/*
		static ::System::Numerics::BigInteger op_Explicit_2(::System::Decimal value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_2_OFFSET))(value);
		}
		*/

		static ::System::Byte op_Explicit_3(::System::Numerics::BigInteger value)
		{
			return ((::System::Byte(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_3_OFFSET))(value);
		}

		static ::System::SByte op_Explicit_4(::System::Numerics::BigInteger value)
		{
			return ((::System::SByte(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_4_OFFSET))(value);
		}

		static ::System::Int16 op_Explicit_5(::System::Numerics::BigInteger value)
		{
			return ((::System::Int16(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_5_OFFSET))(value);
		}

		static ::System::UInt16 op_Explicit_6(::System::Numerics::BigInteger value)
		{
			return ((::System::UInt16(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_6_OFFSET))(value);
		}

		static ::System::Int32 op_Explicit_7(::System::Numerics::BigInteger value)
		{
			return ((::System::Int32(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_7_OFFSET))(value);
		}

		static ::System::UInt32 op_Explicit_8(::System::Numerics::BigInteger value)
		{
			return ((::System::UInt32(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_8_OFFSET))(value);
		}

		static ::System::Int64 op_Explicit_9(::System::Numerics::BigInteger value)
		{
			return ((::System::Int64(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_9_OFFSET))(value);
		}

		static ::System::UInt64 op_Explicit_10(::System::Numerics::BigInteger value)
		{
			return ((::System::UInt64(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_10_OFFSET))(value);
		}

		static ::System::Single op_Explicit_11(::System::Numerics::BigInteger value)
		{
			return ((::System::Single(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_11_OFFSET))(value);
		}

		static ::System::Double op_Explicit_12(::System::Numerics::BigInteger value)
		{
			return ((::System::Double(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_12_OFFSET))(value);
		}

		/*
		static ::System::Decimal op_Explicit_13(::System::Numerics::BigInteger value)
		{
			return ((::System::Decimal(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_13_OFFSET))(value);
		}
		*/

		static ::System::Numerics::BigInteger op_BitwiseAnd(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEAND_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger op_BitwiseOr(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEOR_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger op_ExclusiveOr(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXCLUSIVEOR_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger op_LeftShift(::System::Numerics::BigInteger value, ::System::Int32 shift)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LEFTSHIFT_OFFSET))(value, shift);
		}

		static ::System::Numerics::BigInteger op_RightShift(::System::Numerics::BigInteger value, ::System::Int32 shift)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_RIGHTSHIFT_OFFSET))(value, shift);
		}

		static ::System::Numerics::BigInteger op_OnesComplement(::System::Numerics::BigInteger value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_ONESCOMPLEMENT_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_UnaryNegation(::System::Numerics::BigInteger value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYNEGATION_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_UnaryPlus(::System::Numerics::BigInteger value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYPLUS_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Increment(::System::Numerics::BigInteger value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INCREMENT_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Decrement(::System::Numerics::BigInteger value)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_DECREMENT_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger op_Addition(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_ADDITION_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger op_Multiply(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_MULTIPLY_OFFSET))(left, right);
		}

		static ::System::Numerics::BigInteger op_Division(::System::Numerics::BigInteger dividend, ::System::Numerics::BigInteger divisor)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_DIVISION_OFFSET))(dividend, divisor);
		}

		static ::System::Numerics::BigInteger op_Modulus(::System::Numerics::BigInteger dividend, ::System::Numerics::BigInteger divisor)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_MODULUS_OFFSET))(dividend, divisor);
		}

		static ::System::Boolean op_LessThan(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan_1(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual_1(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan_1(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual_1(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality_1(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality_1(::System::Numerics::BigInteger left, ::System::Int64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan_2(::System::Int64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_2_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual_2(::System::Int64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_2_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan_2(::System::Int64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_2_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual_2(::System::Int64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_2_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality_2(::System::Int64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_2_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality_2(::System::Int64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_2_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan_3(::System::Numerics::BigInteger left, ::System::UInt64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_3_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual_3(::System::Numerics::BigInteger left, ::System::UInt64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_3_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan_3(::System::Numerics::BigInteger left, ::System::UInt64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_3_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual_3(::System::Numerics::BigInteger left, ::System::UInt64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_3_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality_3(::System::Numerics::BigInteger left, ::System::UInt64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_3_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality_3(::System::Numerics::BigInteger left, ::System::UInt64 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_3_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan_4(::System::UInt64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_4_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual_4(::System::UInt64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_4_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan_4(::System::UInt64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_4_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual_4(::System::UInt64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_4_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality_4(::System::UInt64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_4_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality_4(::System::UInt64 left, ::System::Numerics::BigInteger right)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_4_OFFSET))(left, right);
		}

		static ::System::Boolean GetPartsForBitManipulation(::System::Numerics::BigInteger& x, ::Il2CppArray<::System::UInt32>*& xd, ::System::Int32& xl)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger&, ::Il2CppArray<::System::UInt32>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETPARTSFORBITMANIPULATION_OFFSET))(x, xd, xl);
		}

		static ::System::Int32 GetDiffLength(::Il2CppArray<::System::UInt32>* rgu1, ::Il2CppArray<::System::UInt32>* rgu2, ::System::Int32 cu)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETDIFFLENGTH_OFFSET))(rgu1, rgu2, cu);
		}

		::System::Void AssertValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ASSERTVALID_OFFSET))(this);
		}
	};
}
