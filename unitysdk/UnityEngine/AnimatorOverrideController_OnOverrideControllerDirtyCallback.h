#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x189DDD10)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x189DDD40)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x189DDA50)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x189DDCF0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorOverrideController_OnOverrideControllerDirtyCallback_TypeDefinitionIndex = 5039;

	class AnimatorOverrideController_OnOverrideControllerDirtyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONOVERRIDECONTROLLERDIRTYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
