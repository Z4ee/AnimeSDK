#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Numerics/BigInteger_GetBytesMode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_BIGINTEGER_ABS_OFFSET UNITYSDK_OFFSET(0x1E7A9250)
#define SYSTEM_NUMERICS_BIGINTEGER_ADD_1_OFFSET UNITYSDK_OFFSET(0x1E7AE320)
#define SYSTEM_NUMERICS_BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x1E7A9340)
#define SYSTEM_NUMERICS_BIGINTEGER_ASSERTVALID_OFFSET UNITYSDK_OFFSET(0x1020)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3BA0820)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_2_OFFSET UNITYSDK_OFFSET(0x3BA0880)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_3_OFFSET UNITYSDK_OFFSET(0x3BA08A0)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3BA07A0)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E7A9120)
#define SYSTEM_NUMERICS_BIGINTEGER_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1E7A9880)
#define SYSTEM_NUMERICS_BIGINTEGER_DIVREM_OFFSET UNITYSDK_OFFSET(0x1E7A9DA0)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BA0640)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3BA06B0)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x3BA0700)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BA0630)
#define SYSTEM_NUMERICS_BIGINTEGER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x3BA09D0)
#define SYSTEM_NUMERICS_BIGINTEGER_GETDIFFLENGTH_OFFSET UNITYSDK_OFFSET(0x1E7ACB10)
#define SYSTEM_NUMERICS_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BA05A0)
#define SYSTEM_NUMERICS_BIGINTEGER_GETPARTSFORBITMANIPULATION_OFFSET UNITYSDK_OFFSET(0x1E7B0450)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISEVEN_OFFSET UNITYSDK_OFFSET(0x3BA0550)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISONE_OFFSET UNITYSDK_OFFSET(0x3BA0530)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x3BA04A0)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x15CD30)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_MINUSONE_OFFSET UNITYSDK_OFFSET(0x1E7A85B0)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1E7A8570)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_SIGN_OFFSET UNITYSDK_OFFSET(0x3BA0590)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1E7A8530)
#define SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_1_OFFSET UNITYSDK_OFFSET(0x1E7AADF0)
#define SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_OFFSET UNITYSDK_OFFSET(0x1E7AA710)
#define SYSTEM_NUMERICS_BIGINTEGER_LOG10_OFFSET UNITYSDK_OFFSET(0x1E7AA6C0)
#define SYSTEM_NUMERICS_BIGINTEGER_LOG_1_OFFSET UNITYSDK_OFFSET(0x1E7AA380)
#define SYSTEM_NUMERICS_BIGINTEGER_LOG_OFFSET UNITYSDK_OFFSET(0x1E7AA330)
#define SYSTEM_NUMERICS_BIGINTEGER_MAX_OFFSET UNITYSDK_OFFSET(0x1E7AB4D0)
#define SYSTEM_NUMERICS_BIGINTEGER_MIN_OFFSET UNITYSDK_OFFSET(0x1E7AB510)
#define SYSTEM_NUMERICS_BIGINTEGER_MODPOW_OFFSET UNITYSDK_OFFSET(0x1E7AB550)
#define SYSTEM_NUMERICS_BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E7A95E0)
#define SYSTEM_NUMERICS_BIGINTEGER_NEGATE_OFFSET UNITYSDK_OFFSET(0x1E7AA2F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E7A93F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1E7AF560)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1E7AF780)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1E7B06D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1E7A98F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1E7B0F00)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1E7B11D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_3_OFFSET UNITYSDK_OFFSET(0x1E7B13E0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_4_OFFSET UNITYSDK_OFFSET(0x1E7B15C0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E7B0BD0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1E7AF940)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1E7AF080)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1E7AF120)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_12_OFFSET UNITYSDK_OFFSET(0x1E7AF160)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_13_OFFSET UNITYSDK_OFFSET(0x1E7AF430)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E7AEBD0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1E7AEBF0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1E7AEC20)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1E7AED80)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1E7AEE00)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1E7AEE80)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1E7AECA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1E7AEF00)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1E7AEF90)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E7AEBB0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_1_OFFSET UNITYSDK_OFFSET(0x1E7B0E80)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_2_OFFSET UNITYSDK_OFFSET(0x1E7B1150)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_3_OFFSET UNITYSDK_OFFSET(0x1E7B1390)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_4_OFFSET UNITYSDK_OFFSET(0x1E7B1570)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1E7A9300)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_1_OFFSET UNITYSDK_OFFSET(0x1E7B0E00)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_2_OFFSET UNITYSDK_OFFSET(0x1E7B10D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_3_OFFSET UNITYSDK_OFFSET(0x1E7B1340)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_4_OFFSET UNITYSDK_OFFSET(0x1E7B1520)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1E7B0BB0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E7AEB80)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1E7AEB90)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1E7AEBA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1E7AA0C0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1E7AABC0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1E7AA1D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1E7A7480)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E7AEB70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1E7B05F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1E7B0F70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1E7B1240)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_3_OFFSET UNITYSDK_OFFSET(0x1E7B1430)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_4_OFFSET UNITYSDK_OFFSET(0x1E7B1610)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E7B0C70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1E7AFAF0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_1_OFFSET UNITYSDK_OFFSET(0x1E7B0D80)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_2_OFFSET UNITYSDK_OFFSET(0x1E7B1050)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_3_OFFSET UNITYSDK_OFFSET(0x1E7B12F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_4_OFFSET UNITYSDK_OFFSET(0x1E7B14D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1E7B0B90)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_1_OFFSET UNITYSDK_OFFSET(0x1E7B0D00)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_2_OFFSET UNITYSDK_OFFSET(0x1E7B0FD0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_3_OFFSET UNITYSDK_OFFSET(0x1E7B12A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_4_OFFSET UNITYSDK_OFFSET(0x1E7B1480)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1E7B0B70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1E7A9BA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E7A9650)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1E7B04F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1E7AFDD0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E7A9540)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1E7A9320)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x1E7B05E0)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1E7A8770)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_2_OFFSET UNITYSDK_OFFSET(0x1E7A8810)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_3_OFFSET UNITYSDK_OFFSET(0x1E7A87D0)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_4_OFFSET UNITYSDK_OFFSET(0x1E7A8D40)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_OFFSET UNITYSDK_OFFSET(0x1E7A86F0)
#define SYSTEM_NUMERICS_BIGINTEGER_POW_OFFSET UNITYSDK_OFFSET(0x1E7AC570)
#define SYSTEM_NUMERICS_BIGINTEGER_REMAINDER_OFFSET UNITYSDK_OFFSET(0x1E7A9B30)
#define SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x1E7AE710)
#define SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1E7A9490)
#define SYSTEM_NUMERICS_BIGINTEGER_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x3BA0940)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3BA0A80)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3BA0AB0)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x3BA0AE0)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BA0A50)
#define SYSTEM_NUMERICS_BIGINTEGER_TOUINT32ARRAY_OFFSET UNITYSDK_OFFSET(0x3BA0A40)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYGETBYTES_OFFSET UNITYSDK_OFFSET(0x3BA0A10)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1E7A8B30)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_2_OFFSET UNITYSDK_OFFSET(0x1E7A8EA0)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E7A89E0)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYWRITEBYTES_OFFSET UNITYSDK_OFFSET(0x3BA0970)
#define SYSTEM_NUMERICS_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B1670)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_10_OFFSET UNITYSDK_OFFSET(0x3BA0480)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_11_OFFSET UNITYSDK_OFFSET(0x3BA0490)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BA0380)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3BA03E0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3BA03F0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3BA0400)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x3BA0410)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x3BA0420)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x3BA0440)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x3BA0450)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_9_OFFSET UNITYSDK_OFFSET(0x31FA0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA0320)

