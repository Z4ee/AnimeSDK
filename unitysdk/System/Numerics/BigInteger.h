#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Numerics/BigInteger_GetBytesMode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_BIGINTEGER_ABS_OFFSET UNITYSDK_OFFSET(0x1EE71F70)
#define SYSTEM_NUMERICS_BIGINTEGER_ADD_1_OFFSET UNITYSDK_OFFSET(0x1EE77040)
#define SYSTEM_NUMERICS_BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x1EE72060)
#define SYSTEM_NUMERICS_BIGINTEGER_ASSERTVALID_OFFSET UNITYSDK_OFFSET(0x10B0)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3C55CA0)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_2_OFFSET UNITYSDK_OFFSET(0x3C55D00)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_3_OFFSET UNITYSDK_OFFSET(0x3C55D20)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3C55C20)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1EE71E40)
#define SYSTEM_NUMERICS_BIGINTEGER_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1EE725A0)
#define SYSTEM_NUMERICS_BIGINTEGER_DIVREM_OFFSET UNITYSDK_OFFSET(0x1EE72AC0)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C55AC0)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3C55B30)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x3C55B80)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C55AB0)
#define SYSTEM_NUMERICS_BIGINTEGER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x3C55E50)
#define SYSTEM_NUMERICS_BIGINTEGER_GETDIFFLENGTH_OFFSET UNITYSDK_OFFSET(0x1EE75830)
#define SYSTEM_NUMERICS_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C55A20)
#define SYSTEM_NUMERICS_BIGINTEGER_GETPARTSFORBITMANIPULATION_OFFSET UNITYSDK_OFFSET(0x1EE79170)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISEVEN_OFFSET UNITYSDK_OFFSET(0x3C559D0)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISONE_OFFSET UNITYSDK_OFFSET(0x3C559B0)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x3C55920)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0xF64B0)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_MINUSONE_OFFSET UNITYSDK_OFFSET(0x1EE712D0)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1EE71290)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_SIGN_OFFSET UNITYSDK_OFFSET(0x3C55A10)
#define SYSTEM_NUMERICS_BIGINTEGER_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1EE71250)
#define SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_1_OFFSET UNITYSDK_OFFSET(0x1EE73B10)
#define SYSTEM_NUMERICS_BIGINTEGER_GREATESTCOMMONDIVISOR_OFFSET UNITYSDK_OFFSET(0x1EE73430)
#define SYSTEM_NUMERICS_BIGINTEGER_LOG10_OFFSET UNITYSDK_OFFSET(0x1EE733E0)
#define SYSTEM_NUMERICS_BIGINTEGER_LOG_1_OFFSET UNITYSDK_OFFSET(0x1EE730A0)
#define SYSTEM_NUMERICS_BIGINTEGER_LOG_OFFSET UNITYSDK_OFFSET(0x1EE73050)
#define SYSTEM_NUMERICS_BIGINTEGER_MAX_OFFSET UNITYSDK_OFFSET(0x1EE741F0)
#define SYSTEM_NUMERICS_BIGINTEGER_MIN_OFFSET UNITYSDK_OFFSET(0x1EE74230)
#define SYSTEM_NUMERICS_BIGINTEGER_MODPOW_OFFSET UNITYSDK_OFFSET(0x1EE74270)
#define SYSTEM_NUMERICS_BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EE72300)
#define SYSTEM_NUMERICS_BIGINTEGER_NEGATE_OFFSET UNITYSDK_OFFSET(0x1EE73010)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1EE72110)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1EE78280)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1EE784A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1EE793F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1EE72610)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1EE79C20)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1EE79EF0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_3_OFFSET UNITYSDK_OFFSET(0x1EE7A100)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_4_OFFSET UNITYSDK_OFFSET(0x1EE7A2E0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EE798F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1EE78660)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1EE77DA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1EE77E40)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_12_OFFSET UNITYSDK_OFFSET(0x1EE77E80)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_13_OFFSET UNITYSDK_OFFSET(0x1EE78150)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EE778F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1EE77910)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1EE77940)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1EE77AA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1EE77B20)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1EE77BA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1EE779C0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1EE77C20)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1EE77CB0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1EE778D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_1_OFFSET UNITYSDK_OFFSET(0x1EE79BA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_2_OFFSET UNITYSDK_OFFSET(0x1EE79E70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_3_OFFSET UNITYSDK_OFFSET(0x1EE7A0B0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_4_OFFSET UNITYSDK_OFFSET(0x1EE7A290)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1EE72020)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_1_OFFSET UNITYSDK_OFFSET(0x1EE79B20)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_2_OFFSET UNITYSDK_OFFSET(0x1EE79DF0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_3_OFFSET UNITYSDK_OFFSET(0x1EE7A060)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_4_OFFSET UNITYSDK_OFFSET(0x1EE7A240)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1EE798D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EE778A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1EE778B0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1EE778C0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1EE72DE0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1EE738E0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1EE72EF0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1EE701A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EE77890)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1EE79310)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1EE79C90)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1EE79F60)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_3_OFFSET UNITYSDK_OFFSET(0x1EE7A150)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_4_OFFSET UNITYSDK_OFFSET(0x1EE7A330)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EE79990)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1EE78810)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_1_OFFSET UNITYSDK_OFFSET(0x1EE79AA0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_2_OFFSET UNITYSDK_OFFSET(0x1EE79D70)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_3_OFFSET UNITYSDK_OFFSET(0x1EE7A010)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_4_OFFSET UNITYSDK_OFFSET(0x1EE7A1F0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1EE798B0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_1_OFFSET UNITYSDK_OFFSET(0x1EE79A20)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_2_OFFSET UNITYSDK_OFFSET(0x1EE79CF0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_3_OFFSET UNITYSDK_OFFSET(0x1EE79FC0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_4_OFFSET UNITYSDK_OFFSET(0x1EE7A1A0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1EE79890)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1EE728C0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EE72370)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1EE79210)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1EE78AF0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1EE72260)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1EE72040)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x1EE79300)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1EE71490)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_2_OFFSET UNITYSDK_OFFSET(0x1EE71530)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_3_OFFSET UNITYSDK_OFFSET(0x1EE714F0)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_4_OFFSET UNITYSDK_OFFSET(0x1EE71A60)
#define SYSTEM_NUMERICS_BIGINTEGER_PARSE_OFFSET UNITYSDK_OFFSET(0x1EE71410)
#define SYSTEM_NUMERICS_BIGINTEGER_POW_OFFSET UNITYSDK_OFFSET(0x1EE75290)
#define SYSTEM_NUMERICS_BIGINTEGER_REMAINDER_OFFSET UNITYSDK_OFFSET(0x1EE72850)
#define SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x1EE77430)
#define SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1EE721B0)
#define SYSTEM_NUMERICS_BIGINTEGER_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x3C55DC0)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3C55F00)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3C55F30)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x3C55F60)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C55ED0)
#define SYSTEM_NUMERICS_BIGINTEGER_TOUINT32ARRAY_OFFSET UNITYSDK_OFFSET(0x3C55EC0)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYGETBYTES_OFFSET UNITYSDK_OFFSET(0x3C55E90)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1EE71850)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_2_OFFSET UNITYSDK_OFFSET(0x1EE71BC0)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1EE71700)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYWRITEBYTES_OFFSET UNITYSDK_OFFSET(0x3C55DF0)
#define SYSTEM_NUMERICS_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE7A390)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_10_OFFSET UNITYSDK_OFFSET(0x3C55900)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_11_OFFSET UNITYSDK_OFFSET(0x3C55910)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C55800)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C55860)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C55870)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3C55880)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x3C55890)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x3C558A0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x3C558C0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x3C558D0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_9_OFFSET UNITYSDK_OFFSET(0xE590)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x3C557A0)

namespace System::Numerics
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 3835;

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
