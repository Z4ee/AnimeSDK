#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A91F20)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x211F230)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A91E90)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x211F210)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A91F80)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x211F2D0)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A91F40)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x211F290)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A91EB0)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x211F220)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A91FB0)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x211F300)
#define UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ColorBySpeedModule_TypeDefinitionIndex = 5453;

	struct alignas(8) ParticleSystem_ColorBySpeedModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient get_color()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_COLOR_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_color(::UnityEngine::ParticleSystem_MinMaxGradient value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_COLOR_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector2 get_range()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_RANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_range(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_RANGE_OFFSET))(this, value);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_color_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_COLOR_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_color_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_COLOR_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_range_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& _unity_self, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_range_Injected(::UnityEngine::ParticleSystem_ColorBySpeedModule& _unity_self, ::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLORBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}
