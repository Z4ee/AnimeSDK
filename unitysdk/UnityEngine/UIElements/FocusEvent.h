#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_FOCUSEVENT_PREDISPATCH_OFFSET UNITYSDK_OFFSET(0x1CFF9FC0)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFA050)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusEvent_TypeDefinitionIndex = 28121;

	class FocusEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENT__CTOR_OFFSET))(this);
		}

		::System::Void PreDispatch(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENT_PREDISPATCH_OFFSET))(this, panel);
		}
	};
}
