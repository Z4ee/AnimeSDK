#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_CAMERAEXTENSIONS_SETCAMERATOPHYSICALCAMERAFORADAPTSCREENASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1DE8E670)

namespace UnityEngine
{
	inline static constexpr unsigned int CameraExtensions_TypeDefinitionIndex = 44318;

	class CameraExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetCameraToPhysicalCameraForAdaptScreenAspectRatio(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERAEXTENSIONS_SETCAMERATOPHYSICALCAMERAFORADAPTSCREENASPECTRATIO_OFFSET))(camera);
		}
	};
}
