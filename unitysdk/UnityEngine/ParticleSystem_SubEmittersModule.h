#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFB5E0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_OFFSET UNITYSDK_OFFSET(0xA44DD0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFB5C0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_OFFSET UNITYSDK_OFFSET(0xA44DC0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_SubEmittersModule_TypeDefinitionIndex = 18763;

	struct alignas(8) ParticleSystem_SubEmittersModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Int32 get_subEmittersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* GetSubEmitterSystem(::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_OFFSET))(this, index);
		}

		static ::System::Int32 get_subEmittersCount_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_SubEmittersModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::UnityEngine::ParticleSystem* GetSubEmitterSystem_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_INJECTED_OFFSET))(_unity_self, index);
		}
	};
}
