#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_DISABLEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E65ADF0)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_HIGHLIGHTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E65ADA0)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_NORMALTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E65AD80)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_PRESSEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E65ADC0)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_SELECTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E65ADD0)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_HIGHLIGHTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E65ADB0)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_NORMALTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E65AD90)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_SELECTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E65ADE0)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E65AE00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int AnimationTriggers_TypeDefinitionIndex = 18844;

	class AnimationTriggers : public ::System::Object
	{
	public:
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

		::System::Void set_normalTrigger(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_NORMALTRIGGER_OFFSET))(this, value);
		}

		::System::String* get_highlightedTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_HIGHLIGHTEDTRIGGER_OFFSET))(this);
		}

		::System::Void set_highlightedTrigger(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_HIGHLIGHTEDTRIGGER_OFFSET))(this, value);
		}

		::System::String* get_pressedTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_PRESSEDTRIGGER_OFFSET))(this);
		}

		::System::String* get_selectedTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_SELECTEDTRIGGER_OFFSET))(this);
		}

		::System::Void set_selectedTrigger(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_SELECTEDTRIGGER_OFFSET))(this, value);
		}

		::System::String* get_disabledTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_DISABLEDTRIGGER_OFFSET))(this);
		}
	};
}
