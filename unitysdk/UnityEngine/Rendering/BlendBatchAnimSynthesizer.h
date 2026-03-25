#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define UNITYENGINE_RENDERING_BLENDBATCHANIMSYNTHESIZER_BLENDSYNTHESIZERSETUPEX_OFFSET UNITYSDK_OFFSET(0x18A3C5D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BlendBatchAnimSynthesizer_TypeDefinitionIndex = 4597;

	class BlendBatchAnimSynthesizer : public ::System::Object
	{
	public:
		static ::System::Void BlendSynthesizerSetupEx(::UnityEngine::Rendering::BatchAnimation* ba, ::System::Int32 groupIndex, ::UnityEngine::Rendering::BatchAnimationClip* clip, ::System::Single speed, ::System::Int32 fadeInFrame)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::UnityEngine::Rendering::BatchAnimationClip*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDBATCHANIMSYNTHESIZER_BLENDSYNTHESIZERSETUPEX_OFFSET))(ba, groupIndex, clip, speed, fadeInFrame);
		}
	};
}
