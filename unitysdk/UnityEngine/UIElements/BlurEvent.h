#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_BLUREVENT_PREDISPATCH_OFFSET UNITYSDK_OFFSET(0x1D607140)
#define UNITYENGINE_UIELEMENTS_BLUREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D607410)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BlurEvent_TypeDefinitionIndex = 5934;

	class BlurEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::BlurEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BLUREVENT__CTOR_OFFSET))(this);
		}

		::System::Void PreDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BLUREVENT_PREDISPATCH_OFFSET))(this, a1);
		}
	};
}
