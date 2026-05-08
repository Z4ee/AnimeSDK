#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PanelChangedEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_DETACHFROMPANELEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x197A6230)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DetachFromPanelEvent_TypeDefinitionIndex = 25047;

	class DetachFromPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::DetachFromPanelEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DETACHFROMPANELEVENT__CTOR_OFFSET))(this);
		}
	};
}
