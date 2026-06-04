#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BatchRendererCullingOutput.h"
#include "unitysdk/UnityEngine/Rendering/LODParameters.h"

namespace UnityEngine::Rendering { class BatchRendererGroup_OnPerformCulling; }

#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_INVOKEONPERFORMCULLING_OFFSET UNITYSDK_OFFSET(0x1B2C4460)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchRendererGroup_TypeDefinitionIndex = 4718;

	class BatchRendererGroup : public ::System::Object
	{
	public:
		::System::IntPtr m_GroupHandle; // 0x10
		::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* m_PerformCulling; // 0x18

		static ::System::Void InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* a1, ::UnityEngine::Rendering::BatchRendererCullingOutput& a2, ::UnityEngine::Rendering::LODParameters& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchRendererCullingOutput&, ::UnityEngine::Rendering::LODParameters&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_INVOKEONPERFORMCULLING_OFFSET))(a1, a2, a3);
		}
	};
}
