#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_DISABLEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C3112A0)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_HIGHLIGHTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C311250)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_NORMALTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C311230)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_PRESSEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C311270)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_SELECTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C311280)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_HIGHLIGHTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C311260)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_NORMALTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C311240)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_SELECTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C311290)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3112B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int AnimationTriggers_TypeDefinitionIndex = 8336;

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
