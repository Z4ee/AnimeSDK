#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x76F480)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x8817C0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x2E2760)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x3F6E00)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x8817E0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x881770)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x8817A0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x76F4D0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x8817D0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x2E2450)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x881760)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x870BA0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x881790)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x8817B0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int Eyes_TypeDefinitionIndex = 29072;

	struct alignas(4) Eyes
	{
		::UnityEngine::Vector3 _leftEyePosition_k__BackingField; // 0x10
		::UnityEngine::Quaternion _leftEyeRotation_k__BackingField; // 0x1C
		::UnityEngine::Vector3 _rightEyePosition_k__BackingField; // 0x2C
		::UnityEngine::Quaternion _rightEyeRotation_k__BackingField; // 0x38
		::UnityEngine::Vector3 _fixationPoint_k__BackingField; // 0x48
		::System::Single _leftEyeOpenAmount_k__BackingField; // 0x54
		::System::Single _rightEyeOpenAmount_k__BackingField; // 0x58

		::UnityEngine::Vector3 get_leftEyePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEPOSITION_OFFSET))(this);
		}

		::System::Void set_leftEyePosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_leftEyeRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEROTATION_OFFSET))(this);
		}

		::System::Void set_leftEyeRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rightEyePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEPOSITION_OFFSET))(this);
		}

		::System::Void set_rightEyePosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rightEyeRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEROTATION_OFFSET))(this);
		}

		::System::Void set_rightEyeRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_fixationPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_FIXATIONPOINT_OFFSET))(this);
		}

		::System::Void set_fixationPoint(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_FIXATIONPOINT_OFFSET))(this, value);
		}

		::System::Single get_leftEyeOpenAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEOPENAMOUNT_OFFSET))(this);
		}

		::System::Void set_leftEyeOpenAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEOPENAMOUNT_OFFSET))(this, value);
		}

		::System::Single get_rightEyeOpenAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEOPENAMOUNT_OFFSET))(this);
		}

		::System::Void set_rightEyeOpenAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEOPENAMOUNT_OFFSET))(this, value);
		}
	};
}
