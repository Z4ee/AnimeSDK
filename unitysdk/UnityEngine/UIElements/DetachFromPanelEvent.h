#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PanelChangedEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_DETACHFROMPANELEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDCEB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DetachFromPanelEvent_TypeDefinitionIndex = 27550;

	class DetachFromPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::DetachFromPanelEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DETACHFROMPANELEVENT__CTOR_OFFSET))(this);
		}
	};
}
