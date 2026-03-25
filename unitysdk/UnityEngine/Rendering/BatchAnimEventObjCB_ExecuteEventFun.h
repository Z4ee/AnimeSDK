#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Rendering/BatchAnimEventObjCB.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18A3B420)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18A3B4A0)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A3AEA0)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3AE80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimEventObjCB_ExecuteEventFun_TypeDefinitionIndex = 4594;

	class BatchAnimEventObjCB_ExecuteEventFun : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Rendering::BatchAnimation* ba, ::UnityEngine::Rendering::BatchAnimEventObjCB& eventObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_INVOKE_OFFSET))(this, ba, eventObj);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::BatchAnimation* ba, ::UnityEngine::Rendering::BatchAnimEventObjCB& eventObj, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_BEGININVOKE_OFFSET))(this, ba, eventObj, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::Rendering::BatchAnimEventObjCB& eventObj, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimEventObjCB&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_ENDINVOKE_OFFSET))(this, eventObj, result);
		}
	};
}
