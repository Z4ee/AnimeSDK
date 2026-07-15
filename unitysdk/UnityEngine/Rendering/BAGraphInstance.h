#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationBoneMask; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_ADDGRAPHBONEMASK_OFFSET UNITYSDK_OFFSET(0x1CDFF060)
#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_ADDGRAPHCLIP_OFFSET UNITYSDK_OFFSET(0x1CDFF030)
#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_GETGRAPHCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1CDFF050)
#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_RESETGRAPH_OFFSET UNITYSDK_OFFSET(0x1CDFF070)
#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_SETCLIPFADEIN_OFFSET UNITYSDK_OFFSET(0x1CDFF040)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAGraphInstance_TypeDefinitionIndex = 4789;

	class BAGraphInstance : public ::System::Object
	{
	public:
		static ::System::Int32 AddGraphClip(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimationClip* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_ADDGRAPHCLIP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetClipFadeIn(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_SETCLIPFADEIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetGraphClipCount(::UnityEngine::Rendering::BatchAnimation* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_GETGRAPHCLIPCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 AddGraphBoneMask(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimationBoneMask* a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_ADDGRAPHBONEMASK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ResetGraph(::UnityEngine::Rendering::BatchAnimation* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_RESETGRAPH_OFFSET))(a1);
		}
	};
}
