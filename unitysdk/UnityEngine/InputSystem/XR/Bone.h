#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x2ACBC0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3E6590)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x2ACB80)
#define UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x446EF0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int Bone_TypeDefinitionIndex = 31727;

	struct alignas(4) Bone
	{
		::System::UInt32 _parentBoneIndex_k__BackingField; // 0x10
		::UnityEngine::Vector3 _position_k__BackingField; // 0x14
		::UnityEngine::Quaternion _rotation_k__BackingField; // 0x20

		::System::UInt32 get_parentBoneIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_PARENTBONEINDEX_OFFSET))(this);
		}

		::System::Void set_parentBoneIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_PARENTBONEINDEX_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONE_SET_ROTATION_OFFSET))(this, value);
		}
	};
}
