#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemCurveMode.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x38926E0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x38926C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMAX_OFFSET UNITYSDK_OFFSET(0x3846C70)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMIN_OFFSET UNITYSDK_OFFSET(0x2D2B640)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANT_OFFSET UNITYSDK_OFFSET(0x3846C70)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMAX_OFFSET UNITYSDK_OFFSET(0x14410)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMIN_OFFSET UNITYSDK_OFFSET(0x60D0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x14410)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B3175D0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANTMAX_OFFSET UNITYSDK_OFFSET(0x3872DE0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANTMIN_OFFSET UNITYSDK_OFFSET(0x75120)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANT_OFFSET UNITYSDK_OFFSET(0x3872DE0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMAX_OFFSET UNITYSDK_OFFSET(0xB7C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMIN_OFFSET UNITYSDK_OFFSET(0x95B0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xD500)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVE_OFFSET UNITYSDK_OFFSET(0xB7C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3892660)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3892680)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x38926A0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x3892640)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MinMaxCurve_TypeDefinitionIndex = 5719;

	struct alignas(8) ParticleSystem_MinMaxCurve
	{
		::UnityEngine::ParticleSystemCurveMode m_Mode; // 0x10
		::System::Single m_CurveMultiplier; // 0x14
		::UnityEngine::AnimationCurve* m_CurveMin; // 0x18
		::UnityEngine::AnimationCurve* m_CurveMax; // 0x20
		::System::Single m_ConstantMin; // 0x28
		::System::Single m_ConstantMax; // 0x2C

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Single a1, ::UnityEngine::AnimationCurve* a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE__CTOR_3_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ParticleSystemCurveMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemCurveMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemCurveMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCurveMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_MODE_OFFSET))(this, a1);
		}

		::System::Single get_curveMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_curveMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_curveMax()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMAX_OFFSET))(this);
		}

		::System::Void set_curveMax(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMAX_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_curveMin()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVEMIN_OFFSET))(this);
		}

		::System::Void set_curveMin(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVEMIN_OFFSET))(this, a1);
		}

		::System::Single get_constantMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMAX_OFFSET))(this);
		}

		::System::Void set_constantMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANTMAX_OFFSET))(this, a1);
		}

		::System::Single get_constantMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANTMIN_OFFSET))(this);
		}

		::System::Void set_constantMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANTMIN_OFFSET))(this, a1);
		}

		::System::Single get_constant()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CONSTANT_OFFSET))(this);
		}

		::System::Void set_constant(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CONSTANT_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_curve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_GET_CURVE_OFFSET))(this);
		}

		::System::Void set_curve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_SET_CURVE_OFFSET))(this, a1);
		}

		::System::Single Evaluate(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_OFFSET))(this, a1);
		}

		::System::Single Evaluate_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_EVALUATE_1_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::ParticleSystem_MinMaxCurve op_Implicit(::System::Single a1)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXCURVE_OP_IMPLICIT_OFFSET))(a1);
		}
	};
}
