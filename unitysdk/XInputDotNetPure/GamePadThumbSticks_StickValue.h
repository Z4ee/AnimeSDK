#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_VECTOR_OFFSET UNITYSDK_OFFSET(0x5580)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_X_OFFSET UNITYSDK_OFFSET(0xCC60)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_Y_OFFSET UNITYSDK_OFFSET(0xCC80)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x29890)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadThumbSticks_StickValue_TypeDefinitionIndex = 31368;

	struct alignas(4) GamePadThumbSticks_StickValue
	{
		::UnityEngine::Vector2 vector; // 0x10

		::System::Void _ctor(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE__CTOR_OFFSET))(this, x, y);
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
