#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PERCAMERALENSFLAREDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0x1FC1D1F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PERCAMERALENSFLAREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1D080)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerCameraLensFlareData_TypeDefinitionIndex = 18892;

	class PerCameraLensFlareData : public ::System::Object
	{
	public:
		::UnityEngine::ComputeBuffer* occlusionTestOut; // 0x10
		::UnityEngine::ComputeBuffer* occlusionTestIn; // 0x18
		::System::Single lastInScreenTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PERCAMERALENSFLAREDATA__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PERCAMERALENSFLAREDATA_RELEASE_OFFSET))(this);
		}
	};
}
