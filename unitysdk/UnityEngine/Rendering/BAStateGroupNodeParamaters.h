#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BASTATEGROUPNODEPARAMATERS_GETACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x1EAC5810)
#define UNITYENGINE_RENDERING_BASTATEGROUPNODEPARAMATERS_PLAY_OFFSET UNITYSDK_OFFSET(0x1EAC5800)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAStateGroupNodeParamaters_TypeDefinitionIndex = 4795;

	struct alignas(1) BAStateGroupNodeParamaters
	{
		/*
		static ::System::Void Play(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BASTATEGROUPNODEPARAMATERS_PLAY_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Int32 GetActiveState(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BASTATEGROUPNODEPARAMATERS_GETACTIVESTATE_OFFSET))(a1, a2, a3);
		}
		*/
	};
}
