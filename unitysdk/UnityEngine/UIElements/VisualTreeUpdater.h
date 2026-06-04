#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/VersionChangeType.h"
#include "unitysdk/UnityEngine/UIElements/VisualTreeUpdatePhase.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VisualTreeUpdater_UpdaterArray; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1B35F710)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATEVISUALTREEPHASE_OFFSET UNITYSDK_OFFSET(0x1B35F250)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeUpdater_TypeDefinitionIndex = 6161;

	class VisualTreeUpdater : public ::System::Object
	{
	public:
		::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray* m_UpdaterArray; // 0x10

		::System::Void UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualTreeUpdatePhase))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATEVISUALTREEPHASE_OFFSET))(this, a1);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::VersionChangeType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_ONVERSIONCHANGED_OFFSET))(this, a1, a2);
		}
	};
}
