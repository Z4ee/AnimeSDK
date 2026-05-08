#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3A4E50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x96A2E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x96A2F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x5B6810)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputUpdate_UpdateStepCount_TypeDefinitionIndex = 29279;

	struct alignas(4) InputUpdate_UpdateStepCount
	{
		::System::Boolean m_WasUpdated; // 0x10
		::System::UInt32 _value_k__BackingField; // 0x14

		::System::UInt32 get_value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void OnBeforeUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_ONBEFOREUPDATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_ONUPDATE_OFFSET))(this);
		}
	};
}
