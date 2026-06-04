#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Light_EParticleLightEvent.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B29DD40)
#define UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B29DDC0)
#define UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B29DCA0)
#define UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29DCC0)

namespace UnityEngine
{
	inline static constexpr unsigned int Light_OnParticleLightEvent_TypeDefinitionIndex = 4131;

	class Light_OnParticleLightEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Light* a1, ::UnityEngine::Light_EParticleLightEvent a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::UnityEngine::Light_EParticleLightEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Light* a1, ::UnityEngine::Light_EParticleLightEvent a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Light*, ::UnityEngine::Light_EParticleLightEvent, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ONPARTICLELIGHTEVENT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
