#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"
#include "unitysdk/UnityEngine/TouchScreenKeyboard_Status.h"

#define TMPRO_TMP_INPUTFIELD_TOUCHSCREENKEYBOARDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDAFF0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_TouchScreenKeyboardEvent_TypeDefinitionIndex = 39827;

	class TMP_InputField_TouchScreenKeyboardEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::TouchScreenKeyboard_Status>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_TOUCHSCREENKEYBOARDEVENT__CTOR_OFFSET))(this);
		}
	};
}
