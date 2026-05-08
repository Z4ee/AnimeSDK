#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_MATHF_ABS_1_OFFSET UNITYSDK_OFFSET(0x1B4906A0)
#define UNITYENGINE_MATHF_ABS_OFFSET UNITYSDK_OFFSET(0x1B490690)
#define UNITYENGINE_MATHF_ACOS_OFFSET UNITYSDK_OFFSET(0x1B490610)
#define UNITYENGINE_MATHF_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1B4912E0)
#define UNITYENGINE_MATHF_ASIN_OFFSET UNITYSDK_OFFSET(0x1B4905F0)
#define UNITYENGINE_MATHF_ATAN2_OFFSET UNITYSDK_OFFSET(0x1B490650)
#define UNITYENGINE_MATHF_ATAN_OFFSET UNITYSDK_OFFSET(0x1B490630)
#define UNITYENGINE_MATHF_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x1B490E30)
#define UNITYENGINE_MATHF_CEIL_OFFSET UNITYSDK_OFFSET(0x1B490D60)
#define UNITYENGINE_MATHF_CLAMP01_OFFSET UNITYSDK_OFFSET(0x1B490F70)
#define UNITYENGINE_MATHF_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x1B490F60)
#define UNITYENGINE_MATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0x1B490F40)
#define UNITYENGINE_MATHF_CLOSESTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1B490500)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B490570)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_OFFSET UNITYSDK_OFFSET(0x1B490540)
#define UNITYENGINE_MATHF_COS_OFFSET UNITYSDK_OFFSET(0x1B4905B0)
#define UNITYENGINE_MATHF_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0x1B491220)
#define UNITYENGINE_MATHF_EXP_OFFSET UNITYSDK_OFFSET(0x1B490C50)
#define UNITYENGINE_MATHF_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x1B490E50)
#define UNITYENGINE_MATHF_FLOOR_OFFSET UNITYSDK_OFFSET(0x1B490D70)
#define UNITYENGINE_MATHF_GAMMATOLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x1B490520)
#define UNITYENGINE_MATHF_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x1B4915E0)
#define UNITYENGINE_MATHF_LERPANGLE_OFFSET UNITYSDK_OFFSET(0x1B490FD0)
#define UNITYENGINE_MATHF_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1B490FC0)
#define UNITYENGINE_MATHF_LERP_OFFSET UNITYSDK_OFFSET(0x1B490F90)
#define UNITYENGINE_MATHF_LINEARTOGAMMASPACE_OFFSET UNITYSDK_OFFSET(0x1B490530)
#define UNITYENGINE_MATHF_LOG10_OFFSET UNITYSDK_OFFSET(0x1B490D40)
#define UNITYENGINE_MATHF_LOG_1_OFFSET UNITYSDK_OFFSET(0x1B490D20)
#define UNITYENGINE_MATHF_LOG_OFFSET UNITYSDK_OFFSET(0x1B490C70)
#define UNITYENGINE_MATHF_MAX_1_OFFSET UNITYSDK_OFFSET(0x1B490980)
#define UNITYENGINE_MATHF_MAX_2_OFFSET UNITYSDK_OFFSET(0x1B490A50)
#define UNITYENGINE_MATHF_MAX_3_OFFSET UNITYSDK_OFFSET(0x1B490A60)
#define UNITYENGINE_MATHF_MAX_OFFSET UNITYSDK_OFFSET(0x1B490970)
#define UNITYENGINE_MATHF_MIN_1_OFFSET UNITYSDK_OFFSET(0x1B4906C0)
#define UNITYENGINE_MATHF_MIN_2_OFFSET UNITYSDK_OFFSET(0x1B490790)
#define UNITYENGINE_MATHF_MIN_3_OFFSET UNITYSDK_OFFSET(0x1B4907A0)
#define UNITYENGINE_MATHF_MIN_OFFSET UNITYSDK_OFFSET(0x1B4906B0)
#define UNITYENGINE_MATHF_MOVETOWARDSANGLE_OFFSET UNITYSDK_OFFSET(0x1B491120)
#define UNITYENGINE_MATHF_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1B4910D0)
#define UNITYENGINE_MATHF_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1B490510)
#define UNITYENGINE_MATHF_PERLINNOISE_OFFSET UNITYSDK_OFFSET(0x1B490580)
#define UNITYENGINE_MATHF_PINGPONG_OFFSET UNITYSDK_OFFSET(0x1B491570)
#define UNITYENGINE_MATHF_POW_OFFSET UNITYSDK_OFFSET(0x1B490C30)
#define UNITYENGINE_MATHF_REPEAT_OFFSET UNITYSDK_OFFSET(0x1B491080)
#define UNITYENGINE_MATHF_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x1B490E70)
#define UNITYENGINE_MATHF_ROUND_OFFSET UNITYSDK_OFFSET(0x1B490D80)
#define UNITYENGINE_MATHF_SIGN_OFFSET UNITYSDK_OFFSET(0x1B490F20)
#define UNITYENGINE_MATHF_SIN_OFFSET UNITYSDK_OFFSET(0x1B490590)
#define UNITYENGINE_MATHF_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x1B491450)
#define UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x1B491320)
#define UNITYENGINE_MATHF_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x1B491290)
#define UNITYENGINE_MATHF_SQRT_OFFSET UNITYSDK_OFFSET(0x1B490670)
#define UNITYENGINE_MATHF_TAN_OFFSET UNITYSDK_OFFSET(0x1B4905D0)
#define UNITYENGINE_MATHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B491620)

namespace UnityEngine
{
	inline static constexpr unsigned int Mathf_TypeDefinitionIndex = 5302;

	struct alignas(1) Mathf
	{
		static ::System::Single* StaticGet_Epsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Mathf_TypeDefinitionIndex)->GetStaticField(0x2980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF__CCTOR_OFFSET))();
		}

		static ::System::Int32 ClosestPowerOfTwo(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLOSESTPOWEROFTWO_OFFSET))(value);
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

		static ::System::Single Min_1(::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_1_OFFSET))(values);
		}

		static ::System::Int32 Min_2(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_2_OFFSET))(a, b);
		}

		static ::System::Int32 Min_3(::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_3_OFFSET))(values);
		}

		static ::System::Single Max(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_OFFSET))(a, b);
		}

		static ::System::Single Max_1(::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_1_OFFSET))(values);
		}

		static ::System::Int32 Max_2(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_2_OFFSET))(a, b);
		}

		static ::System::Int32 Max_3(::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_3_OFFSET))(values);
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

		static ::System::Boolean Approximately(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::System::Single SmoothDamp(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET))(current, target, currentVelocity, smoothTime);
		}

		static ::System::Single SmoothDamp_1(::System::Single current, ::System::Single target, ::System::Single& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_1_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
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
		static ::System::Void CorrelatedColorTemperatureToRGB_Injected(::System::Single kelvin, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET))(kelvin, ret);
		}
		*/
	};
}
