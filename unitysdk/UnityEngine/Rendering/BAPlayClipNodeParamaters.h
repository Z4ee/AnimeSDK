#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BAGraphAsset; }

#define UNITYENGINE_RENDERING_BAPLAYCLIPNODEPARAMATERS_SETCLIP_OFFSET UNITYSDK_OFFSET(0x1A474D30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAPlayClipNodeParamaters_TypeDefinitionIndex = 4604;

	struct alignas(1) BAPlayClipNodeParamaters
	{
		/*
		static ::System::Void SetClip(::UnityEngine::Rendering::BAGraphAsset* graphAsset, ::UnityEngine::Rendering::BANodeHash& blendNodeHash, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Int32 clipIndex, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAPLAYCLIPNODEPARAMATERS_SETCLIP_OFFSET))(graphAsset, blendNodeHash, nodeHash, clipIndex, layer);
		}
		*/
	};
}
