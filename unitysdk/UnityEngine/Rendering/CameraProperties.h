#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Rendering/CameraProperties__layerCullDistances_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/CameraProperties__m_CameraCullPlanes_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/CameraProperties__m_ShadowCullPlanes_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/CoreCameraValues.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A721D0)
#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A72190)
#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETCAMERACULLINGPLANE_OFFSET UNITYSDK_OFFSET(0x3A72170)
#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A72250)
#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETSHADOWCULLINGPLANE_OFFSET UNITYSDK_OFFSET(0x3A72150)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraProperties_TypeDefinitionIndex = 4727;

	struct alignas(4) CameraProperties
	{
		::UnityEngine::Rect screenRect; // 0x10
		::UnityEngine::Vector3 viewDir; // 0x20
		::System::Single projectionNear; // 0x2C
		::System::Single projectionFar; // 0x30
		::System::Single cameraNear; // 0x34
		::System::Single cameraFar; // 0x38
		::System::Single cameraAspect; // 0x3C
		::UnityEngine::Matrix4x4 cameraToWorld; // 0x40
		::UnityEngine::Matrix4x4 actualWorldToClip; // 0x80
		::UnityEngine::Matrix4x4 cameraClipToWorld; // 0xC0
		::UnityEngine::Matrix4x4 cameraWorldToClip; // 0x100
		::UnityEngine::Matrix4x4 implicitProjection; // 0x140
		::UnityEngine::Matrix4x4 stereoWorldToClipLeft; // 0x180
		::UnityEngine::Matrix4x4 stereoWorldToClipRight; // 0x1C0
		::UnityEngine::Matrix4x4 worldToCamera; // 0x200
		::UnityEngine::Vector3 up; // 0x240
		::UnityEngine::Vector3 right; // 0x24C
		::UnityEngine::Vector3 transformDirection; // 0x258
		::UnityEngine::Vector3 cameraEuler; // 0x264
		::UnityEngine::Vector3 velocity; // 0x270
		::System::Single farPlaneWorldSpaceLength; // 0x27C
		::System::UInt32 rendererCount; // 0x280
		::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer m_ShadowCullPlanes; // 0x284
		::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer m_CameraCullPlanes; // 0x2E4
		::System::Single baseFarDistance; // 0x344
		::UnityEngine::Vector3 shadowCullCenter; // 0x348
		::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer layerCullDistances; // 0x354
		::System::Int32 layerCullSpherical; // 0x3D4
		::UnityEngine::Rendering::CoreCameraValues coreCameraValues; // 0x3D8
		::System::UInt32 cameraType; // 0x3E4
		::System::Int32 projectionIsOblique; // 0x3E8
		::System::Int32 isImplicitProjectionMatrix; // 0x3EC
		::System::Single stableFieldOfView; // 0x3F0

		/*
		::UnityEngine::Plane GetShadowCullingPlane(::System::Int32 a1)
		{
			return ((::UnityEngine::Plane(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETSHADOWCULLINGPLANE_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Plane GetCameraCullingPlane(::System::Int32 a1)
		{
			return ((::UnityEngine::Plane(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETCAMERACULLINGPLANE_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Rendering::CameraProperties a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CameraProperties))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETHASHCODE_OFFSET))(this);
		}
	};
}
