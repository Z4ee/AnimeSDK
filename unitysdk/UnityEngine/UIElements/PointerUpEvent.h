#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1BBEEC30)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1BBEED30)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1BBEEF00)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBEEE00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerUpEvent_TypeDefinitionIndex = 27561;

	class PointerUpEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerUpEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_LOCALINIT_OFFSET))(this);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_POSTDISPATCH_OFFSET))(this, panel);
		}
	};
}
