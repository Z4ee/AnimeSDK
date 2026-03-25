#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Light_EParticleLightEvent.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18A133D0)
#define UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18A13450)
#define UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A12E40)
#define UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A133B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Light_OnParticleLightEvent_TypeDefinitionIndex = 3955;

	class Light_OnParticleLightEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Light* light, ::UnityEngine::Light_EParticleLightEvent e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::UnityEngine::Light_EParticleLightEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_INVOKE_OFFSET))(this, light, e);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Light* light, ::UnityEngine::Light_EParticleLightEvent e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Light*, ::UnityEngine::Light_EParticleLightEvent, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_BEGININVOKE_OFFSET))(this, light, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
