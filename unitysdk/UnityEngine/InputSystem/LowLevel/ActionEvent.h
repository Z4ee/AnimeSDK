#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionPhase.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/ActionEvent__m_ValueData_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x1AF9C4F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GETEVENTSIZEWITHVALUESIZE_OFFSET UNITYSDK_OFFSET(0x1AF9C4E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x949C30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_CONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x949BB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_INTERACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x949CB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x4B6A40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x949AF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STATEINDEX_OFFSET UNITYSDK_OFFSET(0x4B69E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x949D50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AF9C230)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUEDATA_OFFSET UNITYSDK_OFFSET(0x949B20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x949B30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x949C40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_CONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x949BC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_INTERACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x949CD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x949B10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x949B00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STATEINDEX_OFFSET UNITYSDK_OFFSET(0x949B40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x8B6F00)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int ActionEvent_TypeDefinitionIndex = 29242;

	struct alignas(8) ActionEvent
	{
		::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent; // 0x10
		::System::UInt16 m_ControlIndex; // 0x24
		::System::UInt16 m_BindingIndex; // 0x26
		::System::UInt16 m_InteractionIndex; // 0x28
		::System::Byte m_StateIndex; // 0x2A
		::System::Byte m_Phase; // 0x2B
		::System::Double m_StartTime; // 0x2C
		::UnityEngine::InputSystem::LowLevel::ActionEvent__m_ValueData_e__FixedBuffer m_ValueData; // 0x34

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPE_OFFSET))();
		}
		*/

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_startTime(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STARTTIME_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionPhase get_phase()
		{
			return ((::UnityEngine::InputSystem::InputActionPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_phase(::UnityEngine::InputSystem::InputActionPhase value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_PHASE_OFFSET))(this, value);
		}

		::System::Byte* get_valueData()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUEDATA_OFFSET))(this);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUESIZEINBYTES_OFFSET))(this);
		}

		::System::Int32 get_stateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STATEINDEX_OFFSET))(this);
		}

		::System::Void set_stateIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STATEINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_controlIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_CONTROLINDEX_OFFSET))(this);
		}

		::System::Void set_controlIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_CONTROLINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_bindingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_BINDINGINDEX_OFFSET))(this);
		}

		::System::Void set_bindingIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_BINDINGINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_interactionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_INTERACTIONINDEX_OFFSET))(this);
		}

		::System::Void set_interactionIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_INTERACTIONINDEX_OFFSET))(this, value);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_TOEVENTPTR_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::System::Int32 GetEventSizeWithValueSize(::System::Int32 valueSizeInBytes)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GETEVENTSIZEWITHVALUESIZE_OFFSET))(valueSizeInBytes);
		}

		/*
		static ::UnityEngine::InputSystem::LowLevel::ActionEvent* From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::ActionEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_FROM_OFFSET))(ptr);
		}
		*/
	};
}
