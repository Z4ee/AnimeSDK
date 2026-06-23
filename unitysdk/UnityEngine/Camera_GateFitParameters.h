#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Camera_GateFitMode.h"

#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x40C5C0)
#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_MODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Camera_GateFitParameters_TypeDefinitionIndex = 5138;

	struct alignas(4) Camera_GateFitParameters
	{
		::UnityEngine::Camera_GateFitMode _mode_k__BackingField; // 0x10
		::System::Single _aspect_k__BackingField; // 0x14

		::UnityEngine::Camera_GateFitMode get_mode()
		{
			return ((::UnityEngine::Camera_GateFitMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_MODE_OFFSET))(this);
		}

		::System::Single get_aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_ASPECT_OFFSET))(this);
		}
	};
}
