#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemCurveMode.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0xA90560)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA90540)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMAX_OFFSET UNITYSDK_OFFSET(0xA3F7B0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMIN_OFFSET UNITYSDK_OFFSET(0x61E820)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANT_OFFSET UNITYSDK_OFFSET(0xA3F7B0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMAX_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMIN_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x44EB60)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F120B80)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANT_OFFSET UNITYSDK_OFFSET(0xA7E7A0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA90520)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA90500)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MinMaxCurve_TypeDefinitionIndex = 7708;

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

		::System::Void _ctor_1(::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_1_OFFSET))(this, min, max);
		}

		::UnityEngine::ParticleSystemCurveMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemCurveMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_MODE_OFFSET))(this);
		}

		::System::Single get_curveMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMULTIPLIER_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_curveMax()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMAX_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_curveMin()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMIN_OFFSET))(this);
		}

		::System::Single get_constantMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMAX_OFFSET))(this);
		}

		::System::Single get_constantMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMIN_OFFSET))(this);
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
