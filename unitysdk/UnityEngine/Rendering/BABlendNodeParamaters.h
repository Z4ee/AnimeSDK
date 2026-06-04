#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PAUSE_OFFSET UNITYSDK_OFFSET(0x1B2C3CC0)
#define UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PLAYALL_OFFSET UNITYSDK_OFFSET(0x1B2C3CB0)
#define UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PLAY_OFFSET UNITYSDK_OFFSET(0x1B2C3CA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BABlendNodeParamaters_TypeDefinitionIndex = 4776;

	struct alignas(1) BABlendNodeParamaters
	{
		/*
		static ::System::Int32 Play(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PLAY_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Void PlayAll(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::UnityEngine::Rendering::BANodeHash& a3, ::UnityEngine::Rendering::BANodeHash& a4, ::System::Int32 a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BANodeHash&, ::UnityEngine::Rendering::BANodeHash&, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PLAYALL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		static ::System::Void Pause(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BABLENDNODEPARAMATERS_PAUSE_OFFSET))(a1, a2);
		}
	};
}
