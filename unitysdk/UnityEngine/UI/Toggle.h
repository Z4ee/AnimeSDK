#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"
#include "unitysdk/UnityEngine/UI/Toggle_ToggleTransition.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class ToggleGroup; }
namespace UnityEngine::UI { class Toggle_ToggleEvent; }
namespace UnityEngine::UI { class Toggle_ToggleSelectEvent; }

#define UNITYENGINE_UI_TOGGLE_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x18B76B90)
#define UNITYENGINE_UI_TOGGLE_GET_ISON_OFFSET UNITYSDK_OFFSET(0x18B77740)
#define UNITYENGINE_UI_TOGGLE_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B76FA0)
#define UNITYENGINE_UI_TOGGLE_INTERNALTOGGLE_OFFSET UNITYSDK_OFFSET(0x18B778D0)
#define UNITYENGINE_UI_TOGGLE_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B76F90)
#define UNITYENGINE_UI_TOGGLE_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x18B77B80)
#define UNITYENGINE_UI_TOGGLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B76FB0)
#define UNITYENGINE_UI_TOGGLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18B77180)
#define UNITYENGINE_UI_TOGGLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B770F0)
#define UNITYENGINE_UI_TOGGLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B77080)
#define UNITYENGINE_UI_TOGGLE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x18B77930)
#define UNITYENGINE_UI_TOGGLE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x18B77A00)
#define UNITYENGINE_UI_TOGGLE_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x18B779A0)
#define UNITYENGINE_UI_TOGGLE_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x18B76D80)
#define UNITYENGINE_UI_TOGGLE_REBUILD_OFFSET UNITYSDK_OFFSET(0x18B76F80)
#define UNITYENGINE_UI_TOGGLE_SETISONWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x18B77760)
#define UNITYENGINE_UI_TOGGLE_SETTOGGLEGROUP_OFFSET UNITYSDK_OFFSET(0x18B76C00)
#define UNITYENGINE_UI_TOGGLE_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x18B76BA0)
#define UNITYENGINE_UI_TOGGLE_SET_ISON_OFFSET UNITYSDK_OFFSET(0x18B77750)
#define UNITYENGINE_UI_TOGGLE_SET_OFFSET UNITYSDK_OFFSET(0x18B77320)
#define UNITYENGINE_UI_TOGGLE_START_OFFSET UNITYSDK_OFFSET(0x18B77880)
#define UNITYENGINE_UI_TOGGLE_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18B77C70)
#define UNITYENGINE_UI_TOGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B76DE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Toggle_TypeDefinitionIndex = 5732;

	class Toggle : public ::UnityEngine::UI::Selectable
	{
	public:
		::UnityEngine::UI::Toggle_ToggleTransition toggleTransition; // 0x108
		::UnityEngine::UI::Graphic* graphic; // 0x110
		::UnityEngine::UI::ToggleGroup* m_Group; // 0x118
		::UnityEngine::UI::Toggle_ToggleEvent* onValueChanged; // 0x120
		::System::Boolean m_IsOn; // 0x128
		::UnityEngine::UI::Toggle_ToggleSelectEvent* onSelectEvent; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::ToggleGroup* get_group()
		{
			return ((::UnityEngine::UI::ToggleGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_group(::UnityEngine::UI::ToggleGroup* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ToggleGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SET_GROUP_OFFSET))(this, value);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate executing)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_REBUILD_OFFSET))(this, executing);
		}

		::System::Void LayoutComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_LAYOUTCOMPLETE_OFFSET))(this);
		}

		::System::Void GraphicUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_GRAPHICUPDATECOMPLETE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void SetToggleGroup(::UnityEngine::UI::ToggleGroup* newGroup, ::System::Boolean setMemberValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ToggleGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SETTOGGLEGROUP_OFFSET))(this, newGroup, setMemberValue);
		}

		::System::Boolean get_isOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_GET_ISON_OFFSET))(this);
		}

		::System::Void set_isOn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SET_ISON_OFFSET))(this, value);
		}

		::System::Void SetIsOnWithoutNotify(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SETISONWITHOUTNOTIFY_OFFSET))(this, value);
		}

		::System::Void Set(::System::Boolean value, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SET_OFFSET))(this, value, sendCallback);
		}

		::System::Void PlayEffect(::System::Boolean instant)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_PLAYEFFECT_OFFSET))(this, instant);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_START_OFFSET))(this);
		}

		::System::Void InternalToggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_INTERNALTOGGLE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONDESELECT_OFFSET))(this, eventData);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
