#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_EVENTS_UNITYACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A442610)
#define UNITYENGINE_EVENTS_UNITYACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A442640)
#define UNITYENGINE_EVENTS_UNITYACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A440E70)
#define UNITYENGINE_EVENTS_UNITYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4425F0)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityAction_TypeDefinitionIndex = 4298;

	class UnityAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYACTION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYACTION_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
