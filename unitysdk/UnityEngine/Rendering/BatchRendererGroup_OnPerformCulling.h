#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class BatchRendererGroup; }

#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B2C4700)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2C4780)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B2C45A0)
#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C4610)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchRendererGroup_OnPerformCulling_TypeDefinitionIndex = 4719;

	class BatchRendererGroup_OnPerformCulling : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING__CTOR_OFFSET))(this, a1, a2);
		}

		::Unity::Jobs::JobHandle Invoke(::UnityEngine::Rendering::BatchRendererGroup* a1, ::UnityEngine::Rendering::BatchCullingContext a2)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::BatchRendererGroup* a1, ::UnityEngine::Rendering::BatchCullingContext a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Unity::Jobs::JobHandle EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_ONPERFORMCULLING_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
