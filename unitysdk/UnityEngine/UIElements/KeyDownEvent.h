#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/KeyboardEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_KEYDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35BFA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyDownEvent_TypeDefinitionIndex = 6206;

	class KeyDownEvent : public ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyDownEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYDOWNEVENT__CTOR_OFFSET))(this);
		}
	};
}
