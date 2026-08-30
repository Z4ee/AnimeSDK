#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIPMASK_OFFSET UNITYSDK_OFFSET(0x1EAC5640)
#define UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIPWITHMASK_OFFSET UNITYSDK_OFFSET(0x1EAC5630)
#define UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIP_OFFSET UNITYSDK_OFFSET(0x1EAC5620)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAClipNodeParamaters_TypeDefinitionIndex = 4790;

	struct alignas(1) BAClipNodeParamaters
	{
		/*
		static ::System::Void SetClip(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIP_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Void SetClipWithMask(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIPWITHMASK_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Void SetClipMask(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACLIPNODEPARAMATERS_SETCLIPMASK_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/
	};
}
