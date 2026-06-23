#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_WORLDLIGHTGRIDDATA_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1CF35570)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_WORLDLIGHTGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF35490)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXAreaLight_WorldLightGridData_TypeDefinitionIndex = 5802;

	class RTXAreaLight_WorldLightGridData : public ::System::Object
	{
	public:
		::UnityEngine::ComputeBuffer* IndexAllocatorBuffer; // 0x10
		::UnityEngine::ComputeBuffer* WorldLightGridInfoBuffer; // 0x18
		::UnityEngine::ComputeBuffer* WorldLightGridBuffer; // 0x20
		::UnityEngine::ComputeBuffer* WorldLightIndexBuffer; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_WORLDLIGHTGRIDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_WORLDLIGHTGRIDDATA_CLEANUP_OFFSET))(this);
		}
	};
}
