#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_1.h"

namespace UnityEngine::UIElements { class IPanel; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelChangedEventBase_1_TypeDefinitionIndex = 27548;

	template <typename T>
	class PanelChangedEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T>
	{
	public:
		::UnityEngine::UIElements::IPanel* _originPanel_k__BackingField; // 0x0
		::UnityEngine::UIElements::IPanel* _destinationPanel_k__BackingField; // 0x0
	};
}
