#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Light; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F122F10)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA8FD70)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F122F50)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_OFFSET UNITYSDK_OFFSET(0xA8FD90)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F122F30)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA8FD80)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F122FB0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA8FDC0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F122F70)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_OFFSET UNITYSDK_OFFSET(0xA8FDA0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F122F90)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA8FDB0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_LightsModule_TypeDefinitionIndex = 7737;

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
