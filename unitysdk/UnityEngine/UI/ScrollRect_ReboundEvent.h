#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_SCROLLRECT_REBOUNDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F519F20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScrollRect_ReboundEvent_TypeDefinitionIndex = 6831;

	class ScrollRect_ReboundEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::MoveDirection>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_REBOUNDEVENT__CTOR_OFFSET))(this);
		}
	};
}
