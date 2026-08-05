#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionPhase.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/ActionEvent__m_ValueData_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x1E7826A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GETEVENTSIZEWITHVALUESIZE_OFFSET UNITYSDK_OFFSET(0x1E782690)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0xA383D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_CONTROLINDEX_OFFSET UNITYSDK_OFFSET(0xA38350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_INTERACTIONINDEX_OFFSET UNITYSDK_OFFSET(0xA38450)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xA38290)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_STATEINDEX_OFFSET UNITYSDK_OFFSET(0x463260)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xA384F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E7823E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUEDATA_OFFSET UNITYSDK_OFFSET(0xA382C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0xA382D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0xA383E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_CONTROLINDEX_OFFSET UNITYSDK_OFFSET(0xA38360)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_INTERACTIONINDEX_OFFSET UNITYSDK_OFFSET(0xA38470)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_PHASE_OFFSET UNITYSDK_OFFSET(0xA382B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xA382A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_SET_STATEINDEX_OFFSET UNITYSDK_OFFSET(0xA382E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ACTIONEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x9A7180)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int ActionEvent_TypeDefinitionIndex = 32518;

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
