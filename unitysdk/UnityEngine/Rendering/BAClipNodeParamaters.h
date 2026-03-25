#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIPMASK_OFFSET UNITYSDK_OFFSET(0x18A3AC70)
#define UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIPWITHMASK_OFFSET UNITYSDK_OFFSET(0x18A3AC60)
#define UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIP_OFFSET UNITYSDK_OFFSET(0x18A3AC50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAClipNodeParamaters_TypeDefinitionIndex = 4599;

	struct alignas(1) BAClipNodeParamaters
	{
		/*
		static ::System::Void SetClip(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Int32 clipIndex, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIP_OFFSET))(instance, nodeHash, clipIndex, layer);
		}
		*/

		/*
		static ::System::Void SetClipWithMask(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Int32 clipIndex, ::System::Int32 clipMaskIndex, ::System::Boolean inversMask, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIPWITHMASK_OFFSET))(instance, nodeHash, clipIndex, clipMaskIndex, inversMask, layer);
		}
		*/

		/*
		static ::System::Void SetClipMask(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Int32 clipMaskIndex, ::System::Boolean inversMask, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIPMASK_OFFSET))(instance, nodeHash, clipMaskIndex, inversMask, layer);
		}
		*/
	};
}
