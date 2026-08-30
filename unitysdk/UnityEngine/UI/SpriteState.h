#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_UI_SPRITESTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BD54A0)
#define UNITYENGINE_UI_SPRITESTATE_GET_DISABLEDSPRITE_OFFSET UNITYSDK_OFFSET(0x2CFE0)
#define UNITYENGINE_UI_SPRITESTATE_GET_HIGHLIGHTEDSPRITE_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define UNITYENGINE_UI_SPRITESTATE_GET_PRESSEDSPRITE_OFFSET UNITYSDK_OFFSET(0x6020)
#define UNITYENGINE_UI_SPRITESTATE_GET_SELECTEDSPRITE_OFFSET UNITYSDK_OFFSET(0x14420)
#define UNITYENGINE_UI_SPRITESTATE_SET_DISABLEDSPRITE_OFFSET UNITYSDK_OFFSET(0x2CFF0)
#define UNITYENGINE_UI_SPRITESTATE_SET_HIGHLIGHTEDSPRITE_OFFSET UNITYSDK_OFFSET(0xC610)
#define UNITYENGINE_UI_SPRITESTATE_SET_PRESSEDSPRITE_OFFSET UNITYSDK_OFFSET(0x9500)
#define UNITYENGINE_UI_SPRITESTATE_SET_SELECTEDSPRITE_OFFSET UNITYSDK_OFFSET(0xB7B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SpriteState_TypeDefinitionIndex = 6851;

	struct alignas(8) SpriteState
	{
		::UnityEngine::Sprite* m_HighlightedSprite; // 0x10
		::UnityEngine::Sprite* m_PressedSprite; // 0x18
		::UnityEngine::Sprite* m_SelectedSprite; // 0x20
		::UnityEngine::Sprite* m_DisabledSprite; // 0x28

		::UnityEngine::Sprite* get_highlightedSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_HIGHLIGHTEDSPRITE_OFFSET))(this);
		}

		::System::Void set_highlightedSprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_HIGHLIGHTEDSPRITE_OFFSET))(this, a1);
		}

		::UnityEngine::Sprite* get_pressedSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_PRESSEDSPRITE_OFFSET))(this);
		}

		::System::Void set_pressedSprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_PRESSEDSPRITE_OFFSET))(this, a1);
		}

		::UnityEngine::Sprite* get_selectedSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_SELECTEDSPRITE_OFFSET))(this);
		}

		::System::Void set_selectedSprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_SELECTEDSPRITE_OFFSET))(this, a1);
		}

		::UnityEngine::Sprite* get_disabledSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_DISABLEDSPRITE_OFFSET))(this);
		}

		::System::Void set_disabledSprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_DISABLEDSPRITE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::UI::SpriteState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_EQUALS_OFFSET))(this, a1);
		}
	};
}
