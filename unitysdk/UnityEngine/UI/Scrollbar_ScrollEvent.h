#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_SCROLLBAR_SCROLLEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E9C70)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Scrollbar_ScrollEvent_TypeDefinitionIndex = 5991;

	class Scrollbar_ScrollEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SCROLLEVENT__CTOR_OFFSET))(this);
		}
	};
}
