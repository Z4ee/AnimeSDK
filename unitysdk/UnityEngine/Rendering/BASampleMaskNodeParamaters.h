#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BASAMPLEMASKNODEPARAMATERS_PLAY_OFFSET UNITYSDK_OFFSET(0x1ED52BD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BASampleMaskNodeParamaters_TypeDefinitionIndex = 4792;

	struct alignas(1) BASampleMaskNodeParamaters
	{
		/*
		static ::System::Int32 Play(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BASAMPLEMASKNODEPARAMATERS_PLAY_OFFSET))(a1, a2, a3, a4);
		}
		*/
	};
}
