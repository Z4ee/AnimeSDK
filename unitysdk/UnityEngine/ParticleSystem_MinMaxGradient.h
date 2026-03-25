#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ParticleSystemGradientMode.h"

namespace UnityEngine { class Gradient; }

#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x2121630)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x2121600)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLORMAX_OFFSET UNITYSDK_OFFSET(0x21215E0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLORMIN_OFFSET UNITYSDK_OFFSET(0x15D2010)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x21215E0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENTMAX_OFFSET UNITYSDK_OFFSET(0x13C40)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENTMIN_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENT_OFFSET UNITYSDK_OFFSET(0x13C40)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18A8F810)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLORMAX_OFFSET UNITYSDK_OFFSET(0x21215F0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLORMIN_OFFSET UNITYSDK_OFFSET(0x210B1A0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x21215F0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENTMAX_OFFSET UNITYSDK_OFFSET(0xAF80)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENTMIN_OFFSET UNITYSDK_OFFSET(0x8D10)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENT_OFFSET UNITYSDK_OFFSET(0xAF80)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x29130)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2121550)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2121580)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x21215C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x2121510)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MinMaxGradient_TypeDefinitionIndex = 5432;

	struct alignas(8) ParticleSystem_MinMaxGradient
	{
		::UnityEngine::ParticleSystemGradientMode m_Mode; // 0x10
		::UnityEngine::Gradient* m_GradientMin; // 0x18
		::UnityEngine::Gradient* m_GradientMax; // 0x20
		::UnityEngine::Color m_ColorMin; // 0x28
		::UnityEngine::Color m_ColorMax; // 0x38

		::System::Void _ctor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_OFFSET))(this, color);
		}

		::System::Void _ctor_1(::UnityEngine::Gradient* gradient)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_1_OFFSET))(this, gradient);
		}

		::System::Void _ctor_2(::UnityEngine::Color min, ::UnityEngine::Color max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_2_OFFSET))(this, min, max);
		}

		::System::Void _ctor_3(::UnityEngine::Gradient* min, ::UnityEngine::Gradient* max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_3_OFFSET))(this, min, max);
		}

		::UnityEngine::ParticleSystemGradientMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemGradientMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemGradientMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemGradientMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_MODE_OFFSET))(this, value);
		}

		::UnityEngine::Gradient* get_gradientMax()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENTMAX_OFFSET))(this);
		}

		::System::Void set_gradientMax(::UnityEngine::Gradient* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENTMAX_OFFSET))(this, value);
		}

		::UnityEngine::Gradient* get_gradientMin()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENTMIN_OFFSET))(this);
		}

		::System::Void set_gradientMin(::UnityEngine::Gradient* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENTMIN_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorMax()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLORMAX_OFFSET))(this);
		}

		::System::Void set_colorMax(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLORMAX_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorMin()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLORMIN_OFFSET))(this);
		}

		::System::Void set_colorMin(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLORMIN_OFFSET))(this, value);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLOR_OFFSET))(this, value);
		}

		::UnityEngine::Gradient* get_gradient()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENT_OFFSET))(this);
		}

		::System::Void set_gradient(::UnityEngine::Gradient* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENT_OFFSET))(this, value);
		}

		::UnityEngine::Color Evaluate(::System::Single time)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_EVALUATE_OFFSET))(this, time);
		}

		::UnityEngine::Color Evaluate_1(::System::Single time, ::System::Single lerpFactor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_EVALUATE_1_OFFSET))(this, time, lerpFactor);
		}

		static ::UnityEngine::ParticleSystem_MinMaxGradient op_Implicit(::UnityEngine::Color color)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_OP_IMPLICIT_OFFSET))(color);
		}
	};
}
