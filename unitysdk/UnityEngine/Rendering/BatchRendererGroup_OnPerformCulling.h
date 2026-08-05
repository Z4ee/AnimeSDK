#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingContext.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingOutput.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class BatchRendererGroup; }

#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EA75810)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EA758D0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EA74B60)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA74B40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchRendererGroup_OnPerformCulling_TypeDefinitionIndex = 6228;

	class BatchRendererGroup_OnPerformCulling : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING__CTOR_OFFSET))(this, object, method);
		}

		::Unity::Jobs::JobHandle Invoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, ::UnityEngine::Rendering::BatchCullingContext cullingContext, ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_INVOKE_OFFSET))(this, rendererGroup, cullingContext, cullingOutput, userContext);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, ::UnityEngine::Rendering::BatchCullingContext cullingContext, ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_BEGININVOKE_OFFSET))(this, rendererGroup, cullingContext, cullingOutput, userContext, callback, object);
		}

		::Unity::Jobs::JobHandle EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
