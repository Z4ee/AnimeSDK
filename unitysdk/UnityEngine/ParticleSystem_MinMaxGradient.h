#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ParticleSystemGradientMode.h"

namespace UnityEngine { class Gradient; }

#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLORMIN_OFFSET UNITYSDK_OFFSET(0x3EC330)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x926F10)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DDF8D80)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLORMIN_OFFSET UNITYSDK_OFFSET(0xA44A80)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x92A800)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA44A40)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MinMaxGradient_TypeDefinitionIndex = 18768;

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

		::UnityEngine::ParticleSystemGradientMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemGradientMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_GET_MODE_OFFSET))(this);
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

		static ::UnityEngine::ParticleSystem_MinMaxGradient op_Implicit(::UnityEngine::Color color)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_OP_IMPLICIT_OFFSET))(color);
		}
	};
}
