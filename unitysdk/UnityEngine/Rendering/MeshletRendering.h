#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_RENDERING_MESHLETRENDERING_DISABLEPREZ_OFFSET UNITYSDK_OFFSET(0x1B4DC8F0)
#define UNITYENGINE_RENDERING_MESHLETRENDERING_ENABLEPREZ_OFFSET UNITYSDK_OFFSET(0x1B4DC8E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MeshletRendering_TypeDefinitionIndex = 6141;

	struct alignas(1) MeshletRendering
	{
		static ::System::Void EnablePrez()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHLETRENDERING_ENABLEPREZ_OFFSET))();
		}

		static ::System::Void DisablePrez()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHLETRENDERING_DISABLEPREZ_OFFSET))();
		}
	};
}
