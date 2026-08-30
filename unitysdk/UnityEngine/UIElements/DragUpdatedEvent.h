#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/DragAndDropEventBase_1.h"

namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_DRAGUPDATEDEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1EDE6430)
#define UNITYENGINE_UIELEMENTS_DRAGUPDATEDEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1EDE6650)
#define UNITYENGINE_UIELEMENTS_DRAGUPDATEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE6810)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragUpdatedEvent_TypeDefinitionIndex = 5918;

	class DragUpdatedEvent : public ::UnityEngine::UIElements::DragAndDropEventBase_1<::UnityEngine::UIElements::DragUpdatedEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGUPDATEDEVENT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::DragUpdatedEvent* GetPooled(::UnityEngine::Event* a1)
		{
			return ((::UnityEngine::UIElements::DragUpdatedEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGUPDATEDEVENT_GETPOOLED_OFFSET))(a1);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGUPDATEDEVENT_POSTDISPATCH_OFFSET))(this, a1);
		}
	};
}
