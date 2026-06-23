#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassWindConfig.h"

namespace UnityEngine::Rendering::Universal { class GPUGrassCullingConfig; }
namespace UnityEngine::Rendering::Universal { class GPUGrassShapeConfig; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSRENDERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C439FB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassRenderItem_TypeDefinitionIndex = 26930;

	class GPUGrassRenderItem : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::GPUGrassShapeConfig* shapeConfig; // 0x10
		::UnityEngine::Rendering::Universal::GPUGrassCullingConfig* cullingConfig; // 0x18
		::UnityEngine::Rendering::Universal::GPUGrassWindConfig windConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSRENDERITEM__CTOR_OFFSET))(this);
		}
	};
}
