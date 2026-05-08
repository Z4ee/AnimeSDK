#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionProperty.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"
#include "unitysdk/UnityEngine/InputSystem/XR/TrackedPoseDriver_TrackingType.h"
#include "unitysdk/UnityEngine/InputSystem/XR/TrackedPoseDriver_UpdateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::InputSystem { class InputAction; }

#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B4EFC70)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_BINDACTIONS_OFFSET UNITYSDK_OFFSET(0x1B4EFAF0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_BINDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4EF2E0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_BINDROTATION_OFFSET UNITYSDK_OFFSET(0x1B4EF840)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_POSITIONACTION_OFFSET UNITYSDK_OFFSET(0x1B4F04F0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_POSITIONINPUT_OFFSET UNITYSDK_OFFSET(0x1B4EF030)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_ROTATIONACTION_OFFSET UNITYSDK_OFFSET(0x1B4F0560)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_ROTATIONINPUT_OFFSET UNITYSDK_OFFSET(0x1B4EF590)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_TRACKINGTYPE_OFFSET UNITYSDK_OFFSET(0x1B4EEFF0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_UPDATETYPE_OFFSET UNITYSDK_OFFSET(0x1B4EF010)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_HASSTEREOCAMERA_OFFSET UNITYSDK_OFFSET(0x1B4EFED0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1B4F0400)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B4F0160)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B4F00E0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B4F0060)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONPOSITIONCANCELED_OFFSET UNITYSDK_OFFSET(0x1B4EFBC0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONPOSITIONPERFORMED_OFFSET UNITYSDK_OFFSET(0x1B4EFB30)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONROTATIONCANCELED_OFFSET UNITYSDK_OFFSET(0x1B4EFC60)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONROTATIONPERFORMED_OFFSET UNITYSDK_OFFSET(0x1B4EFBE0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4F03E0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_PERFORMUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4F04B0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_RESET_OFFSET UNITYSDK_OFFSET(0x1B4F05D0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B4F0420)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_POSITIONACTION_OFFSET UNITYSDK_OFFSET(0x1B4F0500)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_POSITIONINPUT_OFFSET UNITYSDK_OFFSET(0x1B4EF050)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_ROTATIONACTION_OFFSET UNITYSDK_OFFSET(0x1B4F0570)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_ROTATIONINPUT_OFFSET UNITYSDK_OFFSET(0x1B4EF5B0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_TRACKINGTYPE_OFFSET UNITYSDK_OFFSET(0x1B4EF000)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_UPDATETYPE_OFFSET UNITYSDK_OFFSET(0x1B4EF020)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNBINDACTIONS_OFFSET UNITYSDK_OFFSET(0x1B4EFB10)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNBINDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4EF0B0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNBINDROTATION_OFFSET UNITYSDK_OFFSET(0x1B4EF610)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4F05F0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4F05E0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B4F03C0)
#define UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F0630)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int TrackedPoseDriver_TypeDefinitionIndex = 29061;

	class TrackedPoseDriver : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType m_TrackingType; // 0x18
		::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType m_UpdateType; // 0x1C
		::UnityEngine::InputSystem::InputActionProperty m_PositionInput; // 0x20
		::UnityEngine::InputSystem::InputActionProperty m_RotationInput; // 0x38
		::UnityEngine::Vector3 m_CurrentPosition; // 0x50
		::UnityEngine::Quaternion m_CurrentRotation; // 0x5C
		::System::Boolean m_RotationBound; // 0x6C
		::System::Boolean m_PositionBound; // 0x6D
		::UnityEngine::InputSystem::InputAction* m_PositionAction; // 0x70
		::UnityEngine::InputSystem::InputAction* m_RotationAction; // 0x78
		::System::Boolean m_HasMigratedActions; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType get_trackingType()
		{
			return ((::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_TRACKINGTYPE_OFFSET))(this);
		}

		::System::Void set_trackingType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_TRACKINGTYPE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType get_updateType()
		{
			return ((::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_UPDATETYPE_OFFSET))(this);
		}

		::System::Void set_updateType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_UPDATETYPE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionProperty get_positionInput()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_POSITIONINPUT_OFFSET))(this);
		}

		::System::Void set_positionInput(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_POSITIONINPUT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionProperty get_rotationInput()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_ROTATIONINPUT_OFFSET))(this);
		}

		::System::Void set_rotationInput(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_ROTATIONINPUT_OFFSET))(this, value);
		}

		::System::Void BindActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_BINDACTIONS_OFFSET))(this);
		}

		::System::Void BindPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_BINDPOSITION_OFFSET))(this);
		}

		::System::Void BindRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_BINDROTATION_OFFSET))(this);
		}

		::System::Void UnbindActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNBINDACTIONS_OFFSET))(this);
		}

		::System::Void UnbindPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNBINDPOSITION_OFFSET))(this);
		}

		::System::Void UnbindRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNBINDROTATION_OFFSET))(this);
		}

		::System::Void OnPositionPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONPOSITIONPERFORMED_OFFSET))(this, context);
		}

		::System::Void OnPositionCanceled(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONPOSITIONCANCELED_OFFSET))(this, context);
		}

		::System::Void OnRotationPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONROTATIONPERFORMED_OFFSET))(this, context);
		}

		::System::Void OnRotationCanceled(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONROTATIONCANCELED_OFFSET))(this, context);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UPDATECALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnBeforeRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_ONBEFORERENDER_OFFSET))(this);
		}

		::System::Void SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SETLOCALTRANSFORM_OFFSET))(this, newPosition, newRotation);
		}

		::System::Boolean HasStereoCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_HASSTEREOCAMERA_OFFSET))(this);
		}

		::System::Void PerformUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_PERFORMUPDATE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_positionAction()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_POSITIONACTION_OFFSET))(this);
		}

		::System::Void set_positionAction(::UnityEngine::InputSystem::InputAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_POSITIONACTION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputAction* get_rotationAction()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_GET_ROTATIONACTION_OFFSET))(this);
		}

		::System::Void set_rotationAction(::UnityEngine::InputSystem::InputAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_SET_ROTATIONACTION_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_RESET_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_TRACKEDPOSEDRIVER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
