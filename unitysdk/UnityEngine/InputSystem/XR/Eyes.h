#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x87F260)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x92A810)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x388220)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x417280)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x92A830)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x92A7D0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x926F10)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x87F2E0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x92A820)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x387FA0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x92A7C0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x91FC20)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x92A7F0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x92A800)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int Eyes_TypeDefinitionIndex = 31728;

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
