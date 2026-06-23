#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/UI/PointerModel_ButtonState.h"
#include "unitysdk/UnityEngine/InputSystem/UI/UIPointerType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::InputSystem::UI { class ExtendedPointerEventData; }

#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_COPYTOUCHORPENSTATEFROM_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0x95D670)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0x95D640)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x95D430)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x95D610)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x95D6D0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x95D460)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x95D5B0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x95D6A0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_WORLDORIENTATION_OFFSET UNITYSDK_OFFSET(0x95D550)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x95D4C0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_ONFRAMEFINISHED_OFFSET UNITYSDK_OFFSET(0x95D830)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0x95D680)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0x95D650)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x95D620)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x95D6E0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x95D470)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x95D5C0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_TWIST_OFFSET UNITYSDK_OFFSET(0x95D6B0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_WORLDORIENTATION_OFFSET UNITYSDK_OFFSET(0x95D560)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x95D4E0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x95D730)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int PointerModel_TypeDefinitionIndex = 31771;

	struct alignas(8) PointerModel
	{
		::System::Boolean changedThisFrame; // 0x10
		::UnityEngine::InputSystem::UI::PointerModel_ButtonState leftButton; // 0x18
		::UnityEngine::InputSystem::UI::PointerModel_ButtonState rightButton; // 0xA8
		::UnityEngine::InputSystem::UI::PointerModel_ButtonState middleButton; // 0x138
		::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData; // 0x1C8
		::UnityEngine::Vector2 m_ScreenPosition; // 0x1D0
		::UnityEngine::Vector2 m_ScrollDelta; // 0x1D8
		::UnityEngine::Vector3 m_WorldPosition; // 0x1E0
		::UnityEngine::Quaternion m_WorldOrientation; // 0x1EC
		::System::Single m_Pressure; // 0x1FC
		::System::Single m_AzimuthAngle; // 0x200
		::System::Single m_AltitudeAngle; // 0x204
		::System::Single m_Twist; // 0x208
		::UnityEngine::Vector2 m_Radius; // 0x20C

		::System::Void _ctor(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL__CTOR_OFFSET))(this, eventData);
		}

		::UnityEngine::InputSystem::UI::UIPointerType get_pointerType()
		{
			return ((::UnityEngine::InputSystem::UI::UIPointerType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_POINTERTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_screenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_SCREENPOSITION_OFFSET))(this);
		}

		::System::Void set_screenPosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_SCREENPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_worldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_WORLDPOSITION_OFFSET))(this);
		}

		::System::Void set_worldPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_WORLDPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_worldOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_WORLDORIENTATION_OFFSET))(this);
		}

		::System::Void set_worldOrientation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_WORLDORIENTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_scrollDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_SCROLLDELTA_OFFSET))(this);
		}

		::System::Void set_scrollDelta(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_SCROLLDELTA_OFFSET))(this, value);
		}

		::System::Single get_pressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_PRESSURE_OFFSET))(this);
		}

		::System::Void set_pressure(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_PRESSURE_OFFSET))(this, value);
		}

		::System::Single get_azimuthAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_AZIMUTHANGLE_OFFSET))(this);
		}

		::System::Void set_azimuthAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_AZIMUTHANGLE_OFFSET))(this, value);
		}

		::System::Single get_altitudeAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_ALTITUDEANGLE_OFFSET))(this);
		}

		::System::Void set_altitudeAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_ALTITUDEANGLE_OFFSET))(this, value);
		}

		::System::Single get_twist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_TWIST_OFFSET))(this);
		}

		::System::Void set_twist(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_TWIST_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_radius()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Void OnFrameFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_ONFRAMEFINISHED_OFFSET))(this);
		}

		::System::Void CopyTouchOrPenStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_COPYTOUCHORPENSTATEFROM_OFFSET))(this, eventData);
		}
	};
}
