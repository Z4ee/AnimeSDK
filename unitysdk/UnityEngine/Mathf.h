#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Random; }

#define UNITYENGINE_MATHF_ABS_1_OFFSET UNITYSDK_OFFSET(0x18A1A8C0)
#define UNITYENGINE_MATHF_ABS_OFFSET UNITYSDK_OFFSET(0x18A1A8B0)
#define UNITYENGINE_MATHF_ACOS_OFFSET UNITYSDK_OFFSET(0x18A1A830)
#define UNITYENGINE_MATHF_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x18A1B5F0)
#define UNITYENGINE_MATHF_ASIN_OFFSET UNITYSDK_OFFSET(0x18A1A810)
#define UNITYENGINE_MATHF_ATAN2_OFFSET UNITYSDK_OFFSET(0x18A1A870)
#define UNITYENGINE_MATHF_ATAN_OFFSET UNITYSDK_OFFSET(0x18A1A850)
#define UNITYENGINE_MATHF_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x18A1B0E0)
#define UNITYENGINE_MATHF_CEIL_OFFSET UNITYSDK_OFFSET(0x18A1B010)
#define UNITYENGINE_MATHF_CLAMP01_OFFSET UNITYSDK_OFFSET(0x18A1B220)
#define UNITYENGINE_MATHF_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x18A1B210)
#define UNITYENGINE_MATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0x18A1B1F0)
#define UNITYENGINE_MATHF_CLOSESTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x18A1A6F0)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1A770)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_OFFSET UNITYSDK_OFFSET(0x18A1A740)
#define UNITYENGINE_MATHF_COS_OFFSET UNITYSDK_OFFSET(0x18A1A7D0)
#define UNITYENGINE_MATHF_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0x18A1B4D0)
#define UNITYENGINE_MATHF_EXP_OFFSET UNITYSDK_OFFSET(0x18A1AF00)
#define UNITYENGINE_MATHF_FLOATTOHALF_OFFSET UNITYSDK_OFFSET(0x18A1A780)
#define UNITYENGINE_MATHF_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x18A1B100)
#define UNITYENGINE_MATHF_FLOOR_OFFSET UNITYSDK_OFFSET(0x18A1B020)
#define UNITYENGINE_MATHF_GAMMATOLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x18A1A720)
#define UNITYENGINE_MATHF_GAMMA_OFFSET UNITYSDK_OFFSET(0x18A1B590)
#define UNITYENGINE_MATHF_HALFTOFLOAT_OFFSET UNITYSDK_OFFSET(0x18A1A790)
#define UNITYENGINE_MATHF_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x18A1BF20)
#define UNITYENGINE_MATHF_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x18A1A700)
#define UNITYENGINE_MATHF_LERPANGLE_OFFSET UNITYSDK_OFFSET(0x18A1B280)
#define UNITYENGINE_MATHF_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x18A1B270)
#define UNITYENGINE_MATHF_LERP_OFFSET UNITYSDK_OFFSET(0x18A1B240)
#define UNITYENGINE_MATHF_LINEARTOGAMMASPACE_OFFSET UNITYSDK_OFFSET(0x18A1A730)
#define UNITYENGINE_MATHF_LINEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x18A1BF60)
#define UNITYENGINE_MATHF_LINESEGMENTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x18A1C050)
#define UNITYENGINE_MATHF_LOG10_OFFSET UNITYSDK_OFFSET(0x18A1AFF0)
#define UNITYENGINE_MATHF_LOG_1_OFFSET UNITYSDK_OFFSET(0x18A1AFD0)
#define UNITYENGINE_MATHF_LOG_OFFSET UNITYSDK_OFFSET(0x18A1AF20)
#define UNITYENGINE_MATHF_MAX_1_OFFSET UNITYSDK_OFFSET(0x18A1ABE0)
#define UNITYENGINE_MATHF_MAX_2_OFFSET UNITYSDK_OFFSET(0x18A1ABF0)
#define UNITYENGINE_MATHF_MAX_3_OFFSET UNITYSDK_OFFSET(0x18A1AC00)
#define UNITYENGINE_MATHF_MAX_4_OFFSET UNITYSDK_OFFSET(0x18A1ACD0)
#define UNITYENGINE_MATHF_MAX_5_OFFSET UNITYSDK_OFFSET(0x18A1ACE0)
#define UNITYENGINE_MATHF_MAX_6_OFFSET UNITYSDK_OFFSET(0x18A1ACF0)
#define UNITYENGINE_MATHF_MAX_7_OFFSET UNITYSDK_OFFSET(0x18A1AD10)
#define UNITYENGINE_MATHF_MAX_OFFSET UNITYSDK_OFFSET(0x18A1ABD0)
#define UNITYENGINE_MATHF_MIN_1_OFFSET UNITYSDK_OFFSET(0x18A1A8E0)
#define UNITYENGINE_MATHF_MIN_2_OFFSET UNITYSDK_OFFSET(0x18A1A8F0)
#define UNITYENGINE_MATHF_MIN_3_OFFSET UNITYSDK_OFFSET(0x18A1A900)
#define UNITYENGINE_MATHF_MIN_4_OFFSET UNITYSDK_OFFSET(0x18A0F490)
#define UNITYENGINE_MATHF_MIN_5_OFFSET UNITYSDK_OFFSET(0x18A1A9D0)
#define UNITYENGINE_MATHF_MIN_6_OFFSET UNITYSDK_OFFSET(0x18A1A9E0)
#define UNITYENGINE_MATHF_MIN_7_OFFSET UNITYSDK_OFFSET(0x18A1AA00)
#define UNITYENGINE_MATHF_MIN_OFFSET UNITYSDK_OFFSET(0x18A1A8D0)
#define UNITYENGINE_MATHF_MOVETOWARDSANGLE_OFFSET UNITYSDK_OFFSET(0x18A1B3D0)
#define UNITYENGINE_MATHF_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x18A1B380)
#define UNITYENGINE_MATHF_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x18A1A710)
#define UNITYENGINE_MATHF_PERLINNOISE_OFFSET UNITYSDK_OFFSET(0x18A1A7A0)
#define UNITYENGINE_MATHF_PINGPONG_OFFSET UNITYSDK_OFFSET(0x18A1BEB0)
#define UNITYENGINE_MATHF_POW_OFFSET UNITYSDK_OFFSET(0x18A1AEE0)
#define UNITYENGINE_MATHF_RANDOMTOLONG_OFFSET UNITYSDK_OFFSET(0x18A1C160)
#define UNITYENGINE_MATHF_REPEAT_OFFSET UNITYSDK_OFFSET(0x18A1B330)
#define UNITYENGINE_MATHF_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x18A1B120)
#define UNITYENGINE_MATHF_ROUND_OFFSET UNITYSDK_OFFSET(0x18A1B030)
#define UNITYENGINE_MATHF_SIGN_OFFSET UNITYSDK_OFFSET(0x18A1B1D0)
#define UNITYENGINE_MATHF_SIN_OFFSET UNITYSDK_OFFSET(0x18A1A7B0)
#define UNITYENGINE_MATHF_SMOOTHDAMPANGLE_1_OFFSET UNITYSDK_OFFSET(0x18A1BD10)
#define UNITYENGINE_MATHF_SMOOTHDAMPANGLE_2_OFFSET UNITYSDK_OFFSET(0x18A1BB60)
#define UNITYENGINE_MATHF_SMOOTHDAMPANGLE_OFFSET UNITYSDK_OFFSET(0x18A1B9B0)
#define UNITYENGINE_MATHF_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x18A1B880)
#define UNITYENGINE_MATHF_SMOOTHDAMP_2_OFFSET UNITYSDK_OFFSET(0x18A1B760)
#define UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x18A1B630)
#define UNITYENGINE_MATHF_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x18A1B540)
#define UNITYENGINE_MATHF_SQRT_OFFSET UNITYSDK_OFFSET(0x18A1A890)
#define UNITYENGINE_MATHF_TAN_OFFSET UNITYSDK_OFFSET(0x18A1A7F0)
#define UNITYENGINE_MATHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A1C1F0)

