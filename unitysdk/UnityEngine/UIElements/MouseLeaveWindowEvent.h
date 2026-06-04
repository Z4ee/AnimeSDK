#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1B35E390)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1B35E0D0)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1B35E1D0)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1B35E570)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35E290)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseLeaveWindowEvent_TypeDefinitionIndex = 6222;

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

		static ::UnityEngine::UIElements::MouseLeaveWindowEvent* GetPooled(::UnityEngine::Event* a1)
		{
			return ((::UnityEngine::UIElements::MouseLeaveWindowEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_GETPOOLED_OFFSET))(a1);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_POSTDISPATCH_OFFSET))(this, a1);
		}
	};
}
