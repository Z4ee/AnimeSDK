#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/MidpointRounding.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_MATH_ABSHELPER_1_OFFSET UNITYSDK_OFFSET(0x1BD6FB40)
#define SYSTEM_MATH_ABSHELPER_OFFSET UNITYSDK_OFFSET(0x1BD6FA40)
#define SYSTEM_MATH_ABS_1_OFFSET UNITYSDK_OFFSET(0x1BD6FAB0)
#define SYSTEM_MATH_ABS_2_OFFSET UNITYSDK_OFFSET(0x1BD6FBC0)
#define SYSTEM_MATH_ABS_3_OFFSET UNITYSDK_OFFSET(0x1BD6FBD0)
#define SYSTEM_MATH_ABS_4_OFFSET UNITYSDK_OFFSET(0x1BD6FBE0)
#define SYSTEM_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x1BD6F9C0)
#define SYSTEM_MATH_ACOS_OFFSET UNITYSDK_OFFSET(0x1BD6EF00)
#define SYSTEM_MATH_ASIN_OFFSET UNITYSDK_OFFSET(0x1BD6EF10)
#define SYSTEM_MATH_ATAN2_OFFSET UNITYSDK_OFFSET(0x1BD6EF30)
#define SYSTEM_MATH_ATAN_OFFSET UNITYSDK_OFFSET(0x1BD6EF20)
#define SYSTEM_MATH_CEILING_OFFSET UNITYSDK_OFFSET(0x1BD6EF40)
#define SYSTEM_MATH_COS_OFFSET UNITYSDK_OFFSET(0x1BD6EF50)
#define SYSTEM_MATH_EXP_OFFSET UNITYSDK_OFFSET(0x1BD6F720)
#define SYSTEM_MATH_FLOOR_1_OFFSET UNITYSDK_OFFSET(0x1BD6EFD0)
#define SYSTEM_MATH_FLOOR_OFFSET UNITYSDK_OFFSET(0x1BD6EF60)
#define SYSTEM_MATH_IEEEREMAINDER_OFFSET UNITYSDK_OFFSET(0x1BD6F740)
#define SYSTEM_MATH_INTERNALROUND_OFFSET UNITYSDK_OFFSET(0x1BD6EFE0)
#define SYSTEM_MATH_INTERNALTRUNCATE_OFFSET UNITYSDK_OFFSET(0x1BD6F2A0)
#define SYSTEM_MATH_LOG10_OFFSET UNITYSDK_OFFSET(0x1BD6F710)
#define SYSTEM_MATH_LOG_1_OFFSET UNITYSDK_OFFSET(0x1BD6FE00)
#define SYSTEM_MATH_LOG_OFFSET UNITYSDK_OFFSET(0x1BD6F700)
#define SYSTEM_MATH_MAX_1_OFFSET UNITYSDK_OFFSET(0x1BD52B80)
#define SYSTEM_MATH_MAX_2_OFFSET UNITYSDK_OFFSET(0x1BD6FC90)
#define SYSTEM_MATH_MAX_3_OFFSET UNITYSDK_OFFSET(0x1BD6FCA0)
#define SYSTEM_MATH_MAX_4_OFFSET UNITYSDK_OFFSET(0x1BD6FCB0)
#define SYSTEM_MATH_MAX_5_OFFSET UNITYSDK_OFFSET(0x1BD6FCC0)
#define SYSTEM_MATH_MAX_6_OFFSET UNITYSDK_OFFSET(0x1BD6FCF0)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x1BD6FC80)
#define SYSTEM_MATH_MIN_1_OFFSET UNITYSDK_OFFSET(0x1BD52990)
#define SYSTEM_MATH_MIN_2_OFFSET UNITYSDK_OFFSET(0x1BD6FD50)
#define SYSTEM_MATH_MIN_3_OFFSET UNITYSDK_OFFSET(0x1BD6FD60)
#define SYSTEM_MATH_MIN_4_OFFSET UNITYSDK_OFFSET(0x1BD6FD70)
#define SYSTEM_MATH_MIN_5_OFFSET UNITYSDK_OFFSET(0x1BD6FDB0)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x1BD6FD40)
#define SYSTEM_MATH_POW_OFFSET UNITYSDK_OFFSET(0x1BD6F730)
#define SYSTEM_MATH_ROUND_1_OFFSET UNITYSDK_OFFSET(0x1BD6F390)
#define SYSTEM_MATH_ROUND_2_OFFSET UNITYSDK_OFFSET(0x1BD6F420)
#define SYSTEM_MATH_ROUND_3_OFFSET UNITYSDK_OFFSET(0x1BD6F430)
#define SYSTEM_MATH_ROUND_4_OFFSET UNITYSDK_OFFSET(0x1BD6F570)
#define SYSTEM_MATH_ROUND_5_OFFSET UNITYSDK_OFFSET(0x1BD6F5E0)
#define SYSTEM_MATH_ROUND_OFFSET UNITYSDK_OFFSET(0x1BD6F2E0)
#define SYSTEM_MATH_SIGN_1_OFFSET UNITYSDK_OFFSET(0x1BD6FEC0)
#define SYSTEM_MATH_SIGN_2_OFFSET UNITYSDK_OFFSET(0x1BD6FEE0)
#define SYSTEM_MATH_SIGN_3_OFFSET UNITYSDK_OFFSET(0x1BD6F200)
#define SYSTEM_MATH_SIGN_OFFSET UNITYSDK_OFFSET(0x1BD6FEB0)
#define SYSTEM_MATH_SIN_OFFSET UNITYSDK_OFFSET(0x1BD6F2C0)
#define SYSTEM_MATH_SPLITFRACTIONDOUBLE_OFFSET UNITYSDK_OFFSET(0x1BD6F1F0)
#define SYSTEM_MATH_SQRT_OFFSET UNITYSDK_OFFSET(0x1BD6F6E0)
#define SYSTEM_MATH_TAN_OFFSET UNITYSDK_OFFSET(0x1BD6F2D0)
#define SYSTEM_MATH_TRUNCATE_1_OFFSET UNITYSDK_OFFSET(0x1BD6F6C0)
#define SYSTEM_MATH_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x1BD6F650)
#define SYSTEM_MATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD6FF80)