namespace UnityEngine
{
	inline static constexpr unsigned int Mathf_TypeDefinitionIndex = 4035;

	struct alignas(1) Mathf
	{
		static ::System::Single* StaticGet_Epsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Mathf_TypeDefinitionIndex)->GetStaticField(0x4AA0);
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

		static ::System::Int32 ClosestPowerOfTwo(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLOSESTPOWEROFTWO_OFFSET))(value);
		}

		static ::System::Boolean IsPowerOfTwo(::System::Int32 value)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ISPOWEROFTWO_OFFSET))(value);
		}

		static ::System::Int32 NextPowerOfTwo(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_NEXTPOWEROFTWO_OFFSET))(value);
		}

		static ::System::Single GammaToLinearSpace(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_GAMMATOLINEARSPACE_OFFSET))(value);
		}

		static ::System::Single LinearToGammaSpace(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LINEARTOGAMMASPACE_OFFSET))(value);
		}

		/*
		static ::UnityEngine::Color CorrelatedColorTemperatureToRGB(::System::Single kelvin)
		{
			return ((::UnityEngine::Color(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_OFFSET))(kelvin);
		}
		*/

		static ::System::UInt16 FloatToHalf(::System::Single val)
		{
			return ((::System::UInt16(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOATTOHALF_OFFSET))(val);
		}

		static ::System::Single HalfToFloat(::System::UInt16 val)
		{
			return ((::System::Single(*)(::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_HALFTOFLOAT_OFFSET))(val);
		}

		static ::System::Single PerlinNoise(::System::Single x, ::System::Single y)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_PERLINNOISE_OFFSET))(x, y);
		}

		static ::System::Single Sin(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SIN_OFFSET))(f);
		}

		static ::System::Single Cos(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_COS_OFFSET))(f);
		}

		static ::System::Single Tan(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_TAN_OFFSET))(f);
		}

		static ::System::Single Asin(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ASIN_OFFSET))(f);
		}

		static ::System::Single Acos(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ACOS_OFFSET))(f);
		}

		static ::System::Single Atan(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ATAN_OFFSET))(f);
		}

		static ::System::Single Atan2(::System::Single y, ::System::Single x)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ATAN2_OFFSET))(y, x);
		}

		static ::System::Single Sqrt(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SQRT_OFFSET))(f);
		}

		static ::System::Single Abs(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ABS_OFFSET))(f);
		}

		static ::System::Int32 Abs_1(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ABS_1_OFFSET))(value);
		}

		static ::System::Single Min(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_OFFSET))(a, b);
		}

		static ::System::Single Min_1(::System::Single a, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_1_OFFSET))(a, b, c);
		}

		static ::System::Single Min_2(::System::Single a, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_2_OFFSET))(a, b, c, d);
		}

		static ::System::Single Min_3(::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_3_OFFSET))(values);
		}

		static ::System::Int32 Min_4(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_4_OFFSET))(a, b);
		}

		static ::System::Int32 Min_5(::System::Int32 a, ::System::Int32 b, ::System::Int32 c)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_5_OFFSET))(a, b, c);
		}

		static ::System::Int32 Min_6(::System::Int32 a, ::System::Int32 b, ::System::Int32 c, ::System::Int32 d)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_6_OFFSET))(a, b, c, d);
		}

		static ::System::Int32 Min_7(::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_7_OFFSET))(values);
		}

		static ::System::Single Max(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_OFFSET))(a, b);
		}

		static ::System::Single Max_1(::System::Single a, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_1_OFFSET))(a, b, c);
		}

		static ::System::Single Max_2(::System::Single a, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_2_OFFSET))(a, b, c, d);
		}

		static ::System::Single Max_3(::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_3_OFFSET))(values);
		}

		static ::System::Int32 Max_4(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_4_OFFSET))(a, b);
		}

		static ::System::Int32 Max_5(::System::Int32 a, ::System::Int32 b, ::System::Int32 c)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_5_OFFSET))(a, b, c);
		}

		static ::System::Int32 Max_6(::System::Int32 a, ::System::Int32 b, ::System::Int32 c, ::System::Int32 d)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_6_OFFSET))(a, b, c, d);
		}

		static ::System::Int32 Max_7(::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_7_OFFSET))(values);
		}

		static ::System::Single Pow(::System::Single f, ::System::Single p)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_POW_OFFSET))(f, p);
		}

		static ::System::Single Exp(::System::Single power)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_EXP_OFFSET))(power);
		}

		static ::System::Single Log(::System::Single f, ::System::Single p)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG_OFFSET))(f, p);
		}

		static ::System::Single Log_1(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG_1_OFFSET))(f);
		}

		static ::System::Single Log10(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG10_OFFSET))(f);
		}

		static ::System::Single Ceil(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CEIL_OFFSET))(f);
		}

		static ::System::Single Floor(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOOR_OFFSET))(f);
		}

		static ::System::Single Round(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ROUND_OFFSET))(f);
		}

		static ::System::Int32 CeilToInt(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CEILTOINT_OFFSET))(f);
		}

		static ::System::Int32 FloorToInt(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOORTOINT_OFFSET))(f);
		}

		static ::System::Int32 RoundToInt(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ROUNDTOINT_OFFSET))(f);
		}

		static ::System::Single Sign(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SIGN_OFFSET))(f);
		}

		static ::System::Single Clamp(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP_OFFSET))(value, min, max);
		}

		static ::System::Int32 Clamp_1(::System::Int32 value, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP_1_OFFSET))(value, min, max);
		}

		static ::System::Single Clamp01(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP01_OFFSET))(value);
		}

		static ::System::Single Lerp(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERP_OFFSET))(a, b, t);
		}

		static ::System::Single LerpUnclamped(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::System::Single LerpAngle(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERPANGLE_OFFSET))(a, b, t);
		}

		static ::System::Single MoveTowards(::System::Single current, ::System::Single target, ::System::Single maxDelta)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MOVETOWARDS_OFFSET))(current, target, maxDelta);
		}

		static ::System::Single MoveTowardsAngle(::System::Single current, ::System::Single target, ::System::Single maxDelta)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MOVETOWARDSANGLE_OFFSET))(current, target, maxDelta);
		}

		static ::System::Single SmoothStep(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHSTEP_OFFSET))(from, to, t);
		}

		static ::System::Single Gamma(::System::Single value, ::System::Single absmax, ::System::Single gamma)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_GAMMA_OFFSET))(value, absmax, gamma);
		}

		static ::System::Boolean Approximately(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::System::Single SmoothDamp(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed);
		}

		static ::System::Single SmoothDamp_1(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_1_OFFSET))(current, target, currentVelocity, smoothTime);
		}

		static ::System::Single SmoothDamp_2(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_2_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
		}

		static ::System::Single SmoothDampAngle(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMPANGLE_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed);
		}

		static ::System::Single SmoothDampAngle_1(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMPANGLE_1_OFFSET))(current, target, currentVelocity, smoothTime);
		}

		static ::System::Single SmoothDampAngle_2(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMPANGLE_2_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
		}

		static ::System::Single Repeat(::System::Single t, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_REPEAT_OFFSET))(t, length);
		}

		static ::System::Single PingPong(::System::Single t, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_PINGPONG_OFFSET))(t, length);
		}

		static ::System::Single InverseLerp(::System::Single a, ::System::Single b, ::System::Single value)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_INVERSELERP_OFFSET))(a, b, value);
		}

		static ::System::Single DeltaAngle(::System::Single current, ::System::Single target)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_DELTAANGLE_OFFSET))(current, target);
		}

		/*
		static ::System::Boolean LineIntersection(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ::UnityEngine::Vector2 p4, ::UnityEngine::Vector2& result)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LINEINTERSECTION_OFFSET))(p1, p2, p3, p4, result);
		}
		*/

		/*
		static ::System::Boolean LineSegmentIntersection(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ::UnityEngine::Vector2 p4, ::UnityEngine::Vector2& result)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LINESEGMENTINTERSECTION_OFFSET))(p1, p2, p3, p4, result);
		}
		*/

		static ::System::Int64 RandomToLong(::System::Random* r)
		{
			return ((::System::Int64(*)(::System::Random*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_RANDOMTOLONG_OFFSET))(r);
		}

		/*
		static ::System::Void CorrelatedColorTemperatureToRGB_Injected(::System::Single kelvin, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET))(kelvin, ret);
		}
		*/
	};
}
