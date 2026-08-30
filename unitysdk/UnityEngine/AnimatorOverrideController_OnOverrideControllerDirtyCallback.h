#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EE9C0D0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EE9C100)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EE9C050)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE9C060)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorOverrideController_OnOverrideControllerDirtyCallback_TypeDefinitionIndex = 5708;

	class AnimatorOverrideController_OnOverrideControllerDirtyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
