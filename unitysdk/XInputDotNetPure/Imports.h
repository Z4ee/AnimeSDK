#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE32_OFFSET UNITYSDK_OFFSET(0xC160430)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE64_OFFSET UNITYSDK_OFFSET(0xC160560)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE_OFFSET UNITYSDK_OFFSET(0xC15FF50)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE32_OFFSET UNITYSDK_OFFSET(0xC1604C0)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE64_OFFSET UNITYSDK_OFFSET(0xC1605F0)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE_OFFSET UNITYSDK_OFFSET(0xC160120)
#define XINPUTDOTNETPURE_IMPORTS__CTOR_OFFSET UNITYSDK_OFFSET(0xC160690)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int Imports_TypeDefinitionIndex = 39482;

	class Imports : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 XInputGamePadGetState32(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE32_OFFSET))(a1, a2);
		}

		static ::System::Void XInputGamePadSetState32(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE32_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 XInputGamePadGetState64(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE64_OFFSET))(a1, a2);
		}

		static ::System::Void XInputGamePadSetState64(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE64_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 XInputGamePadGetState(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE_OFFSET))(a1, a2);
		}

		static ::System::Void XInputGamePadSetState(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE_OFFSET))(a1, a2, a3);
		}
	};
}
