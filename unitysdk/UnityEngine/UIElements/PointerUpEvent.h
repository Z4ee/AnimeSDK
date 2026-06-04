#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1B362D40)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1B362E40)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1B363000)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B362F00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerUpEvent_TypeDefinitionIndex = 6237;

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

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_POSTDISPATCH_OFFSET))(this, a1);
		}
	};
}
