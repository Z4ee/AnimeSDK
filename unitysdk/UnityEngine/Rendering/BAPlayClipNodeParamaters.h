#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BAGraphAsset; }

#define UNITYENGINE_RENDERING_BAPLAYCLIPNODEPARAMATERS_SETCLIP_OFFSET UNITYSDK_OFFSET(0x1CDFF0F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAPlayClipNodeParamaters_TypeDefinitionIndex = 4783;

	struct alignas(1) BAPlayClipNodeParamaters
	{
		/*
		static ::System::Void SetClip(::UnityEngine::Rendering::BAGraphAsset* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::UnityEngine::Rendering::BANodeHash& a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAPLAYCLIPNODEPARAMATERS_SETCLIP_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/
	};
}
