#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemCurveMode.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x22F31C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x22F31A0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMAX_OFFSET UNITYSDK_OFFSET(0x22B7270)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMIN_OFFSET UNITYSDK_OFFSET(0x17967C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANT_OFFSET UNITYSDK_OFFSET(0x22B7270)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMAX_OFFSET UNITYSDK_OFFSET(0x13C30)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMIN_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xCC70)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x13C30)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A4C9850)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANTMAX_OFFSET UNITYSDK_OFFSET(0x22D72D0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANTMIN_OFFSET UNITYSDK_OFFSET(0x6ECA0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANT_OFFSET UNITYSDK_OFFSET(0x22D72D0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMAX_OFFSET UNITYSDK_OFFSET(0xAF80)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMIN_OFFSET UNITYSDK_OFFSET(0x8D10)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xCC80)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVE_OFFSET UNITYSDK_OFFSET(0xAF80)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x299E0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22F3140)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x22F3160)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x22F3180)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x22F3120)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MinMaxCurve_TypeDefinitionIndex = 5442;

	struct alignas(8) ParticleSystem_MinMaxCurve
	{
		::UnityEngine::ParticleSystemCurveMode m_Mode; // 0x10
		::System::Single m_CurveMultiplier; // 0x14
		::UnityEngine::AnimationCurve* m_CurveMin; // 0x18
		::UnityEngine::AnimationCurve* m_CurveMax; // 0x20
		::System::Single m_ConstantMin; // 0x28
		::System::Single m_ConstantMax; // 0x2C

		::System::Void _ctor(::System::Single constant)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_OFFSET))(this, constant);
		}

		::System::Void _ctor_1(::System::Single multiplier, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_1_OFFSET))(this, multiplier, curve);
		}

		::System::Void _ctor_2(::System::Single multiplier, ::UnityEngine::AnimationCurve* min, ::UnityEngine::AnimationCurve* max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_2_OFFSET))(this, multiplier, min, max);
		}

		::System::Void _ctor_3(::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_3_OFFSET))(this, min, max);
		}

		::UnityEngine::ParticleSystemCurveMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemCurveMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemCurveMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCurveMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_MODE_OFFSET))(this, value);
		}

		::System::Single get_curveMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_curveMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMULTIPLIER_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_curveMax()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMAX_OFFSET))(this);
		}

		::System::Void set_curveMax(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMAX_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_curveMin()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMIN_OFFSET))(this);
		}

		::System::Void set_curveMin(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMIN_OFFSET))(this, value);
		}

		::System::Single get_constantMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMAX_OFFSET))(this);
		}

		::System::Void set_constantMax(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANTMAX_OFFSET))(this, value);
		}

		::System::Single get_constantMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMIN_OFFSET))(this);
		}

		::System::Void set_constantMin(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANTMIN_OFFSET))(this, value);
		}

		::System::Single get_constant()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANT_OFFSET))(this);
		}

		::System::Void set_constant(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANT_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_curve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVE_OFFSET))(this);
		}

		::System::Void set_curve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVE_OFFSET))(this, value);
		}

		::System::Single Evaluate(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_OFFSET))(this, time);
		}

		::System::Single Evaluate_1(::System::Single time, ::System::Single lerpFactor)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_1_OFFSET))(this, time, lerpFactor);
		}

		static ::UnityEngine::ParticleSystem_MinMaxCurve op_Implicit(::System::Single constant)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_OP_IMPLICIT_OFFSET))(constant);
		}
	};
}
