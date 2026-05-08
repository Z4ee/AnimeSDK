#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Object; }

#define UNITYENGINE_UI_COLORBLOCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9AF8B0)
#define UNITYENGINE_UI_COLORBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9AF790)
#define UNITYENGINE_UI_COLORBLOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9AF900)
#define UNITYENGINE_UI_COLORBLOCK_GET_COLORMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x744BF0)
#define UNITYENGINE_UI_COLORBLOCK_GET_DEFAULTCOLORBLOCK_OFFSET UNITYSDK_OFFSET(0x1BC6F8F0)
#define UNITYENGINE_UI_COLORBLOCK_GET_DISABLEDCOLOR_OFFSET UNITYSDK_OFFSET(0x6B0080)
#define UNITYENGINE_UI_COLORBLOCK_GET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0x9AF770)
#define UNITYENGINE_UI_COLORBLOCK_GET_HIGHLIGHTEDCOLOR_OFFSET UNITYSDK_OFFSET(0x3819B0)
#define UNITYENGINE_UI_COLORBLOCK_GET_NORMALCOLOR_OFFSET UNITYSDK_OFFSET(0x2E1000)
#define UNITYENGINE_UI_COLORBLOCK_GET_PRESSEDCOLOR_OFFSET UNITYSDK_OFFSET(0x777D20)
#define UNITYENGINE_UI_COLORBLOCK_GET_SELECTEDCOLOR_OFFSET UNITYSDK_OFFSET(0x4EB340)
#define UNITYENGINE_UI_COLORBLOCK_SET_COLORMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9AF760)
#define UNITYENGINE_UI_COLORBLOCK_SET_DISABLEDCOLOR_OFFSET UNITYSDK_OFFSET(0x6B0090)
#define UNITYENGINE_UI_COLORBLOCK_SET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0x9AF780)
#define UNITYENGINE_UI_COLORBLOCK_SET_HIGHLIGHTEDCOLOR_OFFSET UNITYSDK_OFFSET(0x3819C0)
#define UNITYENGINE_UI_COLORBLOCK_SET_NORMALCOLOR_OFFSET UNITYSDK_OFFSET(0x2E1100)
#define UNITYENGINE_UI_COLORBLOCK_SET_PRESSEDCOLOR_OFFSET UNITYSDK_OFFSET(0x777D30)
#define UNITYENGINE_UI_COLORBLOCK___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9AF910)
#define UNITYENGINE_UI_COLORBLOCK___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9AF9A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ColorBlock_TypeDefinitionIndex = 8343;

	struct alignas(4) ColorBlock
	{
		::UnityEngine::Color m_NormalColor; // 0x10
		::UnityEngine::Color m_HighlightedColor; // 0x20
		::UnityEngine::Color m_PressedColor; // 0x30
		::UnityEngine::Color m_SelectedColor; // 0x40
		::UnityEngine::Color m_DisabledColor; // 0x50
		::System::Single m_ColorMultiplier; // 0x60
		::System::Single m_FadeDuration; // 0x64

		::UnityEngine::Color get_normalColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_NORMALCOLOR_OFFSET))(this);
		}

		::System::Void set_normalColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_NORMALCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_highlightedColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_HIGHLIGHTEDCOLOR_OFFSET))(this);
		}

		::System::Void set_highlightedColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_HIGHLIGHTEDCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_pressedColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_PRESSEDCOLOR_OFFSET))(this);
		}

		::System::Void set_pressedColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_PRESSEDCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_selectedColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_SELECTEDCOLOR_OFFSET))(this);
		}

		::UnityEngine::Color get_disabledColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_DISABLEDCOLOR_OFFSET))(this);
		}

		::System::Void set_disabledColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_DISABLEDCOLOR_OFFSET))(this, value);
		}

		::System::Single get_colorMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_COLORMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_colorMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_COLORMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_fadeDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_FADEDURATION_OFFSET))(this);
		}

		::System::Void set_fadeDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_FADEDURATION_OFFSET))(this, value);
		}

		static ::UnityEngine::UI::ColorBlock get_defaultColorBlock()
		{
			return ((::UnityEngine::UI::ColorBlock(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_DEFAULTCOLORBLOCK_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::UI::ColorBlock other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::ColorBlock))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
