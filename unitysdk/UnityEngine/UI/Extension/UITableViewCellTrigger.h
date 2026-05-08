#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UITableView; }
namespace UnityEngine::UI::Extension { class UITableViewCell; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BD78AD0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1BD77FF0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1BD78380)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1BD78710)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD78C50)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCellTrigger_TypeDefinitionIndex = 75134;

	class UITableViewCellTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UITableView* tableView; // 0x18
		::UnityEngine::UI::Extension::UITableViewCell* tableViewCell; // 0x20
		::UnityEngine::GameObject* target; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELLTRIGGER_ONENABLE_OFFSET))(this);
		}
	};
}
