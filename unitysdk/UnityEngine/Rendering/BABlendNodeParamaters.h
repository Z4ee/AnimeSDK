#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PAUSE_OFFSET UNITYSDK_OFFSET(0x1A474B60)
#define UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PLAYALL_OFFSET UNITYSDK_OFFSET(0x1A474B50)
#define UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PLAY_OFFSET UNITYSDK_OFFSET(0x1A474B40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BABlendNodeParamaters_TypeDefinitionIndex = 4602;

	struct alignas(1) BABlendNodeParamaters
	{
		/*
		static ::System::Int32 Play(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Single speed)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PLAY_OFFSET))(instance, nodeHash, speed);
		}
		*/

		/*
		static ::System::Void PlayAll(::UnityEngine::Rendering::BatchAnimation* batchAnimation, ::UnityEngine::Rendering::BANodeHash& blendNode, ::UnityEngine::Rendering::BANodeHash& clipNode0, ::UnityEngine::Rendering::BANodeHash& clipNode1, ::System::Int32 clipIndex, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BANodeHash&, ::UnityEngine::Rendering::BANodeHash&, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PLAYALL_OFFSET))(batchAnimation, blendNode, clipNode0, clipNode1, clipIndex, speed);
		}
		*/

		static ::System::Void Pause(::UnityEngine::Rendering::BatchAnimation* batchanimation, ::System::Int32 playState)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PAUSE_OFFSET))(batchanimation, playState);
		}
	};
}
