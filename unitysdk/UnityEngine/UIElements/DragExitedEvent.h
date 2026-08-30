#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/DragAndDropEventBase_1.h"

namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1D609CB0)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1D609BD0)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1D609C10)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1D609EB0)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D609C20)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragExitedEvent_TypeDefinitionIndex = 5915;

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

		static ::UnityEngine::UIElements::DragExitedEvent* GetPooled(::UnityEngine::Event* a1)
		{
			return ((::UnityEngine::UIElements::DragExitedEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_GETPOOLED_OFFSET))(a1);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_POSTDISPATCH_OFFSET))(this, a1);
		}
	};
}
