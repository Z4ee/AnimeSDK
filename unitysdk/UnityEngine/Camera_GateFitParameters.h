#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Camera_GateFitMode.h"

#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x784700)
#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_MODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_SET_ASPECT_OFFSET UNITYSDK_OFFSET(0x3A545E0)
#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_SET_MODE_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define UNITYENGINE_CAMERA_GATEFITPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x3A30520)

namespace UnityEngine
{
	inline static constexpr unsigned int Camera_GateFitParameters_TypeDefinitionIndex = 4042;

	struct alignas(4) Camera_GateFitParameters
	{
		::UnityEngine::Camera_GateFitMode _mode_k__BackingField; // 0x10
		::System::Single _aspect_k__BackingField; // 0x14

		::System::Void _ctor(::UnityEngine::Camera_GateFitMode a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera_GateFitMode, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Camera_GateFitMode get_mode()
		{
			return ((::UnityEngine::Camera_GateFitMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::Camera_GateFitMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera_GateFitMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_SET_MODE_OFFSET))(this, a1);
		}

		::System::Single get_aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_ASPECT_OFFSET))(this);
		}

		::System::Void set_aspect(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_SET_ASPECT_OFFSET))(this, a1);
		}
	};
}
