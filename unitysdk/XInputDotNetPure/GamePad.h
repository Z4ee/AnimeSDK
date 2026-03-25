#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XInputDotNetPure/GamePadState.h"
#include "unitysdk/XInputDotNetPure/PlayerIndex.h"

#define XINPUTDOTNETPURE_GAMEPAD_GETSTATE_OFFSET UNITYSDK_OFFSET(0x15D1D760)
#define XINPUTDOTNETPURE_GAMEPAD_SETVIBRATION_OFFSET UNITYSDK_OFFSET(0x15D1C190)
#define XINPUTDOTNETPURE_GAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1E080)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePad_TypeDefinitionIndex = 31375;

	class GamePad : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPAD__CTOR_OFFSET))(this);
		}

		static ::XInputDotNetPure::GamePadState GetState(::XInputDotNetPure::PlayerIndex playerIndex)
		{
			return ((::XInputDotNetPure::GamePadState(*)(::XInputDotNetPure::PlayerIndex))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPAD_GETSTATE_OFFSET))(playerIndex);
		}

		static ::System::Void SetVibration(::XInputDotNetPure::PlayerIndex playerIndex, ::System::Single leftMotor, ::System::Single rightMotor)
		{
			return ((::System::Void(*)(::XInputDotNetPure::PlayerIndex, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPAD_SETVIBRATION_OFFSET))(playerIndex, leftMotor, rightMotor);
		}
	};
}
