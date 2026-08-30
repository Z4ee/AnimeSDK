#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Rendering/BatchAnimEventObjCB.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ED52E20)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ED52EA0)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ED52E10)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED52D90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimEventObjCB_ExecuteEventFun_TypeDefinitionIndex = 4785;

	class BatchAnimEventObjCB_ExecuteEventFun : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimEventObjCB& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimEventObjCB& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::UnityEngine::Rendering::BatchAnimEventObjCB& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimEventObjCB&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_EXECUTEEVENTFUN_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
