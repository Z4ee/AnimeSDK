#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18A955E0)
#define UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18A95610)
#define UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A903B0)
#define UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A955C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_OnParticleEmissionBeginEvent_TypeDefinitionIndex = 5446;

	class ParticleSystem_OnParticleEmissionBeginEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::ParticleSystem* ps)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_INVOKE_OFFSET))(this, ps);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::ParticleSystem* ps, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_BEGININVOKE_OFFSET))(this, ps, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ONPARTICLEEMISSIONBEGINEVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
