#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A4CF800)
#define UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A4CF830)
#define UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A4CABA0)
#define UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CF7E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_OnNewParticleEmissionEvent_TypeDefinitionIndex = 5458;

	class ParticleSystem_OnNewParticleEmissionEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::ParticleSystem* ps)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_INVOKE_OFFSET))(this, ps);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::ParticleSystem* ps, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_BEGININVOKE_OFFSET))(this, ps, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONNEWPARTICLEEMISSIONEVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
