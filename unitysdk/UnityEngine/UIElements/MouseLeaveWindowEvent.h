#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1D001850)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1D001580)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1D001680)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1D001A40)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D001750)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseLeaveWindowEvent_TypeDefinitionIndex = 28145;

	class MouseLeaveWindowEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseLeaveWindowEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_LOCALINIT_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::MouseLeaveWindowEvent* GetPooled(::UnityEngine::Event* systemEvent)
		{
			return ((::UnityEngine::UIElements::MouseLeaveWindowEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_GETPOOLED_OFFSET))(systemEvent);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_POSTDISPATCH_OFFSET))(this, panel);
		}
	};
}
