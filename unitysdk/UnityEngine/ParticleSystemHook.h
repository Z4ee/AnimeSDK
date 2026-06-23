#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystemStopBehavior.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSIMULATE_OFFSET UNITYSDK_OFFSET(0x1DDFB850)
#define UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSTOP_OFFSET UNITYSDK_OFFSET(0x1DDFB8E0)
#define UNITYENGINE_PARTICLESYSTEMHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFB960)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemHook_TypeDefinitionIndex = 18818;

	class ParticleSystemHook : public ::System::Object
	{
	public:
		static ::System::Action_4<::UnityEngine::ParticleSystem*, ::System::Single, ::System::Boolean, ::Il2CppArray<::System::Boolean>*>** StaticGet_onHookSimulate()
		{
			return (::System::Action_4<::UnityEngine::ParticleSystem*, ::System::Single, ::System::Boolean, ::Il2CppArray<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemHook_TypeDefinitionIndex)->GetStaticField(0x8660);
		}
		static ::System::Action_3<::UnityEngine::ParticleSystem*, ::System::Boolean, ::UnityEngine::ParticleSystemStopBehavior>** StaticGet_onHookStop()
		{
			return (::System::Action_3<::UnityEngine::ParticleSystem*, ::System::Boolean, ::UnityEngine::ParticleSystemStopBehavior>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemHook_TypeDefinitionIndex)->GetStaticField(0x8668);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookParticleSystemSimulate(::UnityEngine::ParticleSystem* system, ::System::Single t, ::System::Boolean withChildren, ::Il2CppArray<::System::Boolean>* restartAndfixedTimeStep)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::Single, ::System::Boolean, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSIMULATE_OFFSET))(system, t, withChildren, restartAndfixedTimeStep);
		}

		static ::System::Void invoke_onHookParticleSystemStop(::UnityEngine::ParticleSystem* system, ::System::Boolean withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::Boolean, ::UnityEngine::ParticleSystemStopBehavior))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSTOP_OFFSET))(system, withChildren, stopBehavior);
		}
	};
}
