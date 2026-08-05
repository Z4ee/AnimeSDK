#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSCULLINGCONFIG_GET_CULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BC564D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSCULLINGCONFIG_SET_CULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BC564E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSCULLINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC564F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassCullingConfig_TypeDefinitionIndex = 27591;

	class GPUGrassCullingConfig : public ::System::Object
	{
	public:
		::System::Single distanceToLod1; // 0x10
		::System::Single distanceToLod2; // 0x14
		::System::Single distanceCullEndDist; // 0x18
		::System::Boolean DISATNACE_CULL_ENABLE; // 0x1C
		::System::Single frustumCullNearOffset; // 0x20
		::System::Single frustumCullEdgeOffset; // 0x24
		::System::Single _CullingDistance_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSCULLINGCONFIG__CTOR_OFFSET))(this);
		}

		::System::Single get_CullingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSCULLINGCONFIG_GET_CULLINGDISTANCE_OFFSET))(this);
		}

		::System::Void set_CullingDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSCULLINGCONFIG_SET_CULLINGDISTANCE_OFFSET))(this, value);
		}
	};
}
