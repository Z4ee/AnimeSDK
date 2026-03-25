#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/XInputDotNetPure/GamePadButtons.h"
#include "unitysdk/XInputDotNetPure/GamePadDPad.h"
#include "unitysdk/XInputDotNetPure/GamePadThumbSticks.h"
#include "unitysdk/XInputDotNetPure/GamePadTriggers.h"

#define XINPUTDOTNETPURE_GAMEPADSTATE_GET_BUTTONS_OFFSET UNITYSDK_OFFSET(0x15B8900)
#define XINPUTDOTNETPURE_GAMEPADSTATE_GET_DPAD_OFFSET UNITYSDK_OFFSET(0x15F5410)
#define XINPUTDOTNETPURE_GAMEPADSTATE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x29C50)
#define XINPUTDOTNETPURE_GAMEPADSTATE_GET_PACKETNUMBER_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define XINPUTDOTNETPURE_GAMEPADSTATE_GET_THUMBSTICKS_OFFSET UNITYSDK_OFFSET(0x20C6BF0)
#define XINPUTDOTNETPURE_GAMEPADSTATE_GET_TRIGGERS_OFFSET UNITYSDK_OFFSET(0x37640)
#define XINPUTDOTNETPURE_GAMEPADSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x20C6BC0)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadState_TypeDefinitionIndex = 31370;

	struct alignas(4) GamePadState
	{
		::System::Boolean isConnected; // 0x10
		::System::UInt32 packetNumber; // 0x14
		::XInputDotNetPure::GamePadButtons buttons; // 0x18
		::XInputDotNetPure::GamePadDPad dPad; // 0x40
		::XInputDotNetPure::GamePadThumbSticks thumbSticks; // 0x50
		::XInputDotNetPure::GamePadTriggers triggers; // 0x60

		/*
		::System::Void _ctor(::System::Boolean isConnected, ::XInputDotNetPure::GamePadState_RawState rawState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::XInputDotNetPure::GamePadState_RawState))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADSTATE__CTOR_OFFSET))(this, isConnected, rawState);
		}
		*/

		::System::UInt32 get_PacketNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADSTATE_GET_PACKETNUMBER_OFFSET))(this);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADSTATE_GET_ISCONNECTED_OFFSET))(this);
		}

		::XInputDotNetPure::GamePadButtons get_Buttons()
		{
			return ((::XInputDotNetPure::GamePadButtons(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADSTATE_GET_BUTTONS_OFFSET))(this);
		}

		::XInputDotNetPure::GamePadDPad get_DPad()
		{
			return ((::XInputDotNetPure::GamePadDPad(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADSTATE_GET_DPAD_OFFSET))(this);
		}

		::XInputDotNetPure::GamePadTriggers get_Triggers()
		{
			return ((::XInputDotNetPure::GamePadTriggers(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADSTATE_GET_TRIGGERS_OFFSET))(this);
		}

		::XInputDotNetPure::GamePadThumbSticks get_ThumbSticks()
		{
			return ((::XInputDotNetPure::GamePadThumbSticks(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADSTATE_GET_THUMBSTICKS_OFFSET))(this);
		}
	};
}
