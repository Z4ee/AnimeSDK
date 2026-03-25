#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/MidpointRounding.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_MATH_ABSHELPER_1_OFFSET UNITYSDK_OFFSET(0x16352170)
#define SYSTEM_MATH_ABSHELPER_OFFSET UNITYSDK_OFFSET(0x16352070)
#define SYSTEM_MATH_ABS_1_OFFSET UNITYSDK_OFFSET(0x163520E0)
#define SYSTEM_MATH_ABS_2_OFFSET UNITYSDK_OFFSET(0x163521F0)
#define SYSTEM_MATH_ABS_3_OFFSET UNITYSDK_OFFSET(0x16352200)
#define SYSTEM_MATH_ABS_4_OFFSET UNITYSDK_OFFSET(0x16352210)
#define SYSTEM_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x16351FF0)
#define SYSTEM_MATH_ACOS_OFFSET UNITYSDK_OFFSET(0x163518F0)
#define SYSTEM_MATH_ASIN_OFFSET UNITYSDK_OFFSET(0x16351900)
#define SYSTEM_MATH_ATAN2_OFFSET UNITYSDK_OFFSET(0x16351920)
#define SYSTEM_MATH_ATAN_OFFSET UNITYSDK_OFFSET(0x16351910)
#define SYSTEM_MATH_CEILING_OFFSET UNITYSDK_OFFSET(0x16351930)
#define SYSTEM_MATH_COS_OFFSET UNITYSDK_OFFSET(0x16351940)
#define SYSTEM_MATH_EXP_OFFSET UNITYSDK_OFFSET(0x16351FD0)
#define SYSTEM_MATH_FLOOR_1_OFFSET UNITYSDK_OFFSET(0x163519C0)
#define SYSTEM_MATH_FLOOR_OFFSET UNITYSDK_OFFSET(0x16351950)
#define SYSTEM_MATH_INTERNALROUND_OFFSET UNITYSDK_OFFSET(0x163519D0)
#define SYSTEM_MATH_INTERNALTRUNCATE_OFFSET UNITYSDK_OFFSET(0x16351C20)
#define SYSTEM_MATH_LOG10_OFFSET UNITYSDK_OFFSET(0x16351FC0)
#define SYSTEM_MATH_LOG_1_OFFSET UNITYSDK_OFFSET(0x16352420)
#define SYSTEM_MATH_LOG_OFFSET UNITYSDK_OFFSET(0x16351FB0)
#define SYSTEM_MATH_MAX_1_OFFSET UNITYSDK_OFFSET(0x16337BF0)
#define SYSTEM_MATH_MAX_2_OFFSET UNITYSDK_OFFSET(0x163522C0)
#define SYSTEM_MATH_MAX_3_OFFSET UNITYSDK_OFFSET(0x163522D0)
#define SYSTEM_MATH_MAX_4_OFFSET UNITYSDK_OFFSET(0x163522E0)
#define SYSTEM_MATH_MAX_5_OFFSET UNITYSDK_OFFSET(0x16352310)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x163522B0)
#define SYSTEM_MATH_MIN_1_OFFSET UNITYSDK_OFFSET(0x16337A00)
#define SYSTEM_MATH_MIN_2_OFFSET UNITYSDK_OFFSET(0x16352370)
#define SYSTEM_MATH_MIN_3_OFFSET UNITYSDK_OFFSET(0x16352380)
#define SYSTEM_MATH_MIN_4_OFFSET UNITYSDK_OFFSET(0x16352390)
#define SYSTEM_MATH_MIN_5_OFFSET UNITYSDK_OFFSET(0x163523D0)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x16352360)
#define SYSTEM_MATH_POW_OFFSET UNITYSDK_OFFSET(0x16351FE0)
#define SYSTEM_MATH_ROUND_1_OFFSET UNITYSDK_OFFSET(0x16351D10)
#define SYSTEM_MATH_ROUND_2_OFFSET UNITYSDK_OFFSET(0x16351D70)
#define SYSTEM_MATH_ROUND_3_OFFSET UNITYSDK_OFFSET(0x16351D80)
#define SYSTEM_MATH_ROUND_4_OFFSET UNITYSDK_OFFSET(0x16351E90)
#define SYSTEM_MATH_ROUND_OFFSET UNITYSDK_OFFSET(0x16351C60)
#define SYSTEM_MATH_SIGN_1_OFFSET UNITYSDK_OFFSET(0x163524E0)
#define SYSTEM_MATH_SIGN_2_OFFSET UNITYSDK_OFFSET(0x16352500)
#define SYSTEM_MATH_SIGN_3_OFFSET UNITYSDK_OFFSET(0x16351BB0)
#define SYSTEM_MATH_SIGN_OFFSET UNITYSDK_OFFSET(0x163524D0)
#define SYSTEM_MATH_SIN_OFFSET UNITYSDK_OFFSET(0x16351C40)
#define SYSTEM_MATH_SPLITFRACTIONDOUBLE_OFFSET UNITYSDK_OFFSET(0x16351BA0)
#define SYSTEM_MATH_SQRT_OFFSET UNITYSDK_OFFSET(0x16351F90)
#define SYSTEM_MATH_TAN_OFFSET UNITYSDK_OFFSET(0x16351C50)
#define SYSTEM_MATH_TRUNCATE_1_OFFSET UNITYSDK_OFFSET(0x16351F70)
#define SYSTEM_MATH_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x16351F00)
#define SYSTEM_MATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x163525A0)

