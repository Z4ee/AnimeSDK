#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/TouchPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_BEGANINSAMEFRAME_OFFSET UNITYSDK_OFFSET(0x970620)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x970640)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1B4EDA60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISINDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x9705C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x970560)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISNONEENDEDORCANCELED_OFFSET UNITYSDK_OFFSET(0x970540)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISORPHANEDPRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x9705A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISPRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x970580)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAPPRESS_OFFSET UNITYSDK_OFFSET(0x9705E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAPRELEASE_OFFSET UNITYSDK_OFFSET(0x970600)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAP_OFFSET UNITYSDK_OFFSET(0x9705E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x73D0C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_BEGANINSAMEFRAME_OFFSET UNITYSDK_OFFSET(0x970630)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISINDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x9705D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISORPHANEDPRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x9705B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISPRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x970590)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAPPRESS_OFFSET UNITYSDK_OFFSET(0x9705F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAPRELEASE_OFFSET UNITYSDK_OFFSET(0x970610)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAP_OFFSET UNITYSDK_OFFSET(0x9705F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x73D0F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x970650)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchState_TypeDefinitionIndex = 29238;

	struct alignas(8) TouchState
	{
		// static const ::System::Int32 kSizeInBytes = 0x38; // 0x0
		::System::Int32 touchId; // 0x10
		::UnityEngine::Vector2 position; // 0x14
		::UnityEngine::Vector2 delta; // 0x1C
		::System::Single pressure; // 0x24
		::UnityEngine::Vector2 radius; // 0x28
		::System::Byte phaseId; // 0x30
		::System::Byte tapCount; // 0x31
		::System::Byte displayIndex; // 0x32
		::System::Byte flags; // 0x33
		::System::UInt32 updateStepCount; // 0x34
		::System::Double startTime; // 0x38
		::UnityEngine::Vector2 startPosition; // 0x40

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_FORMAT_OFFSET))();
		}
		*/

		::UnityEngine::InputSystem::TouchPhase get_phase()
		{
			return ((::UnityEngine::InputSystem::TouchPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_phase(::UnityEngine::InputSystem::TouchPhase value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::TouchPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_PHASE_OFFSET))(this, value);
		}

		::System::Boolean get_isNoneEndedOrCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISNONEENDEDORCANCELED_OFFSET))(this);
		}

		::System::Boolean get_isInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_isPrimaryTouch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISPRIMARYTOUCH_OFFSET))(this);
		}

		::System::Void set_isPrimaryTouch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISPRIMARYTOUCH_OFFSET))(this, value);
		}

		::System::Boolean get_isOrphanedPrimaryTouch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISORPHANEDPRIMARYTOUCH_OFFSET))(this);
		}

		::System::Void set_isOrphanedPrimaryTouch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISORPHANEDPRIMARYTOUCH_OFFSET))(this, value);
		}

		::System::Boolean get_isIndirectTouch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISINDIRECTTOUCH_OFFSET))(this);
		}

		::System::Void set_isIndirectTouch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISINDIRECTTOUCH_OFFSET))(this, value);
		}

		::System::Boolean get_isTap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAP_OFFSET))(this);
		}

		::System::Void set_isTap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAP_OFFSET))(this, value);
		}

		::System::Boolean get_isTapPress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAPPRESS_OFFSET))(this);
		}

		::System::Void set_isTapPress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAPPRESS_OFFSET))(this, value);
		}

		::System::Boolean get_isTapRelease()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAPRELEASE_OFFSET))(this);
		}

		::System::Void set_isTapRelease(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAPRELEASE_OFFSET))(this, value);
		}

		::System::Boolean get_beganInSameFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_BEGANINSAMEFRAME_OFFSET))(this);
		}

		::System::Void set_beganInSameFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_BEGANINSAMEFRAME_OFFSET))(this, value);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format_1()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_FORMAT_1_OFFSET))(this);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_TOSTRING_OFFSET))(this);
		}
	};
}
