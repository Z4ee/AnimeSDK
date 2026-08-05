#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CAMERADATAFORSHADOWMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AB5F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GlobalBufferManager_CameraDataForShadowMap_TypeDefinitionIndex = 6024;

	class GlobalBufferManager_CameraDataForShadowMap : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 mainLightDirection; // 0x10
		::UnityEngine::Vector3 cameraForward; // 0x1C
		::UnityEngine::Vector3 cameraPosition; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CAMERADATAFORSHADOWMAP__CTOR_OFFSET))(this);
		}
	};
}
