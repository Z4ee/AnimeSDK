#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_SCROLLRECT_REBOUNDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E9620)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScrollRect_ReboundEvent_TypeDefinitionIndex = 5987;

	class ScrollRect_ReboundEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::MoveDirection>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_REBOUNDEVENT__CTOR_OFFSET))(this);
		}
	};
}