namespace System
{
	inline static constexpr unsigned int Math_TypeDefinitionIndex = 293;

	class Math : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Double>** StaticGet_roundPower10Double()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0x5440);
		}
		static ::System::Double* StaticGet_doubleRoundLimit()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0x2C60);
		}
		// static const ::System::Int32 maxRoundingDigits = 0xF; // 0x0
		// static const ::System::Double PI; // 0x0
		// static const ::System::Double E; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MATH__CCTOR_OFFSET))();
		}

		static ::System::Double Acos(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ACOS_OFFSET))(d);
		}

		static ::System::Double Asin(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ASIN_OFFSET))(d);
		}

		static ::System::Double Atan(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ATAN_OFFSET))(d);
		}

		static ::System::Double Atan2(::System::Double y, ::System::Double x)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ATAN2_OFFSET))(y, x);
		}

		static ::System::Double Ceiling(::System::Double a)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_CEILING_OFFSET))(a);
		}

		static ::System::Double Cos(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_COS_OFFSET))(d);
		}

		static ::System::Decimal Floor(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_FLOOR_OFFSET))(d);
		}

		static ::System::Double Floor_1(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_FLOOR_1_OFFSET))(d);
		}

		static ::System::Double InternalRound(::System::Double value, ::System::Int32 digits, ::System::MidpointRounding mode)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_MATH_INTERNALROUND_OFFSET))(value, digits, mode);
		}

		static ::System::Double InternalTruncate(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_INTERNALTRUNCATE_OFFSET))(d);
		}

		static ::System::Double Sin(::System::Double a)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIN_OFFSET))(a);
		}

		static ::System::Double Tan(::System::Double a)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TAN_OFFSET))(a);
		}

		static ::System::Double Round(::System::Double a)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_OFFSET))(a);
		}

		static ::System::Double Round_1(::System::Double value, ::System::Int32 digits)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_1_OFFSET))(value, digits);
		}

		static ::System::Double Round_2(::System::Double value, ::System::MidpointRounding mode)
		{
			return ((::System::Double(*)(::System::Double, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_2_OFFSET))(value, mode);
		}

		static ::System::Double Round_3(::System::Double value, ::System::Int32 digits, ::System::MidpointRounding mode)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_3_OFFSET))(value, digits, mode);
		}

		static ::System::Decimal Round_4(::System::Decimal d, ::System::Int32 decimals)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_4_OFFSET))(d, decimals);
		}

		static ::System::Double SplitFractionDouble(::System::Double* value)
		{
			return ((::System::Double(*)(::System::Double*))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SPLITFRACTIONDOUBLE_OFFSET))(value);
		}

		static ::System::Decimal Truncate(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TRUNCATE_OFFSET))(d);
		}

		static ::System::Double Truncate_1(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TRUNCATE_1_OFFSET))(d);
		}

		static ::System::Double Sqrt(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SQRT_OFFSET))(d);
		}

		static ::System::Double Log(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG_OFFSET))(d);
		}

		static ::System::Double Log10(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG10_OFFSET))(d);
		}

		static ::System::Double Exp(::System::Double d)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_EXP_OFFSET))(d);
		}

		static ::System::Double Pow(::System::Double x, ::System::Double y)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_POW_OFFSET))(x, y);
		}

		static ::System::Int32 Abs(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_OFFSET))(value);
		}

		static ::System::Int32 AbsHelper(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABSHELPER_OFFSET))(value);
		}

		static ::System::Int64 Abs_1(::System::Int64 value)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_1_OFFSET))(value);
		}

		static ::System::Int64 AbsHelper_1(::System::Int64 value)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABSHELPER_1_OFFSET))(value);
		}

		static ::System::Single Abs_2(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_2_OFFSET))(value);
		}

		static ::System::Double Abs_3(::System::Double value)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_3_OFFSET))(value);
		}

		static ::System::Decimal Abs_4(::System::Decimal value)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_4_OFFSET))(value);
		}

		static ::System::Byte Max(::System::Byte val1, ::System::Byte val2)
		{
			return ((::System::Byte(*)(::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(val1, val2);
		}

		static ::System::Int32 Max_1(::System::Int32 val1, ::System::Int32 val2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_1_OFFSET))(val1, val2);
		}

		static ::System::UInt32 Max_2(::System::UInt32 val1, ::System::UInt32 val2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_2_OFFSET))(val1, val2);
		}

		static ::System::Int64 Max_3(::System::Int64 val1, ::System::Int64 val2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_3_OFFSET))(val1, val2);
		}

		static ::System::Single Max_4(::System::Single val1, ::System::Single val2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_4_OFFSET))(val1, val2);
		}

		static ::System::Double Max_5(::System::Double val1, ::System::Double val2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_5_OFFSET))(val1, val2);
		}

		static ::System::Int16 Min(::System::Int16 val1, ::System::Int16 val2)
		{
			return ((::System::Int16(*)(::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(val1, val2);
		}

		static ::System::Int32 Min_1(::System::Int32 val1, ::System::Int32 val2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_1_OFFSET))(val1, val2);
		}

		static ::System::UInt32 Min_2(::System::UInt32 val1, ::System::UInt32 val2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_2_OFFSET))(val1, val2);
		}

		static ::System::Int64 Min_3(::System::Int64 val1, ::System::Int64 val2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_3_OFFSET))(val1, val2);
		}

		static ::System::Single Min_4(::System::Single val1, ::System::Single val2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_4_OFFSET))(val1, val2);
		}

		static ::System::Double Min_5(::System::Double val1, ::System::Double val2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_5_OFFSET))(val1, val2);
		}

		static ::System::Double Log_1(::System::Double a, ::System::Double newBase)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG_1_OFFSET))(a, newBase);
		}

		static ::System::Int32 Sign(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_OFFSET))(value);
		}

		static ::System::Int32 Sign_1(::System::Int64 value)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_1_OFFSET))(value);
		}

		static ::System::Int32 Sign_2(::System::Single value)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_2_OFFSET))(value);
		}

		static ::System::Int32 Sign_3(::System::Double value)
		{
			return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_3_OFFSET))(value);
		}
	};
}