namespace System::Numerics
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 3834;

	struct alignas(8) BigInteger
	{
		static ::System::Numerics::BigInteger* StaticGet_s_bnMinInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0xB0);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnMinusOneInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0xC0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_success()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0xD0);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnOneInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0xD8);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnZeroInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0xE8);
		}
		// static const ::System::Int32 knMaskHighBit = 0x80000000; // 0x0
		// static const ::System::UInt32 kuMaskHighBit = 0x80000000; // 0x0
		// static const ::System::Int32 kcbitUint = 0x20; // 0x0
		// static const ::System::Int32 kcbitUlong = 0x40; // 0x0
		// static const ::System::Int32 DecimalScaleFactorMask = 0xFF0000; // 0x0
		// static const ::System::Int32 DecimalSignMask = 0x80000000; // 0x0
		::System::Int32 _sign; // 0x10
		::Il2CppArray<::System::UInt32>* _bits; // 0x18

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_5_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_6(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_6_OFFSET))(this, a1);
		}
		*/

		::System::Void _ctor_7(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_7_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_8(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_8_OFFSET))(this, a1);
		}
		*/

		::System::Void _ctor_9(::System::Int32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_9_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_10(::Il2CppArray<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_10_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_11(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_11_OFFSET))(this, a1);
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

		static ::System::Numerics::BigInteger Parse(::System::String* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger Parse_1(::System::String* a1, ::System::Globalization::NumberStyles a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::Globalization::NumberStyles))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_1_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Parse_2(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_2_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Parse_3(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::IFormatProvider* a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Numerics::BigInteger& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParse_1(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::IFormatProvider* a3, ::System::Numerics::BigInteger& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_1_OFFSET))(a1, a2, a3, a4);
		}

		/*
		static ::System::Numerics::BigInteger Parse_4(::System::ReadOnlySpan_1<::System::Char> a1, ::System::Globalization::NumberStyles a2, ::System::IFormatProvider* a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_PARSE_4_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Boolean TryParse_2(::System::ReadOnlySpan_1<::System::Char> a1, ::System::Numerics::BigInteger& a2, ::System::Globalization::NumberStyles a3, ::System::IFormatProvider* a4)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Numerics::BigInteger&, ::System::Globalization::NumberStyles, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_2_OFFSET))(a1, a2, a3, a4);
		}
		*/

		static ::System::Int32 Compare(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Int32(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARE_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Abs(::System::Numerics::BigInteger a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ABS_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger Add(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ADD_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Subtract(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Multiply(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Divide(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_DIVIDE_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Remainder(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_REMAINDER_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger DivRem(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2, ::System::Numerics::BigInteger& a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_DIVREM_OFFSET))(a1, a2, a3);
		}

		static ::System::Numerics::BigInteger Negate(::System::Numerics::BigInteger a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_NEGATE_OFFSET))(a1);
		}

		static ::System::Double Log(::System::Numerics::BigInteger a1)
		{
			return ((::System::Double(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_LOG_OFFSET))(a1);
		}

		static ::System::Double Log_1(::System::Numerics::BigInteger a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Numerics::BigInteger, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_LOG_1_OFFSET))(a1, a2);
		}

		static ::System::Double Log10(::System::Numerics::BigInteger a1)
		{
			return ((::System::Double(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_LOG10_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger GreatestCommonDivisor(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger GreatestCommonDivisor_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_1_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Max(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_MAX_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Min(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_MIN_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger ModPow(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2, ::System::Numerics::BigInteger a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_MODPOW_OFFSET))(a1, a2, a3);
		}

		static ::System::Numerics::BigInteger Pow(::System::Numerics::BigInteger a1, ::System::Int32 a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_POW_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Boolean Equals_3(::System::Numerics::BigInteger a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_3_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_2(::System::Numerics::BigInteger a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_2_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_3(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_3_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOBYTEARRAY_OFFSET))(this);
		}

		/*
		::System::Boolean TryWriteBytes(::System::Span_1<::System::Byte> a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Span_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYWRITEBYTES_OFFSET))(this, a1, a2);
		}
		*/

		::System::Int32 GetByteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETBYTECOUNT_OFFSET))(this);
		}

		/*
		::Il2CppArray<::System::Byte>* TryGetBytes(::System::Numerics::BigInteger_GetBytesMode a1, ::System::Span_1<::System::Byte> a2, ::System::Int32& a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Numerics::BigInteger_GetBytesMode, ::System::Span_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYGETBYTES_OFFSET))(this, a1, a2, a3);
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

		::System::String* ToString_1(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_3_OFFSET))(this, a1, a2);
		}

		static ::System::Numerics::BigInteger Add_1(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Int32 a4)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ADD_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Numerics::BigInteger op_Subtraction(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger Subtract_1(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Int32 a4)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Numerics::BigInteger op_Implicit(::System::Byte a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Implicit_1(::System::SByte a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Implicit_2(::System::Int16 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Implicit_3(::System::UInt16 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Implicit_4(::System::Int32 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Implicit_5(::System::UInt32 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_5_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Implicit_6(::System::Int64 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_6_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Implicit_7(::System::UInt64 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_7_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Explicit(::System::Single a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Explicit_1(::System::Double a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_1_OFFSET))(a1);
		}

		/*
		static ::System::Numerics::BigInteger op_Explicit_2(::System::Decimal a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_2_OFFSET))(a1);
		}
		*/

		static ::System::Byte op_Explicit_3(::System::Numerics::BigInteger a1)
		{
			return ((::System::Byte(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_3_OFFSET))(a1);
		}

		static ::System::SByte op_Explicit_4(::System::Numerics::BigInteger a1)
		{
			return ((::System::SByte(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_4_OFFSET))(a1);
		}

		static ::System::Int16 op_Explicit_5(::System::Numerics::BigInteger a1)
		{
			return ((::System::Int16(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_5_OFFSET))(a1);
		}

		static ::System::UInt16 op_Explicit_6(::System::Numerics::BigInteger a1)
		{
			return ((::System::UInt16(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_6_OFFSET))(a1);
		}

		static ::System::Int32 op_Explicit_7(::System::Numerics::BigInteger a1)
		{
			return ((::System::Int32(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_7_OFFSET))(a1);
		}

		static ::System::UInt32 op_Explicit_8(::System::Numerics::BigInteger a1)
		{
			return ((::System::UInt32(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_8_OFFSET))(a1);
		}

		static ::System::Int64 op_Explicit_9(::System::Numerics::BigInteger a1)
		{
			return ((::System::Int64(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_9_OFFSET))(a1);
		}

		static ::System::UInt64 op_Explicit_10(::System::Numerics::BigInteger a1)
		{
			return ((::System::UInt64(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_10_OFFSET))(a1);
		}

		static ::System::Single op_Explicit_11(::System::Numerics::BigInteger a1)
		{
			return ((::System::Single(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_11_OFFSET))(a1);
		}

		static ::System::Double op_Explicit_12(::System::Numerics::BigInteger a1)
		{
			return ((::System::Double(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_12_OFFSET))(a1);
		}

		/*
		static ::System::Decimal op_Explicit_13(::System::Numerics::BigInteger a1)
		{
			return ((::System::Decimal(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_13_OFFSET))(a1);
		}
		*/

		static ::System::Numerics::BigInteger op_BitwiseAnd(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger op_BitwiseOr(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger op_ExclusiveOr(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXCLUSIVEOR_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger op_LeftShift(::System::Numerics::BigInteger a1, ::System::Int32 a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LEFTSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger op_RightShift(::System::Numerics::BigInteger a1, ::System::Int32 a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_RIGHTSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger op_OnesComplement(::System::Numerics::BigInteger a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_ONESCOMPLEMENT_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_UnaryNegation(::System::Numerics::BigInteger a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_UnaryPlus(::System::Numerics::BigInteger a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYPLUS_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Increment(::System::Numerics::BigInteger a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INCREMENT_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Decrement(::System::Numerics::BigInteger a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_DECREMENT_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger op_Addition(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger op_Multiply(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger op_Division(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::System::Numerics::BigInteger op_Modulus(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_MODULUS_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan_1(::System::Numerics::BigInteger a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual_1(::System::Numerics::BigInteger a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan_1(::System::Numerics::BigInteger a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual_1(::System::Numerics::BigInteger a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::System::Numerics::BigInteger a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::System::Numerics::BigInteger a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan_2(::System::Int64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual_2(::System::Int64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan_2(::System::Int64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual_2(::System::Int64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_2(::System::Int64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_2(::System::Int64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan_3(::System::Numerics::BigInteger a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual_3(::System::Numerics::BigInteger a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan_3(::System::Numerics::BigInteger a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual_3(::System::Numerics::BigInteger a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_3(::System::Numerics::BigInteger a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_3(::System::Numerics::BigInteger a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan_4(::System::UInt64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual_4(::System::UInt64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan_4(::System::UInt64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual_4(::System::UInt64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_4(::System::UInt64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_4(::System::UInt64 a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetPartsForBitManipulation(::System::Numerics::BigInteger& a1, ::Il2CppArray<::System::UInt32>*& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger&, ::Il2CppArray<::System::UInt32>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETPARTSFORBITMANIPULATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetDiffLength(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETDIFFLENGTH_OFFSET))(a1, a2, a3);
		}

		::System::Void AssertValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ASSERTVALID_OFFSET))(this);
		}
	};
}
