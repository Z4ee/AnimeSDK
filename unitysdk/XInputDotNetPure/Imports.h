#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE32_OFFSET UNITYSDK_OFFSET(0x15D1E2F0)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE64_OFFSET UNITYSDK_OFFSET(0x15D1E420)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE_OFFSET UNITYSDK_OFFSET(0x15D1DE10)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE32_OFFSET UNITYSDK_OFFSET(0x15D1E380)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE64_OFFSET UNITYSDK_OFFSET(0x15D1E4B0)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE_OFFSET UNITYSDK_OFFSET(0x15D1DFE0)
#define XINPUTDOTNETPURE_IMPORTS__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1E550)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int Imports_TypeDefinitionIndex = 31363;

	class Imports : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 XInputGamePadGetState32(::System::UInt32 playerIndex, ::System::IntPtr state)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE32_OFFSET))(playerIndex, state);
		}

		static ::System::Void XInputGamePadSetState32(::System::UInt32 playerIndex, ::System::Single leftMotor, ::System::Single rightMotor)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE32_OFFSET))(playerIndex, leftMotor, rightMotor);
		}

		static ::System::UInt32 XInputGamePadGetState64(::System::UInt32 playerIndex, ::System::IntPtr state)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE64_OFFSET))(playerIndex, state);
		}

		static ::System::Void XInputGamePadSetState64(::System::UInt32 playerIndex, ::System::Single leftMotor, ::System::Single rightMotor)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE64_OFFSET))(playerIndex, leftMotor, rightMotor);
		}

		static ::System::UInt32 XInputGamePadGetState(::System::UInt32 playerIndex, ::System::IntPtr state)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE_OFFSET))(playerIndex, state);
		}

		static ::System::Void XInputGamePadSetState(::System::UInt32 playerIndex, ::System::Single leftMotor, ::System::Single rightMotor)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE_OFFSET))(playerIndex, leftMotor, rightMotor);
		}
	};
}
