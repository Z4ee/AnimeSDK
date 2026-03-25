#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x18ADA7F0)
#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x18ADA960)
#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x18ADAB30)
#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADAA30)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDownEvent_TypeDefinitionIndex = 5946;

	class PointerDownEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerDownEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_LOCALINIT_OFFSET))(this);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_POSTDISPATCH_OFFSET))(this, panel);
		}
	};
}
