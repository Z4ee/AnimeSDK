#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_RENDERING_BATCHANIMATIONCLIP_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x18A3B660)
#define UNITYENGINE_RENDERING_BATCHANIMATIONCLIP_SETANIMCACHE_OFFSET UNITYSDK_OFFSET(0x18A3B670)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimationClip_TypeDefinitionIndex = 4595;

	class BatchAnimationClip : public ::UnityEngine::Object
	{
	public:
		::System::Int32 get_frameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONCLIP_GET_FRAMECOUNT_OFFSET))(this);
		}

		static ::System::Void SetAnimCache(::UnityEngine::Rendering::BatchAnimationClip* clip, ::System::Boolean cache)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONCLIP_SETANIMCACHE_OFFSET))(clip, cache);
		}
	};
}
