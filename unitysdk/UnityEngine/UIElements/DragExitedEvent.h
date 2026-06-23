#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/DragAndDropEventBase_1.h"

namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1BBDD0B0)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1BBDCFD0)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1BBDD010)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1BBDD210)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDD020)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragExitedEvent_TypeDefinitionIndex = 27498;

	class DragExitedEvent : public ::UnityEngine::UIElements::DragAndDropEventBase_1<::UnityEngine::UIElements::DragExitedEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_LOCALINIT_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::DragExitedEvent* GetPooled(::UnityEngine::Event* systemEvent)
		{
			return ((::UnityEngine::UIElements::DragExitedEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_GETPOOLED_OFFSET))(systemEvent);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_POSTDISPATCH_OFFSET))(this, panel);
		}
	};
}
