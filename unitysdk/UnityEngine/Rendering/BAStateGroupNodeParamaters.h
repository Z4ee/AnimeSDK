#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BASTATEGROUPNODEPARAMATERS_GETACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x1A474D60)
#define UNITYENGINE_RENDERING_BASTATEGROUPNODEPARAMATERS_PLAY_OFFSET UNITYSDK_OFFSET(0x1A474D50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAStateGroupNodeParamaters_TypeDefinitionIndex = 4606;

	struct alignas(1) BAStateGroupNodeParamaters
	{
		/*
		static ::System::Void Play(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Int32 layer, ::System::Int32 state)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BASTATEGROUPNODEPARAMATERS_PLAY_OFFSET))(instance, nodeHash, layer, state);
		}
		*/

		/*
		static ::System::Int32 GetActiveState(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Int32 layer)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BASTATEGROUPNODEPARAMATERS_GETACTIVESTATE_OFFSET))(instance, nodeHash, layer);
		}
		*/
	};
}
