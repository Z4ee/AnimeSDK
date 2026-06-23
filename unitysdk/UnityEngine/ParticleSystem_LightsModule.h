#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Light; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA810)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA44240)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA850)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_OFFSET UNITYSDK_OFFSET(0xA44260)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA830)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA44250)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA8B0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44290)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA870)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_OFFSET UNITYSDK_OFFSET(0xA44270)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA890)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44280)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_LightsModule_TypeDefinitionIndex = 18796;

	struct alignas(8) ParticleSystem_LightsModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::UnityEngine::Light* get_light()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_OFFSET))(this);
		}

		::System::Void set_light(::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_OFFSET))(this, value);
		}

		::System::Void set_rangeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_OFFSET))(this, value);
		}

		::System::Void set_intensityMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::Light* get_light_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::UnityEngine::Light*(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_light_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_rangeMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_intensityMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
