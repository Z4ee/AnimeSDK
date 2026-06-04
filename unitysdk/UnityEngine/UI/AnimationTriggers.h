#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_DISABLEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B381760)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_HIGHLIGHTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B381700)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_NORMALTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B3816E0)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_PRESSEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B381720)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_SELECTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B381740)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B381790)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B381780)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_DISABLEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B381770)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_HIGHLIGHTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B381710)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_NORMALTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B3816F0)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_PRESSEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B381730)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_SELECTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B381750)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3818B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int AnimationTriggers_TypeDefinitionIndex = 5846;

	class AnimationTriggers : public ::System::Object
	{
	public:
		// static const ::System::String* kDefaultNormalAnimName; // 0x0
		// static const ::System::String* kDefaultHighlightedAnimName; // 0x0
		// static const ::System::String* kDefaultPressedAnimName; // 0x0
		// static const ::System::String* kDefaultSelectedAnimName; // 0x0
		// static const ::System::String* kDefaultDisabledAnimName; // 0x0
		::System::String* m_NormalTrigger; // 0x10
		::System::String* m_HighlightedTrigger; // 0x18
		::System::String* m_PressedTrigger; // 0x20
		::System::String* m_SelectedTrigger; // 0x28
		::System::String* m_DisabledTrigger; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS__CTOR_OFFSET))(this);
		}

		::System::String* get_normalTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_NORMALTRIGGER_OFFSET))(this);
		}

		::System::Void set_normalTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_NORMALTRIGGER_OFFSET))(this, a1);
		}

		::System::String* get_highlightedTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_HIGHLIGHTEDTRIGGER_OFFSET))(this);
		}

		::System::Void set_highlightedTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_HIGHLIGHTEDTRIGGER_OFFSET))(this, a1);
		}

		::System::String* get_pressedTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_PRESSEDTRIGGER_OFFSET))(this);
		}

		::System::Void set_pressedTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_PRESSEDTRIGGER_OFFSET))(this, a1);
		}

		::System::String* get_selectedTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_SELECTEDTRIGGER_OFFSET))(this);
		}

		::System::Void set_selectedTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_SELECTEDTRIGGER_OFFSET))(this, a1);
		}

		::System::String* get_disabledTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_DISABLEDTRIGGER_OFFSET))(this);
		}

		::System::Void set_disabledTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_DISABLEDTRIGGER_OFFSET))(this, a1);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
