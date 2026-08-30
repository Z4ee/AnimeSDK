#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Random; }

#define UNITYENGINE_MATHF_ABS_1_OFFSET UNITYSDK_OFFSET(0x1EE02560)
#define UNITYENGINE_MATHF_ABS_OFFSET UNITYSDK_OFFSET(0x1EE02550)
#define UNITYENGINE_MATHF_ACOS_OFFSET UNITYSDK_OFFSET(0x1EE024D0)
#define UNITYENGINE_MATHF_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1EE03290)
#define UNITYENGINE_MATHF_ASIN_OFFSET UNITYSDK_OFFSET(0x1EE024B0)
#define UNITYENGINE_MATHF_ATAN2_OFFSET UNITYSDK_OFFSET(0x1EE02510)
#define UNITYENGINE_MATHF_ATAN_OFFSET UNITYSDK_OFFSET(0x1EE024F0)
#define UNITYENGINE_MATHF_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x1EE02D80)
#define UNITYENGINE_MATHF_CEIL_OFFSET UNITYSDK_OFFSET(0x1EE02CB0)
#define UNITYENGINE_MATHF_CLAMP01_OFFSET UNITYSDK_OFFSET(0x1EE02EC0)
#define UNITYENGINE_MATHF_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x1EE02EB0)
#define UNITYENGINE_MATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0x1EE02E90)
#define UNITYENGINE_MATHF_CLOSESTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1EE02390)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE02410)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_OFFSET UNITYSDK_OFFSET(0x1EE023E0)
#define UNITYENGINE_MATHF_COS_OFFSET UNITYSDK_OFFSET(0x1EE02470)
#define UNITYENGINE_MATHF_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0x1EE03170)
#define UNITYENGINE_MATHF_EXP_OFFSET UNITYSDK_OFFSET(0x1EE02BA0)
#define UNITYENGINE_MATHF_FLOATTOHALF_OFFSET UNITYSDK_OFFSET(0x1EE02420)
#define UNITYENGINE_MATHF_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x1EE02DA0)
#define UNITYENGINE_MATHF_FLOOR_OFFSET UNITYSDK_OFFSET(0x1EE02CC0)
#define UNITYENGINE_MATHF_GAMMATOLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x1EE023C0)
#define UNITYENGINE_MATHF_GAMMA_OFFSET UNITYSDK_OFFSET(0x1EE03230)
#define UNITYENGINE_MATHF_HALFTOFLOAT_OFFSET UNITYSDK_OFFSET(0x1EE02430)
#define UNITYENGINE_MATHF_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x1EE03BC0)
#define UNITYENGINE_MATHF_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1EE023A0)
#define UNITYENGINE_MATHF_LERPANGLE_OFFSET UNITYSDK_OFFSET(0x1EE02F20)
#define UNITYENGINE_MATHF_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1EE02F10)
#define UNITYENGINE_MATHF_LERP_OFFSET UNITYSDK_OFFSET(0x1EE02EE0)
#define UNITYENGINE_MATHF_LINEARTOGAMMASPACE_OFFSET UNITYSDK_OFFSET(0x1EE023D0)
#define UNITYENGINE_MATHF_LINEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1EE03C00)
#define UNITYENGINE_MATHF_LINESEGMENTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1EE03CF0)
#define UNITYENGINE_MATHF_LOG10_OFFSET UNITYSDK_OFFSET(0x1EE02C90)
#define UNITYENGINE_MATHF_LOG_1_OFFSET UNITYSDK_OFFSET(0x1EE02C70)
#define UNITYENGINE_MATHF_LOG_OFFSET UNITYSDK_OFFSET(0x1EE02BC0)
#define UNITYENGINE_MATHF_MAX_1_OFFSET UNITYSDK_OFFSET(0x1EE02880)
#define UNITYENGINE_MATHF_MAX_2_OFFSET UNITYSDK_OFFSET(0x1EE02890)
#define UNITYENGINE_MATHF_MAX_3_OFFSET UNITYSDK_OFFSET(0x1EE028A0)
#define UNITYENGINE_MATHF_MAX_4_OFFSET UNITYSDK_OFFSET(0x1EE02970)
#define UNITYENGINE_MATHF_MAX_5_OFFSET UNITYSDK_OFFSET(0x1EE02980)
#define UNITYENGINE_MATHF_MAX_6_OFFSET UNITYSDK_OFFSET(0x1EE02990)
#define UNITYENGINE_MATHF_MAX_7_OFFSET UNITYSDK_OFFSET(0x1EE029B0)
#define UNITYENGINE_MATHF_MAX_OFFSET UNITYSDK_OFFSET(0x1EE02870)
#define UNITYENGINE_MATHF_MIN_1_OFFSET UNITYSDK_OFFSET(0x1EE02580)
#define UNITYENGINE_MATHF_MIN_2_OFFSET UNITYSDK_OFFSET(0x1EE02590)
#define UNITYENGINE_MATHF_MIN_3_OFFSET UNITYSDK_OFFSET(0x1EE025A0)
#define UNITYENGINE_MATHF_MIN_4_OFFSET UNITYSDK_OFFSET(0x1EDF74D0)
#define UNITYENGINE_MATHF_MIN_5_OFFSET UNITYSDK_OFFSET(0x1EE02670)
#define UNITYENGINE_MATHF_MIN_6_OFFSET UNITYSDK_OFFSET(0x1EE02680)
#define UNITYENGINE_MATHF_MIN_7_OFFSET UNITYSDK_OFFSET(0x1EE026A0)
#define UNITYENGINE_MATHF_MIN_OFFSET UNITYSDK_OFFSET(0x1EE02570)
#define UNITYENGINE_MATHF_MOVETOWARDSANGLE_OFFSET UNITYSDK_OFFSET(0x1EE03070)
#define UNITYENGINE_MATHF_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1EE03020)
#define UNITYENGINE_MATHF_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1EE023B0)
#define UNITYENGINE_MATHF_PERLINNOISE_OFFSET UNITYSDK_OFFSET(0x1EE02440)
#define UNITYENGINE_MATHF_PINGPONG_OFFSET UNITYSDK_OFFSET(0x1EE03B50)
#define UNITYENGINE_MATHF_POW_OFFSET UNITYSDK_OFFSET(0x1EE02B80)
#define UNITYENGINE_MATHF_RANDOMTOLONG_OFFSET UNITYSDK_OFFSET(0x1EE03E00)
#define UNITYENGINE_MATHF_REPEAT_OFFSET UNITYSDK_OFFSET(0x1EE02FD0)
#define UNITYENGINE_MATHF_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x1EE02DC0)
#define UNITYENGINE_MATHF_ROUND_OFFSET UNITYSDK_OFFSET(0x1EE02CD0)
#define UNITYENGINE_MATHF_SIGN_OFFSET UNITYSDK_OFFSET(0x1EE02E70)
#define UNITYENGINE_MATHF_SIN_OFFSET UNITYSDK_OFFSET(0x1EE02450)
#define UNITYENGINE_MATHF_SMOOTHDAMPANGLE_1_OFFSET UNITYSDK_OFFSET(0x1EE039B0)
#define UNITYENGINE_MATHF_SMOOTHDAMPANGLE_2_OFFSET UNITYSDK_OFFSET(0x1EE03800)
#define UNITYENGINE_MATHF_SMOOTHDAMPANGLE_OFFSET UNITYSDK_OFFSET(0x1EE03650)
#define UNITYENGINE_MATHF_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x1EE03520)
#define UNITYENGINE_MATHF_SMOOTHDAMP_2_OFFSET UNITYSDK_OFFSET(0x1EE03400)
#define UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x1EE032D0)
#define UNITYENGINE_MATHF_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x1EE031E0)
#define UNITYENGINE_MATHF_SQRT_OFFSET UNITYSDK_OFFSET(0x1EE02530)
#define UNITYENGINE_MATHF_TAN_OFFSET UNITYSDK_OFFSET(0x1EE02490)
#define UNITYENGINE_MATHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE03F00)

