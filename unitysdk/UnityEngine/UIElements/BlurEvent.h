#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_BLUREVENT_PREDISPATCH_OFFSET UNITYSDK_OFFSET(0x1A5054F0)
#define UNITYENGINE_UIELEMENTS_BLUREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5056B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BlurEvent_TypeDefinitionIndex = 5919;

	class BlurEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::BlurEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BLUREVENT__CTOR_OFFSET))(this);
		}

		::System::Void PreDispatch(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BLUREVENT_PREDISPATCH_OFFSET))(this, panel);
		}
	};
}
