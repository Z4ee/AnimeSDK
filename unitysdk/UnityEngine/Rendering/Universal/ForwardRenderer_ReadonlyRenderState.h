#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MaterialDebugMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_READONLYRENDERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA396A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRenderer_ReadonlyRenderState_TypeDefinitionIndex = 27350;

	struct alignas(4) ForwardRenderer_ReadonlyRenderState
	{
		::System::Boolean applyPostProcessing; // 0x10
		::System::Boolean isDummyCamera; // 0x11
		::System::Boolean isPreviewCamera; // 0x12
		::System::Boolean isOverlayCamera; // 0x13
		::System::Boolean isPureUICamera; // 0x14
		::System::Boolean justUseForwardPipeline; // 0x15
		::System::Boolean isRenderToFinalTarget; // 0x16
		::System::Boolean isSceneViewCamera; // 0x17
		::System::Boolean isPlanarReflectionCamera; // 0x18
		::System::Boolean isReflectionCamera; // 0x19
		::System::Boolean isPreviewOrPureUIOrReflectionCamera; // 0x1A
		::System::Boolean isPreviewOrPureUIOrReflectionCameraOrOverlayCamera; // 0x1B
		::System::Single fsrJitterSpread; // 0x1C
		::UnityEngine::Vector4 dynamicScreenSize; // 0x20

		/*
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::MaterialDebugMode materialDebugMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::MaterialDebugMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_READONLYRENDERSTATE__CTOR_OFFSET))(this, cameraData, materialDebugMode);
		}
		*/
	};
}
