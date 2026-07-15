#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XInputDotNetPure/GamePadState.h"
#include "unitysdk/XInputDotNetPure/PlayerIndex.h"

#define XINPUTDOTNETPURE_GAMEPAD_GETSTATE_OFFSET UNITYSDK_OFFSET(0xB56B970)
#define XINPUTDOTNETPURE_GAMEPAD_SETVIBRATION_OFFSET UNITYSDK_OFFSET(0xB56A430)
#define XINPUTDOTNETPURE_GAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xB56C260)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePad_TypeDefinitionIndex = 38635;

	class GamePad : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPAD__CTOR_OFFSET))(this);
		}

		static ::XInputDotNetPure::GamePadState GetState(::XInputDotNetPure::PlayerIndex a1)
		{
			return ((::XInputDotNetPure::GamePadState(*)(::XInputDotNetPure::PlayerIndex))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPAD_GETSTATE_OFFSET))(a1);
		}

		static ::System::Void SetVibration(::XInputDotNetPure::PlayerIndex a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::XInputDotNetPure::PlayerIndex, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPAD_SETVIBRATION_OFFSET))(a1, a2, a3);
		}
	};
}
