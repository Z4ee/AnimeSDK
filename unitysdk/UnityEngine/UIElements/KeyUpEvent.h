#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/KeyboardEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_KEYUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3A780)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyUpEvent_TypeDefinitionIndex = 6212;

	class KeyUpEvent : public ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyUpEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYUPEVENT__CTOR_OFFSET))(this);
		}
	};
}
