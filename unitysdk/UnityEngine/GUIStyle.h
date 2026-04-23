#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ImagePosition.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/TextClipping.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyleState; }
namespace UnityEngine { class RectOffset; }

#define UNITYENGINE_GUISTYLE_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4B9700)
#define UNITYENGINE_GUISTYLE_CALCMINMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1A4B9710)
#define UNITYENGINE_GUISTYLE_CALCSIZEWITHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A4B4400)
#define UNITYENGINE_GUISTYLE_CALCSIZE_OFFSET UNITYSDK_OFFSET(0x1A4A7010)
#define UNITYENGINE_GUISTYLE_DRAWCURSOR_OFFSET UNITYSDK_OFFSET(0x1A4B9090)
#define UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_1_OFFSET UNITYSDK_OFFSET(0x1A4B9500)
#define UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_2_OFFSET UNITYSDK_OFFSET(0x1A4B9650)
#define UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_OFFSET UNITYSDK_OFFSET(0x1A4B9260)
#define UNITYENGINE_GUISTYLE_DRAW_1_OFFSET UNITYSDK_OFFSET(0x1A4A69F0)
#define UNITYENGINE_GUISTYLE_DRAW_2_OFFSET UNITYSDK_OFFSET(0x1A4A8C80)
#define UNITYENGINE_GUISTYLE_DRAW_3_OFFSET UNITYSDK_OFFSET(0x1A4A4310)
#define UNITYENGINE_GUISTYLE_DRAW_4_OFFSET UNITYSDK_OFFSET(0x1A4A1D70)
#define UNITYENGINE_GUISTYLE_DRAW_5_OFFSET UNITYSDK_OFFSET(0x1A4B8FA0)
#define UNITYENGINE_GUISTYLE_DRAW_OFFSET UNITYSDK_OFFSET(0x1A4A9FD0)
#define UNITYENGINE_GUISTYLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4B8BF0)
#define UNITYENGINE_GUISTYLE_GETCURSORPIXELPOSITION_OFFSET UNITYSDK_OFFSET(0x1A4B9690)
#define UNITYENGINE_GUISTYLE_GETCURSORSTRINGINDEX_OFFSET UNITYSDK_OFFSET(0x1A4B96D0)
#define UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET UNITYSDK_OFFSET(0x1A4B8820)
#define UNITYENGINE_GUISTYLE_GETSTYLESTATEPTR_OFFSET UNITYSDK_OFFSET(0x1A4B8810)
#define UNITYENGINE_GUISTYLE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1A4B8D40)
#define UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B8770)
#define UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A4B8740)
#define UNITYENGINE_GUISTYLE_GET_FIXEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4A6AD0)
#define UNITYENGINE_GUISTYLE_GET_FIXEDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A4A6AC0)
#define UNITYENGINE_GUISTYLE_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1A4A4A20)
#define UNITYENGINE_GUISTYLE_GET_HOVER_OFFSET UNITYSDK_OFFSET(0x1A4B8CE0)
#define UNITYENGINE_GUISTYLE_GET_IMAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A4B86F0)
#define UNITYENGINE_GUISTYLE_GET_ISHEIGHTDEPENDANTONWIDTH_OFFSET UNITYSDK_OFFSET(0x1A4B42C0)
#define UNITYENGINE_GUISTYLE_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4B8EC0)
#define UNITYENGINE_GUISTYLE_GET_MARGIN_OFFSET UNITYSDK_OFFSET(0x1A4A6410)
#define UNITYENGINE_GUISTYLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A4A7670)
#define UNITYENGINE_GUISTYLE_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1A4A8820)
#define UNITYENGINE_GUISTYLE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1A4B7F20)
#define UNITYENGINE_GUISTYLE_GET_ONACTIVE_OFFSET UNITYSDK_OFFSET(0x1A4B8E60)
#define UNITYENGINE_GUISTYLE_GET_ONHOVER_OFFSET UNITYSDK_OFFSET(0x1A4B8E00)
#define UNITYENGINE_GUISTYLE_GET_ONNORMAL_OFFSET UNITYSDK_OFFSET(0x1A4B8DA0)
#define UNITYENGINE_GUISTYLE_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1A4B0CB0)
#define UNITYENGINE_GUISTYLE_GET_RAWNAME_OFFSET UNITYSDK_OFFSET(0x1A4B86D0)
#define UNITYENGINE_GUISTYLE_GET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4AFB00)
#define UNITYENGINE_GUISTYLE_GET_STRETCHWIDTH_OFFSET UNITYSDK_OFFSET(0x1A4AFAF0)
#define UNITYENGINE_GUISTYLE_GET_WORDWRAP_OFFSET UNITYSDK_OFFSET(0x1A4B8710)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4B89D0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B8A10)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1A4B89E0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B89C0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A4B8990)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B8980)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_OFFSET UNITYSDK_OFFSET(0x1A4B8950)
#define UNITYENGINE_GUISTYLE_INTERNAL_COPY_OFFSET UNITYSDK_OFFSET(0x1A4B87F0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4B87E0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1A4B8800)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B8870)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET UNITYSDK_OFFSET(0x1A4B8860)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAWCURSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B8890)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAWCURSOR_OFFSET UNITYSDK_OFFSET(0x1A4B8880)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAWWITHTEXTSELECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B88B0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAWWITHTEXTSELECTION_OFFSET UNITYSDK_OFFSET(0x1A4B88A0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B8850)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET UNITYSDK_OFFSET(0x1A4B8840)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORFLASHOFFSET_OFFSET UNITYSDK_OFFSET(0x1A4B8A30)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B88F0)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_OFFSET UNITYSDK_OFFSET(0x1A4B88C0)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B8920)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_OFFSET UNITYSDK_OFFSET(0x1A4B8900)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETLINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4B8830)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B8940)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_OFFSET UNITYSDK_OFFSET(0x1A4B8930)
#define UNITYENGINE_GUISTYLE_SETDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0x1A4B5220)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B8A20)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_OFFSET UNITYSDK_OFFSET(0x1A4A6A80)
#define UNITYENGINE_GUISTYLE_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A4B8700)
#define UNITYENGINE_GUISTYLE_SET_CLIPPING_OFFSET UNITYSDK_OFFSET(0x1A4B8730)
#define UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B87A0)
#define UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A4B8780)
#define UNITYENGINE_GUISTYLE_SET_INTERNAL_CLIPOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4B87D0)
#define UNITYENGINE_GUISTYLE_SET_INTERNAL_CLIPOFFSET_OFFSET UNITYSDK_OFFSET(0x1A4B87B0)
#define UNITYENGINE_GUISTYLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A4B6670)
#define UNITYENGINE_GUISTYLE_SET_RAWNAME_OFFSET UNITYSDK_OFFSET(0x1A4B86E0)
#define UNITYENGINE_GUISTYLE_SET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4B7F10)
#define UNITYENGINE_GUISTYLE_SET_STRETCHWIDTH_OFFSET UNITYSDK_OFFSET(0x1A4B46F0)
#define UNITYENGINE_GUISTYLE_SET_WORDWRAP_OFFSET UNITYSDK_OFFSET(0x1A4B8720)
#define UNITYENGINE_GUISTYLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A4B9750)
#define UNITYENGINE_GUISTYLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B98C0)
#define UNITYENGINE_GUISTYLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4B8A40)
#define UNITYENGINE_GUISTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B46B0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStyle_TypeDefinitionIndex = 5132;

	class GUIStyle : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIStyle** StaticGet_s_None()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(GUIStyle_TypeDefinitionIndex)->GetStaticField(0x16340);
		}
		static ::System::Boolean* StaticGet_showKeyboardFocus()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GUIStyle_TypeDefinitionIndex)->GetStaticField(0x6430);
		}
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::GUIStyleState* m_Normal; // 0x18
		::UnityEngine::GUIStyleState* m_Hover; // 0x20
		::UnityEngine::GUIStyleState* m_Active; // 0x28
		::UnityEngine::GUIStyleState* m_Focused; // 0x30
		::UnityEngine::GUIStyleState* m_OnNormal; // 0x38
		::UnityEngine::GUIStyleState* m_OnHover; // 0x40
		::UnityEngine::GUIStyleState* m_OnActive; // 0x48
		::UnityEngine::GUIStyleState* m_OnFocused; // 0x50
		::UnityEngine::RectOffset* m_Border; // 0x58
		::UnityEngine::RectOffset* m_Padding; // 0x60
		::UnityEngine::RectOffset* m_Margin; // 0x68
		::UnityEngine::RectOffset* m_Overflow; // 0x70
		::System::String* m_Name; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::GUIStyle* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE__CCTOR_OFFSET))();
		}

		::System::String* get_rawName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_RAWNAME_OFFSET))(this);
		}

		::System::Void set_rawName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_RAWNAME_OFFSET))(this, value);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FONT_OFFSET))(this);
		}

		::UnityEngine::ImagePosition get_imagePosition()
		{
			return ((::UnityEngine::ImagePosition(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_IMAGEPOSITION_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::TextAnchor value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Boolean get_wordWrap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_WORDWRAP_OFFSET))(this);
		}

		::System::Void set_wordWrap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_WORDWRAP_OFFSET))(this, value);
		}

		::System::Void set_clipping(::UnityEngine::TextClipping value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextClipping))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_CLIPPING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_contentOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_OFFSET))(this);
		}

		::System::Void set_contentOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_OFFSET))(this, value);
		}

		::System::Single get_fixedWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FIXEDWIDTH_OFFSET))(this);
		}

		::System::Single get_fixedHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FIXEDHEIGHT_OFFSET))(this);
		}

		::System::Boolean get_stretchWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_STRETCHWIDTH_OFFSET))(this);
		}

		::System::Void set_stretchWidth(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_STRETCHWIDTH_OFFSET))(this, value);
		}

		::System::Boolean get_stretchHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_STRETCHHEIGHT_OFFSET))(this);
		}

		::System::Void set_stretchHeight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_STRETCHHEIGHT_OFFSET))(this, value);
		}

		::System::Void set_Internal_clipOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_INTERNAL_CLIPOFFSET_OFFSET))(this, value);
		}

		static ::System::IntPtr Internal_Create(::UnityEngine::GUIStyle* self)
		{
			return ((::System::IntPtr(*)(::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CREATE_OFFSET))(self);
		}

		static ::System::IntPtr Internal_Copy(::UnityEngine::GUIStyle* self, ::UnityEngine::GUIStyle* other)
		{
			return ((::System::IntPtr(*)(::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_COPY_OFFSET))(self, other);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr self)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DESTROY_OFFSET))(self);
		}

		::System::IntPtr GetStyleStatePtr(::System::Int32 idx)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETSTYLESTATEPTR_OFFSET))(this, idx);
		}

		::System::IntPtr GetRectOffsetPtr(::System::Int32 idx)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET))(this, idx);
		}

		static ::System::Single Internal_GetLineHeight(::System::IntPtr target)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETLINEHEIGHT_OFFSET))(target);
		}

		::System::Void Internal_Draw(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET))(this, screenRect, content, isHover, isActive, on, hasKeyboardFocus);
		}

		::System::Void Internal_Draw2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET))(this, position, content, controlID, on);
		}

		::System::Void Internal_DrawCursor(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 pos, ::UnityEngine::Color cursorColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAWCURSOR_OFFSET))(this, position, content, pos, cursorColor);
		}

		::System::Void Internal_DrawWithTextSelection(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus, ::System::Boolean drawSelectionAsComposition, ::System::Int32 cursorFirst, ::System::Int32 cursorLast, ::UnityEngine::Color cursorColor, ::UnityEngine::Color selectionColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAWWITHTEXTSELECTION_OFFSET))(this, screenRect, content, isHover, isActive, on, hasKeyboardFocus, drawSelectionAsComposition, cursorFirst, cursorLast, cursorColor, selectionColor);
		}

		::UnityEngine::Vector2 Internal_GetCursorPixelPosition(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 cursorStringIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_OFFSET))(this, position, content, cursorStringIndex);
		}

		::System::Int32 Internal_GetCursorStringIndex(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 cursorPixelPosition)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_OFFSET))(this, position, content, cursorPixelPosition);
		}

		::System::String* Internal_GetSelectedRenderedText(::UnityEngine::Rect localPosition, ::UnityEngine::GUIContent* mContent, ::System::Int32 selectIndex, ::System::Int32 cursorIndex)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_OFFSET))(this, localPosition, mContent, selectIndex, cursorIndex);
		}

		::UnityEngine::Vector2 Internal_CalcSize(::UnityEngine::GUIContent* content)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_OFFSET))(this, content);
		}

		::UnityEngine::Vector2 Internal_CalcSizeWithConstraints(::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 maxSize)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_OFFSET))(this, content, maxSize);
		}

		::System::Single Internal_CalcHeight(::UnityEngine::GUIContent* content, ::System::Single width)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GUIContent*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCHEIGHT_OFFSET))(this, content, width);
		}

		::UnityEngine::Vector2 Internal_CalcMinMaxWidth(::UnityEngine::GUIContent* content)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_OFFSET))(this, content);
		}

		static ::System::Void SetMouseTooltip(::System::String* tooltip, ::UnityEngine::Rect screenRect)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_OFFSET))(tooltip, screenRect);
		}

		static ::System::Single Internal_GetCursorFlashOffset()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORFLASHOFFSET_OFFSET))();
		}

		static ::System::Void SetDefaultFont(::UnityEngine::Font* font)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETDEFAULTFONT_OFFSET))(font);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_FINALIZE_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_NAME_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyleState* get_normal()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NORMAL_OFFSET))(this);
		}

		::UnityEngine::GUIStyleState* get_hover()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_HOVER_OFFSET))(this);
		}

		::UnityEngine::GUIStyleState* get_active()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ACTIVE_OFFSET))(this);
		}

		::UnityEngine::GUIStyleState* get_onNormal()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ONNORMAL_OFFSET))(this);
		}

		::UnityEngine::GUIStyleState* get_onHover()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ONHOVER_OFFSET))(this);
		}

		::UnityEngine::GUIStyleState* get_onActive()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ONACTIVE_OFFSET))(this);
		}

		::UnityEngine::RectOffset* get_margin()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_MARGIN_OFFSET))(this);
		}

		::UnityEngine::RectOffset* get_padding()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_PADDING_OFFSET))(this);
		}

		::System::Single get_lineHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_LINEHEIGHT_OFFSET))(this);
		}

		::System::Void Draw(::UnityEngine::Rect position, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_OFFSET))(this, position, isHover, isActive, on, hasKeyboardFocus);
		}

		::System::Void Draw_1(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_1_OFFSET))(this, position, content, isHover, isActive, on, hasKeyboardFocus);
		}

		::System::Void Draw_2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_2_OFFSET))(this, position, content, controlID);
		}

		::System::Void Draw_3(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_3_OFFSET))(this, position, content, controlID, on);
		}

		::System::Void Draw_4(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Boolean on, ::System::Boolean hover)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_4_OFFSET))(this, position, content, controlID, on, hover);
		}

		::System::Void Draw_5(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlId, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_5_OFFSET))(this, position, content, controlId, isHover, isActive, on, hasKeyboardFocus);
		}

		::System::Void DrawCursor(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Int32 character)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAWCURSOR_OFFSET))(this, position, content, controlID, character);
		}

		::System::Void DrawWithTextSelection(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Boolean isActive, ::System::Boolean hasKeyboardFocus, ::System::Int32 firstSelectedCharacter, ::System::Int32 lastSelectedCharacter, ::System::Boolean drawSelectionAsComposition, ::UnityEngine::Color selectionColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_OFFSET))(this, position, content, isActive, hasKeyboardFocus, firstSelectedCharacter, lastSelectedCharacter, drawSelectionAsComposition, selectionColor);
		}

		::System::Void DrawWithTextSelection_1(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Int32 firstSelectedCharacter, ::System::Int32 lastSelectedCharacter, ::System::Boolean drawSelectionAsComposition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_1_OFFSET))(this, position, content, controlID, firstSelectedCharacter, lastSelectedCharacter, drawSelectionAsComposition);
		}

		::System::Void DrawWithTextSelection_2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Int32 firstSelectedCharacter, ::System::Int32 lastSelectedCharacter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_2_OFFSET))(this, position, content, controlID, firstSelectedCharacter, lastSelectedCharacter);
		}

		static ::UnityEngine::GUIStyle* get_none()
		{
			return ((::UnityEngine::GUIStyle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NONE_OFFSET))();
		}

		::UnityEngine::Vector2 GetCursorPixelPosition(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 cursorStringIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETCURSORPIXELPOSITION_OFFSET))(this, position, content, cursorStringIndex);
		}

		::System::Int32 GetCursorStringIndex(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 cursorPixelPosition)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETCURSORSTRINGINDEX_OFFSET))(this, position, content, cursorPixelPosition);
		}

		::UnityEngine::Vector2 CalcSize(::UnityEngine::GUIContent* content)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCSIZE_OFFSET))(this, content);
		}

		::UnityEngine::Vector2 CalcSizeWithConstraints(::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 constraints)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCSIZEWITHCONSTRAINTS_OFFSET))(this, content, constraints);
		}

		::System::Single CalcHeight(::UnityEngine::GUIContent* content, ::System::Single width)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GUIContent*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCHEIGHT_OFFSET))(this, content, width);
		}

		::System::Boolean get_isHeightDependantOnWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ISHEIGHTDEPENDANTONWIDTH_OFFSET))(this);
		}

		::System::Void CalcMinMaxWidth(::UnityEngine::GUIContent* content, ::System::Single& minWidth, ::System::Single& maxWidth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCMINMAXWIDTH_OFFSET))(this, content, minWidth, maxWidth);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_TOSTRING_OFFSET))(this);
		}

		::System::Void get_contentOffset_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_contentOffset_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_Internal_clipOffset_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_INTERNAL_CLIPOFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Void Internal_Draw_Injected(::UnityEngine::Rect& screenRect, ::UnityEngine::GUIContent* content, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET))(this, screenRect, content, isHover, isActive, on, hasKeyboardFocus);
		}

		::System::Void Internal_Draw2_Injected(::UnityEngine::Rect& position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET))(this, position, content, controlID, on);
		}

		::System::Void Internal_DrawCursor_Injected(::UnityEngine::Rect& position, ::UnityEngine::GUIContent* content, ::System::Int32 pos, ::UnityEngine::Color& cursorColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAWCURSOR_INJECTED_OFFSET))(this, position, content, pos, cursorColor);
		}

		::System::Void Internal_DrawWithTextSelection_Injected(::UnityEngine::Rect& screenRect, ::UnityEngine::GUIContent* content, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus, ::System::Boolean drawSelectionAsComposition, ::System::Int32 cursorFirst, ::System::Int32 cursorLast, ::UnityEngine::Color& cursorColor, ::UnityEngine::Color& selectionColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAWWITHTEXTSELECTION_INJECTED_OFFSET))(this, screenRect, content, isHover, isActive, on, hasKeyboardFocus, drawSelectionAsComposition, cursorFirst, cursorLast, cursorColor, selectionColor);
		}

		::System::Void Internal_GetCursorPixelPosition_Injected(::UnityEngine::Rect& position, ::UnityEngine::GUIContent* content, ::System::Int32 cursorStringIndex, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_INJECTED_OFFSET))(this, position, content, cursorStringIndex, ret);
		}

		::System::Int32 Internal_GetCursorStringIndex_Injected(::UnityEngine::Rect& position, ::UnityEngine::GUIContent* content, ::UnityEngine::Vector2& cursorPixelPosition)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_INJECTED_OFFSET))(this, position, content, cursorPixelPosition);
		}

		::System::String* Internal_GetSelectedRenderedText_Injected(::UnityEngine::Rect& localPosition, ::UnityEngine::GUIContent* mContent, ::System::Int32 selectIndex, ::System::Int32 cursorIndex)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_INJECTED_OFFSET))(this, localPosition, mContent, selectIndex, cursorIndex);
		}

		::System::Void Internal_CalcSize_Injected(::UnityEngine::GUIContent* content, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_INJECTED_OFFSET))(this, content, ret);
		}

		::System::Void Internal_CalcSizeWithConstraints_Injected(::UnityEngine::GUIContent* content, ::UnityEngine::Vector2& maxSize, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_INJECTED_OFFSET))(this, content, maxSize, ret);
		}

		::System::Void Internal_CalcMinMaxWidth_Injected(::UnityEngine::GUIContent* content, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_INJECTED_OFFSET))(this, content, ret);
		}

		static ::System::Void SetMouseTooltip_Injected(::System::String* tooltip, ::UnityEngine::Rect& screenRect)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_INJECTED_OFFSET))(tooltip, screenRect);
		}
	};
}
