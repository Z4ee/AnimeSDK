#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3194C0)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x3890440)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B319430)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3890420)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B319520)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x38904E0)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3194E0)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x38904A0)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B319450)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3890430)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B319550)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x3890510)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ColorBySpeedModule_TypeDefinitionIndex = 5741;

	struct alignas(8) ParticleSystem_ColorBySpeedModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient get_color()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_COLOR_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_color(::UnityEngine::ParticleSystem_MinMaxGradient a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_COLOR_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector2 get_range()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_RANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_range(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_RANGE_OFFSET))(this, a1);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_color_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxGradient& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_COLOR_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_color_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxGradient& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_COLOR_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_range_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_range_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/
	};
}
