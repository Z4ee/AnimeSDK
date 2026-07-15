#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D131450)
#define UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D131480)
#define UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D12CC20)
#define UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1313E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_OnParticleEmissionBeginEvent_TypeDefinitionIndex = 5739;

	class ParticleSystem_OnParticleEmissionBeginEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::ParticleSystem* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
