#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/DragAndDropEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x197A66E0)
#define UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x197A6720)
#define UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x197A6730)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragLeaveEvent_TypeDefinitionIndex = 24997;

	class DragLeaveEvent : public ::UnityEngine::UIElements::DragAndDropEventBase_1<::UnityEngine::UIElements::DragLeaveEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
