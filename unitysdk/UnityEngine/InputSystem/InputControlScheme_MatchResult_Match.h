#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlList_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_DeviceRequirement.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0xA663A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0xA663E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0xA66480)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_REQUIREMENTINDEX_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_REQUIREMENT_OFFSET UNITYSDK_OFFSET(0xA66440)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_MatchResult_Match_TypeDefinitionIndex = 32209;

	struct alignas(8) InputControlScheme_MatchResult_Match
	{
		::System::Int32 m_RequirementIndex; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>* m_Requirements; // 0x18
		::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls; // 0x20

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_CONTROL_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_DEVICE_OFFSET))(this);
		}

		::System::Int32 get_requirementIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_REQUIREMENTINDEX_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement get_requirement()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_REQUIREMENT_OFFSET))(this);
		}

		::System::Boolean get_isOptional()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_MATCH_GET_ISOPTIONAL_OFFSET))(this);
		}
	};
}
