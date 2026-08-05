#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA3F7B0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA_GET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x4269D0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA_GET_WORLDHITPOSITION_OFFSET UNITYSDK_OFFSET(0x41F0A0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA59710)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int TrackedDeviceRaycaster_RaycastHitData_TypeDefinitionIndex = 32394;

	struct alignas(8) TrackedDeviceRaycaster_RaycastHitData
	{
		::UnityEngine::UI::Graphic* _graphic_k__BackingField; // 0x10
		::UnityEngine::Vector3 _worldHitPosition_k__BackingField; // 0x18
		::UnityEngine::Vector2 _screenPosition_k__BackingField; // 0x24
		::System::Single _distance_k__BackingField; // 0x2C

		::System::Void _ctor(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Vector3 worldHitPosition, ::UnityEngine::Vector2 screenPosition, ::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA__CTOR_OFFSET))(this, graphic, worldHitPosition, screenPosition, distance);
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA_GET_GRAPHIC_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_worldHitPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA_GET_WORLDHITPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_screenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA_GET_SCREENPOSITION_OFFSET))(this);
		}

		::System::Single get_distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCASTHITDATA_GET_DISTANCE_OFFSET))(this);
		}
	};
}
