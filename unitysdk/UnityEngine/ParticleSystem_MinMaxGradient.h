#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ParticleSystemGradientMode.h"

namespace UnityEngine { class Gradient; }

#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x3892800)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x38927D0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLORMAX_OFFSET UNITYSDK_OFFSET(0x2C1CE00)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLORMIN_OFFSET UNITYSDK_OFFSET(0x2CDA500)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x2C1CE00)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENTMAX_OFFSET UNITYSDK_OFFSET(0x14410)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENTMIN_OFFSET UNITYSDK_OFFSET(0x60D0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENT_OFFSET UNITYSDK_OFFSET(0x14410)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B317810)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLORMAX_OFFSET UNITYSDK_OFFSET(0x38927C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLORMIN_OFFSET UNITYSDK_OFFSET(0x3879F80)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x38927C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENTMAX_OFFSET UNITYSDK_OFFSET(0xB7C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENTMIN_OFFSET UNITYSDK_OFFSET(0x95B0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENT_OFFSET UNITYSDK_OFFSET(0xB7C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3892730)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3892760)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x38927A0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x38926F0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MinMaxGradient_TypeDefinitionIndex = 5720;

	struct alignas(8) ParticleSystem_MinMaxGradient
	{
		::UnityEngine::ParticleSystemGradientMode m_Mode; // 0x10
		::UnityEngine::Gradient* m_GradientMin; // 0x18
		::UnityEngine::Gradient* m_GradientMax; // 0x20
		::UnityEngine::Color m_ColorMin; // 0x28
		::UnityEngine::Color m_ColorMax; // 0x38

		::System::Void _ctor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Gradient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_3_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ParticleSystemGradientMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemGradientMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemGradientMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemGradientMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_MODE_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* get_gradientMax()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENTMAX_OFFSET))(this);
		}

		::System::Void set_gradientMax(::UnityEngine::Gradient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENTMAX_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* get_gradientMin()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENTMIN_OFFSET))(this);
		}

		::System::Void set_gradientMin(::UnityEngine::Gradient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENTMIN_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorMax()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLORMAX_OFFSET))(this);
		}

		::System::Void set_colorMax(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLORMAX_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorMin()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLORMIN_OFFSET))(this);
		}

		::System::Void set_colorMin(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLORMIN_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* get_gradient()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_GRADIENT_OFFSET))(this);
		}

		::System::Void set_gradient(::UnityEngine::Gradient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENT_OFFSET))(this, a1);
		}

		::UnityEngine::Color Evaluate(::System::Single a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_EVALUATE_OFFSET))(this, a1);
		}

		::UnityEngine::Color Evaluate_1(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_EVALUATE_1_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::ParticleSystem_MinMaxGradient op_Implicit(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_OP_IMPLICIT_OFFSET))(a1);
		}
	};
}
