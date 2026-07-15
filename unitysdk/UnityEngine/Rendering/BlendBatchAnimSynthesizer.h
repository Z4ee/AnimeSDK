#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define UNITYENGINE_RENDERING_BLENDBATCHANIMSYNTHESIZER_BLENDSYNTHESIZERSETUPEX_OFFSET UNITYSDK_OFFSET(0x1CDFFA50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BlendBatchAnimSynthesizer_TypeDefinitionIndex = 4778;

	class BlendBatchAnimSynthesizer : public ::System::Object
	{
	public:
		static ::System::Void BlendSynthesizerSetupEx(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2, ::UnityEngine::Rendering::BatchAnimationClip* a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::UnityEngine::Rendering::BatchAnimationClip*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDBATCHANIMSYNTHESIZER_BLENDSYNTHESIZERSETUPEX_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
