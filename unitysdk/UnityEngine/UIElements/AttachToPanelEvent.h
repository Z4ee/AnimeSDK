#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PanelChangedEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_ATTACHTOPANELEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x197A1920)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int AttachToPanelEvent_TypeDefinitionIndex = 25046;

	class AttachToPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::AttachToPanelEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATTACHTOPANELEVENT__CTOR_OFFSET))(this);
		}
	};
}
