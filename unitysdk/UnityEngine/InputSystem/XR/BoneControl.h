#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"
#include "unitysdk/UnityEngine/InputSystem/XR/Bone.h"

namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F1F74C0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x1F1F7460)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F1F7480)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1F1F74A0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1F1F7550)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x1F1F7470)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F1F7490)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1F1F74B0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1F1F76B0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F77F0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int BoneControl_TypeDefinitionIndex = 32349;

	class BoneControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::Bone>
	{
	public:
		::UnityEngine::InputSystem::Controls::IntegerControl* _parentBoneIndex_k__BackingField; // 0xF0
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField; // 0xF8
		::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_parentBoneIndex()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_PARENTBONEINDEX_OFFSET))(this);
		}

		::System::Void set_parentBoneIndex(::UnityEngine::InputSystem::Controls::IntegerControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_PARENTBONEINDEX_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_position()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::XR::Bone ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::UnityEngine::InputSystem::XR::Bone(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::XR::Bone value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::XR::Bone, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}
