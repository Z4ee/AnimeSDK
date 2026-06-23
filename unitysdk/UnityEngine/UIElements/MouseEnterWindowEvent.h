#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1BBE97B0)
#define UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1BBE97F0)
#define UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1BBE9840)
#define UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE9800)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEnterWindowEvent_TypeDefinitionIndex = 27542;

	class MouseEnterWindowEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseEnterWindowEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_LOCALINIT_OFFSET))(this);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_POSTDISPATCH_OFFSET))(this, panel);
		}
	};
}