namespace UnityEngine
{
	inline static constexpr unsigned int Mathf_TypeDefinitionIndex = 4226;

	struct alignas(1) Mathf
	{
		static ::System::Single* StaticGet_Epsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Mathf_TypeDefinitionIndex)->GetStaticField(0xC90);
		}
		// static const ::System::Single PI; // 0x0
		// static const ::System::Single Infinity; // 0x0
		// static const ::System::Single NegativeInfinity; // 0x0
		// static const ::System::Single Deg2Rad; // 0x0
		// static const ::System::Single Rad2Deg; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF__CCTOR_OFFSET))();
		}

		static ::System::Int32 ClosestPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLOSESTPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Boolean IsPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ISPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Int32 NextPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_NEXTPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Single GammaToLinearSpace(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_GAMMATOLINEARSPACE_OFFSET))(a1);
		}

		static ::System::Single LinearToGammaSpace(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LINEARTOGAMMASPACE_OFFSET))(a1);
		}

		/*
		static ::UnityEngine::Color CorrelatedColorTemperatureToRGB(::System::Single a1)
		{
			return ((::UnityEngine::Color(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_OFFSET))(a1);
		}
		*/

		static ::System::UInt16 FloatToHalf(::System::Single a1)
		{
			return ((::System::UInt16(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOATTOHALF_OFFSET))(a1);
		}

		static ::System::Single HalfToFloat(::System::UInt16 a1)
		{
			return ((::System::Single(*)(::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_HALFTOFLOAT_OFFSET))(a1);
		}

		static ::System::Single PerlinNoise(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_PERLINNOISE_OFFSET))(a1, a2);
		}

		static ::System::Single Sin(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SIN_OFFSET))(a1);
		}

		static ::System::Single Cos(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_COS_OFFSET))(a1);
		}

		static ::System::Single Tan(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_TAN_OFFSET))(a1);
		}

		static ::System::Single Asin(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ASIN_OFFSET))(a1);
		}

		static ::System::Single Acos(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ACOS_OFFSET))(a1);
		}

		static ::System::Single Atan(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ATAN_OFFSET))(a1);
		}

		static ::System::Single Atan2(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ATAN2_OFFSET))(a1, a2);
		}

		static ::System::Single Sqrt(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SQRT_OFFSET))(a1);
		}

		static ::System::Single Abs(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ABS_OFFSET))(a1);
		}

		static ::System::Int32 Abs_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ABS_1_OFFSET))(a1);
		}

		static ::System::Single Min(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_OFFSET))(a1, a2);
		}

		static ::System::Single Min_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Min_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single Min_3(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_3_OFFSET))(a1);
		}

		static ::System::Int32 Min_4(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_4_OFFSET))(a1, a2);
		}

		static ::System::Int32 Min_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Min_6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_6_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Min_7(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_7_OFFSET))(a1);
		}

		static ::System::Single Max(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_OFFSET))(a1, a2);
		}

		static ::System::Single Max_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Max_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single Max_3(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_3_OFFSET))(a1);
		}

		static ::System::Int32 Max_4(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_4_OFFSET))(a1, a2);
		}

		static ::System::Int32 Max_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Max_6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_6_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Max_7(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_7_OFFSET))(a1);
		}

		static ::System::Single Pow(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_POW_OFFSET))(a1, a2);
		}

		static ::System::Single Exp(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_EXP_OFFSET))(a1);
		}

		static ::System::Single Log(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG_OFFSET))(a1, a2);
		}

		static ::System::Single Log_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG_1_OFFSET))(a1);
		}

		static ::System::Single Log10(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG10_OFFSET))(a1);
		}

		static ::System::Single Ceil(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CEIL_OFFSET))(a1);
		}

		static ::System::Single Floor(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOOR_OFFSET))(a1);
		}

		static ::System::Single Round(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ROUND_OFFSET))(a1);
		}

		static ::System::Int32 CeilToInt(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CEILTOINT_OFFSET))(a1);
		}

		static ::System::Int32 FloorToInt(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOORTOINT_OFFSET))(a1);
		}

		static ::System::Int32 RoundToInt(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ROUNDTOINT_OFFSET))(a1);
		}

		static ::System::Single Sign(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SIGN_OFFSET))(a1);
		}

		static ::System::Single Clamp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Clamp_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Clamp01(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP01_OFFSET))(a1);
		}

		static ::System::Single Lerp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LerpUnclamped(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LerpAngle(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERPANGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single MoveTowards(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MOVETOWARDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Single MoveTowardsAngle(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MOVETOWARDSANGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single SmoothStep(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHSTEP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Gamma(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_GAMMA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Approximately(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_APPROXIMATELY_OFFSET))(a1, a2);
		}

		static ::System::Single SmoothDamp(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single SmoothDamp_1(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single SmoothDamp_2(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single SmoothDampAngle(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMPANGLE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single SmoothDampAngle_1(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMPANGLE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single SmoothDampAngle_2(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMPANGLE_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single Repeat(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_REPEAT_OFFSET))(a1, a2);
		}

		static ::System::Single PingPong(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_PINGPONG_OFFSET))(a1, a2);
		}

		static ::System::Single InverseLerp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_INVERSELERP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single DeltaAngle(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_DELTAANGLE_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean LineIntersection(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LINEINTERSECTION_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean LineSegmentIntersection(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LINESEGMENTINTERSECTION_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		static ::System::Int64 RandomToLong(::System::Random* a1)
		{
			return ((::System::Int64(*)(::System::Random*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_RANDOMTOLONG_OFFSET))(a1);
		}

		/*
		static ::System::Void CorrelatedColorTemperatureToRGB_Injected(::System::Single a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET))(a1, a2);
		}
		*/
	};
}
