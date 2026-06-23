#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDDATA_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D812120)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D811D30)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDDATA_RESIZE_OFFSET UNITYSDK_OFFSET(0x1D811E10)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8121F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightLoop_WorldLightGridData_TypeDefinitionIndex = 6005;

	class LightLoop_WorldLightGridData : public ::System::Object
	{
	public:
		::UnityEngine::ComputeBuffer* IndexAllocatorBuffer; // 0x10
		::UnityEngine::ComputeBuffer* WorldLightGridInfoBuffer; // 0x18
		::UnityEngine::ComputeBuffer* WorldLightGridBuffer; // 0x20
		::UnityEngine::ComputeBuffer* WorldLightIndexBuffer; // 0x28
		::UnityEngine::ComputeBuffer* WorldLightResidualBuffer; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDDATA_INITIALIZE_OFFSET))(this);
		}

		::System::Void Resize(::System::UInt32 cellNum, ::System::Boolean residualEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDDATA_RESIZE_OFFSET))(this, cellNum, residualEnabled);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDDATA_CLEANUP_OFFSET))(this);
		}
	};
}
