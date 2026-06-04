#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1B3617F0)
#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1B3618F0)
#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1B361AB0)
#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3619B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDownEvent_TypeDefinitionIndex = 6235;

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

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_POSTDISPATCH_OFFSET))(this, a1);
		}
	};
}