namespace System
{
	inline static constexpr unsigned int Math_TypeDefinitionIndex = 295;

	class Math : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Double>** StaticGet_roundPower10Double()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0xD300);
		}
		static ::System::Double* StaticGet_doubleRoundLimit()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0x40C0);
		}
		// static const ::System::Int32 maxRoundingDigits = 0xF; // 0x0
		// static const ::System::Double PI; // 0x0
		// static const ::System::Double E; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MATH__CCTOR_OFFSET))();
		}

		static ::System::Double Acos(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ACOS_OFFSET))(a1);
		}

		static ::System::Double Asin(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ASIN_OFFSET))(a1);
		}

		static ::System::Double Atan(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ATAN_OFFSET))(a1);
		}

		static ::System::Double Atan2(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ATAN2_OFFSET))(a1, a2);
		}

		static ::System::Double Ceiling(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_CEILING_OFFSET))(a1);
		}

		static ::System::Double Cos(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_COS_OFFSET))(a1);
		}

		static ::System::Decimal Floor(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_FLOOR_OFFSET))(a1);
		}

		static ::System::Double Floor_1(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_FLOOR_1_OFFSET))(a1);
		}

		static ::System::Double InternalRound(::System::Double a1, ::System::Int32 a2, ::System::MidpointRounding a3)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_MATH_INTERNALROUND_OFFSET))(a1, a2, a3);
		}

		static ::System::Double InternalTruncate(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_INTERNALTRUNCATE_OFFSET))(a1);
		}

		static ::System::Double Sin(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIN_OFFSET))(a1);
		}

		static ::System::Double Tan(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TAN_OFFSET))(a1);
		}

		static ::System::Double Round(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_OFFSET))(a1);
		}

		static ::System::Double Round_1(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_1_OFFSET))(a1, a2);
		}

		static ::System::Double Round_2(::System::Double a1, ::System::MidpointRounding a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_2_OFFSET))(a1, a2);
		}

		static ::System::Double Round_3(::System::Double a1, ::System::Int32 a2, ::System::MidpointRounding a3)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Decimal Round_4(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_4_OFFSET))(a1);
		}

		static ::System::Decimal Round_5(::System::Decimal a1, ::System::Int32 a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_5_OFFSET))(a1, a2);
		}

		static ::System::Double SplitFractionDouble(::System::Double* a1)
		{
			return ((::System::Double(*)(::System::Double*))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SPLITFRACTIONDOUBLE_OFFSET))(a1);
		}

		static ::System::Decimal Truncate(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TRUNCATE_OFFSET))(a1);
		}

		static ::System::Double Truncate_1(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TRUNCATE_1_OFFSET))(a1);
		}

		static ::System::Double Sqrt(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SQRT_OFFSET))(a1);
		}

		static ::System::Double Log(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG_OFFSET))(a1);
		}

		static ::System::Double Log10(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG10_OFFSET))(a1);
		}

		static ::System::Double Exp(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_EXP_OFFSET))(a1);
		}

		static ::System::Double Pow(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_POW_OFFSET))(a1, a2);
		}

		static ::System::Double IEEERemainder(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_IEEEREMAINDER_OFFSET))(a1, a2);
		}

		static ::System::Int32 Abs(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_OFFSET))(a1);
		}

		static ::System::Int32 AbsHelper(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABSHELPER_OFFSET))(a1);
		}

		static ::System::Int64 Abs_1(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_1_OFFSET))(a1);
		}

		static ::System::Int64 AbsHelper_1(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABSHELPER_1_OFFSET))(a1);
		}

		static ::System::Single Abs_2(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_2_OFFSET))(a1);
		}

		static ::System::Double Abs_3(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_3_OFFSET))(a1);
		}

		static ::System::Decimal Abs_4(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_4_OFFSET))(a1);
		}

		static ::System::Byte Max(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Byte(*)(::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(a1, a2);
		}

		static ::System::Int32 Max_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Max_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_2_OFFSET))(a1, a2);
		}

		static ::System::Int64 Max_3(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_3_OFFSET))(a1, a2);
		}

		static ::System::UInt64 Max_4(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_4_OFFSET))(a1, a2);
		}

		static ::System::Single Max_5(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_5_OFFSET))(a1, a2);
		}

		static ::System::Double Max_6(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_6_OFFSET))(a1, a2);
		}

		static ::System::Int16 Min(::System::Int16 a1, ::System::Int16 a2)
		{
			return ((::System::Int16(*)(::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(a1, a2);
		}

		static ::System::Int32 Min_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Min_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_2_OFFSET))(a1, a2);
		}

		static ::System::Int64 Min_3(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_3_OFFSET))(a1, a2);
		}

		static ::System::Single Min_4(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_4_OFFSET))(a1, a2);
		}

		static ::System::Double Min_5(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_5_OFFSET))(a1, a2);
		}

		static ::System::Double Log_1(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 Sign(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_OFFSET))(a1);
		}

		static ::System::Int32 Sign_1(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_1_OFFSET))(a1);
		}

		static ::System::Int32 Sign_2(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_2_OFFSET))(a1);
		}

		static ::System::Int32 Sign_3(::System::Double a1)
		{
			return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_3_OFFSET))(a1);
		}
	};
}
