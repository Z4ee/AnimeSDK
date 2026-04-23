#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BASAMPLEMASKNODEPARAMATERS_PLAY_OFFSET UNITYSDK_OFFSET(0x1A474D40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BASampleMaskNodeParamaters_TypeDefinitionIndex = 4603;

	struct alignas(1) BASampleMaskNodeParamaters
	{
		/*
		static ::System::Int32 Play(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Single speed, ::System::Int32 layer)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BASAMPLEMASKNODEPARAMATERS_PLAY_OFFSET))(instance, nodeHash, speed, layer);
		}
		*/
	};
}
