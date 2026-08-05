#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1D005780)
#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1D005880)
#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1D005A50)
#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D005950)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerMoveEvent_TypeDefinitionIndex = 28162;

	class PointerMoveEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerMoveEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_LOCALINIT_OFFSET))(this);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_POSTDISPATCH_OFFSET))(this, panel);
		}
	};
}
