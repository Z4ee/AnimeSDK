#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationBoneMask; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_ADDGRAPHBONEMASK_OFFSET UNITYSDK_OFFSET(0x1A474CA0)
#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_ADDGRAPHCLIP_OFFSET UNITYSDK_OFFSET(0x1A474C70)
#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_GETGRAPHCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1A474C90)
#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_RESETGRAPH_OFFSET UNITYSDK_OFFSET(0x1A474CB0)
#define UNITYENGINE_RENDERING_BAGRAPHINSTANCE_SETCLIPFADEIN_OFFSET UNITYSDK_OFFSET(0x1A474C80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAGraphInstance_TypeDefinitionIndex = 4610;

	class BAGraphInstance : public ::System::Object
	{
	public:
		static ::System::Int32 AddGraphClip(::UnityEngine::Rendering::BatchAnimation* ba, ::UnityEngine::Rendering::BatchAnimationClip* clip, ::System::Int32 fadeFrame)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_ADDGRAPHCLIP_OFFSET))(ba, clip, fadeFrame);
		}

		static ::System::Void SetClipFadeIn(::UnityEngine::Rendering::BatchAnimation* ba, ::System::Int32 clipIndex, ::System::Int32 fadeFrame)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_SETCLIPFADEIN_OFFSET))(ba, clipIndex, fadeFrame);
		}

		static ::System::Int32 GetGraphClipCount(::UnityEngine::Rendering::BatchAnimation* ba)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_GETGRAPHCLIPCOUNT_OFFSET))(ba);
		}

		static ::System::Int32 AddGraphBoneMask(::UnityEngine::Rendering::BatchAnimation* ba, ::UnityEngine::Rendering::BatchAnimationBoneMask* mask, ::System::Single weight)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_ADDGRAPHBONEMASK_OFFSET))(ba, mask, weight);
		}

		static ::System::Void ResetGraph(::UnityEngine::Rendering::BatchAnimation* ba)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHINSTANCE_RESETGRAPH_OFFSET))(ba);
		}
	};
}
