#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::XR::WSA { class WorldAnchor; }

#define UNITYENGINE_XR_WSA_WORLDANCHOR_ONTRACKINGCHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FC5EC70)
#define UNITYENGINE_XR_WSA_WORLDANCHOR_ONTRACKINGCHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FC5ECF0)
#define UNITYENGINE_XR_WSA_WORLDANCHOR_ONTRACKINGCHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FC5E640)
#define UNITYENGINE_XR_WSA_WORLDANCHOR_ONTRACKINGCHANGEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5EC50)

namespace UnityEngine::XR::WSA
{
	inline static constexpr unsigned int WorldAnchor_OnTrackingChangedDelegate_TypeDefinitionIndex = 8900;

	class WorldAnchor_OnTrackingChangedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WSA_WORLDANCHOR_ONTRACKINGCHANGEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::XR::WSA::WorldAnchor* worldAnchor, ::System::Boolean located)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::XR::WSA::WorldAnchor*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WSA_WORLDANCHOR_ONTRACKINGCHANGEDDELEGATE_INVOKE_OFFSET))(this, worldAnchor, located);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::XR::WSA::WorldAnchor* worldAnchor, ::System::Boolean located, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::XR::WSA::WorldAnchor*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WSA_WORLDANCHOR_ONTRACKINGCHANGEDDELEGATE_BEGININVOKE_OFFSET))(this, worldAnchor, located, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WSA_WORLDANCHOR_ONTRACKINGCHANGEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
