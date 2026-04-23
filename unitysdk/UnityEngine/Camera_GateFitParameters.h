#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Camera_GateFitMode.h"

#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0xCC70)
#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_MODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_SET_ASPECT_OFFSET UNITYSDK_OFFSET(0xCC80)
#define UNITYENGINE_CAMERA_GATEFITPARAMETERS_SET_MODE_OFFSET UNITYSDK_OFFSET(0x299E0)
#define UNITYENGINE_CAMERA_GATEFITPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0xD82E0)

namespace UnityEngine
{
	inline static constexpr unsigned int Camera_GateFitParameters_TypeDefinitionIndex = 3855;

	struct alignas(4) Camera_GateFitParameters
	{
		::UnityEngine::Camera_GateFitMode _mode_k__BackingField; // 0x10
		::System::Single _aspect_k__BackingField; // 0x14

		::System::Void _ctor(::UnityEngine::Camera_GateFitMode mode, ::System::Single aspect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera_GateFitMode, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS__CTOR_OFFSET))(this, mode, aspect);
		}

		::UnityEngine::Camera_GateFitMode get_mode()
		{
			return ((::UnityEngine::Camera_GateFitMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::Camera_GateFitMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera_GateFitMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_SET_MODE_OFFSET))(this, value);
		}

		::System::Single get_aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_GET_ASPECT_OFFSET))(this);
		}

		::System::Void set_aspect(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_GATEFITPARAMETERS_SET_ASPECT_OFFSET))(this, value);
		}
	};
}
