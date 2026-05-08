#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Universal { class GPUGrassCommonConfig; }
namespace UnityEngine::Rendering::Universal { class GPUGrassRenderItem; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19688540)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassSettings_TypeDefinitionIndex = 30248;

	class GPUGrassSettings : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::GPUGrassCommonConfig* commonConfig; // 0x10
		::UnityEngine::Rendering::Universal::GPUGrassRenderItem* renderItemConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
