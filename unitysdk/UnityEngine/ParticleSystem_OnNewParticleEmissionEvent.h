#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B31CB40)
#define UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B31CB70)
#define UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B318400)
#define UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31CAD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_OnNewParticleEmissionEvent_TypeDefinitionIndex = 5735;

	class ParticleSystem_OnNewParticleEmissionEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::ParticleSystem* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
