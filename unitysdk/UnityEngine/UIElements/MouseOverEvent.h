#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_MOUSEOVEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD75F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseOverEvent_TypeDefinitionIndex = 5934;

	class MouseOverEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOverEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEOVEREVENT__CTOR_OFFSET))(this);
		}
	};
}
