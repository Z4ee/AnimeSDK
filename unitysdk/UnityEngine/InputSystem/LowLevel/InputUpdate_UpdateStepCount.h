#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0xA5B960)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5B970)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_UPDATESTEPCOUNT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x6329D0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputUpdate_UpdateStepCount_TypeDefinitionIndex = 32555;

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
