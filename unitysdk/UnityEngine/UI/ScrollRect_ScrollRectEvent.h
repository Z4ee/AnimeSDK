#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_UI_SCROLLRECT_SCROLLRECTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE78CC0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScrollRect_ScrollRectEvent_TypeDefinitionIndex = 6819;

	class ScrollRect_ScrollRectEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SCROLLRECTEVENT__CTOR_OFFSET))(this);
		}
	};
}
