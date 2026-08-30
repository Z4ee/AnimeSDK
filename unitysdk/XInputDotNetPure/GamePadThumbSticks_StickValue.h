#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_VECTOR_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_X_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_Y_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x2F440)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadThumbSticks_StickValue_TypeDefinitionIndex = 39487;

	struct alignas(4) GamePadThumbSticks_StickValue
	{
		::UnityEngine::Vector2 vector; // 0x10

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_X_OFFSET))(this);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_Y_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Vector()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_VECTOR_OFFSET))(this);
		}
	};
}
