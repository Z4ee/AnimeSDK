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

#define UNITYENGINE_GUISTYLE_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B307C60)
#define UNITYENGINE_GUISTYLE_CALCMINMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1B307C70)
#define UNITYENGINE_GUISTYLE_CALCSIZEWITHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B302BD0)
#define UNITYENGINE_GUISTYLE_CALCSIZE_OFFSET UNITYSDK_OFFSET(0x1B2F5B40)
#define UNITYENGINE_GUISTYLE_DRAWCURSOR_OFFSET UNITYSDK_OFFSET(0x1B3075F0)
#define UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_1_OFFSET UNITYSDK_OFFSET(0x1B307A60)
#define UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_2_OFFSET UNITYSDK_OFFSET(0x1B307BB0)
#define UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_OFFSET UNITYSDK_OFFSET(0x1B3077C0)
#define UNITYENGINE_GUISTYLE_DRAW_1_OFFSET UNITYSDK_OFFSET(0x1B2F5580)
#define UNITYENGINE_GUISTYLE_DRAW_2_OFFSET UNITYSDK_OFFSET(0x1B2F7740)
#define UNITYENGINE_GUISTYLE_DRAW_3_OFFSET UNITYSDK_OFFSET(0x1B2F2EB0)
#define UNITYENGINE_GUISTYLE_DRAW_4_OFFSET UNITYSDK_OFFSET(0x1B2F0960)
#define UNITYENGINE_GUISTYLE_DRAW_5_OFFSET UNITYSDK_OFFSET(0x1B307520)
#define UNITYENGINE_GUISTYLE_DRAW_OFFSET UNITYSDK_OFFSET(0x1B2F8A70)
#define UNITYENGINE_GUISTYLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B307170)
#define UNITYENGINE_GUISTYLE_GETCURSORPIXELPOSITION_OFFSET UNITYSDK_OFFSET(0x1B307BF0)
#define UNITYENGINE_GUISTYLE_GETCURSORSTRINGINDEX_OFFSET UNITYSDK_OFFSET(0x1B307C30)
#define UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET UNITYSDK_OFFSET(0x1B306DA0)
#define UNITYENGINE_GUISTYLE_GETSTYLESTATEPTR_OFFSET UNITYSDK_OFFSET(0x1B306D90)
#define UNITYENGINE_GUISTYLE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B3072C0)
#define UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306CF0)
#define UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_OFFSET UNITYSDK_OFFSET(0x1B306CC0)
#define UNITYENGINE_GUISTYLE_GET_FIXEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B2F5660)
#define UNITYENGINE_GUISTYLE_GET_FIXEDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B2F5650)
#define UNITYENGINE_GUISTYLE_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1B2F35C0)
#define UNITYENGINE_GUISTYLE_GET_HOVER_OFFSET UNITYSDK_OFFSET(0x1B307260)
#define UNITYENGINE_GUISTYLE_GET_IMAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B306C70)
#define UNITYENGINE_GUISTYLE_GET_ISHEIGHTDEPENDANTONWIDTH_OFFSET UNITYSDK_OFFSET(0x1B302A90)
#define UNITYENGINE_GUISTYLE_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B307440)
#define UNITYENGINE_GUISTYLE_GET_MARGIN_OFFSET UNITYSDK_OFFSET(0x1B2F4FA0)
#define UNITYENGINE_GUISTYLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B2F61A0)
#define UNITYENGINE_GUISTYLE_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1B2F72E0)
#define UNITYENGINE_GUISTYLE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1B3066D0)
#define UNITYENGINE_GUISTYLE_GET_ONACTIVE_OFFSET UNITYSDK_OFFSET(0x1B3073E0)
#define UNITYENGINE_GUISTYLE_GET_ONHOVER_OFFSET UNITYSDK_OFFSET(0x1B307380)
#define UNITYENGINE_GUISTYLE_GET_ONNORMAL_OFFSET UNITYSDK_OFFSET(0x1B307320)
#define UNITYENGINE_GUISTYLE_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1B2FF4A0)
#define UNITYENGINE_GUISTYLE_GET_RAWNAME_OFFSET UNITYSDK_OFFSET(0x1B306C50)
#define UNITYENGINE_GUISTYLE_GET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B2FE410)
#define UNITYENGINE_GUISTYLE_GET_STRETCHWIDTH_OFFSET UNITYSDK_OFFSET(0x1B2FE400)
#define UNITYENGINE_GUISTYLE_GET_WORDWRAP_OFFSET UNITYSDK_OFFSET(0x1B306C90)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B306F50)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306F90)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1B306F60)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306F40)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B306F10)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306F00)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_OFFSET UNITYSDK_OFFSET(0x1B306ED0)
#define UNITYENGINE_GUISTYLE_INTERNAL_COPY_OFFSET UNITYSDK_OFFSET(0x1B306D70)
#define UNITYENGINE_GUISTYLE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B306D60)
#define UNITYENGINE_GUISTYLE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B306D80)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306DF0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET UNITYSDK_OFFSET(0x1B306DE0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAWCURSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306E10)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAWCURSOR_OFFSET UNITYSDK_OFFSET(0x1B306E00)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAWWITHTEXTSELECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306E30)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAWWITHTEXTSELECTION_OFFSET UNITYSDK_OFFSET(0x1B306E20)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306DD0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET UNITYSDK_OFFSET(0x1B306DC0)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORFLASHOFFSET_OFFSET UNITYSDK_OFFSET(0x1B306FB0)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306E70)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_OFFSET UNITYSDK_OFFSET(0x1B306E40)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306EA0)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_OFFSET UNITYSDK_OFFSET(0x1B306E80)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETLINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B306DB0)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306EC0)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_OFFSET UNITYSDK_OFFSET(0x1B306EB0)
#define UNITYENGINE_GUISTYLE_SETDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0x1B303A10)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306FA0)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_OFFSET UNITYSDK_OFFSET(0x1B2F5610)
#define UNITYENGINE_GUISTYLE_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B306C80)
#define UNITYENGINE_GUISTYLE_SET_CLIPPING_OFFSET UNITYSDK_OFFSET(0x1B306CB0)
#define UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306D20)
#define UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_OFFSET UNITYSDK_OFFSET(0x1B306D00)
#define UNITYENGINE_GUISTYLE_SET_INTERNAL_CLIPOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B306D50)
#define UNITYENGINE_GUISTYLE_SET_INTERNAL_CLIPOFFSET_OFFSET UNITYSDK_OFFSET(0x1B306D30)
#define UNITYENGINE_GUISTYLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B304E60)
#define UNITYENGINE_GUISTYLE_SET_RAWNAME_OFFSET UNITYSDK_OFFSET(0x1B306C60)
#define UNITYENGINE_GUISTYLE_SET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3066C0)
#define UNITYENGINE_GUISTYLE_SET_STRETCHWIDTH_OFFSET UNITYSDK_OFFSET(0x1B302F20)
#define UNITYENGINE_GUISTYLE_SET_WORDWRAP_OFFSET UNITYSDK_OFFSET(0x1B306CA0)
#define UNITYENGINE_GUISTYLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B307CB0)
#define UNITYENGINE_GUISTYLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B307E10)
#define UNITYENGINE_GUISTYLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B306FC0)
#define UNITYENGINE_GUISTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B302EE0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStyle_TypeDefinitionIndex = 5226;

	class GUIStyle : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIStyle** StaticGet_s_None()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(GUIStyle_TypeDefinitionIndex)->GetStaticField(0x37590);
		}
		static ::System::Boolean* StaticGet_showKeyboardFocus()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GUIStyle_TypeDefinitionIndex)->GetStaticField(0xB1A0);
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

		::System::Void _ctor_1(::UnityEngine::GUIStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE__CCTOR_OFFSET))();
		}

		::System::String* get_rawName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_RAWNAME_OFFSET))(this);
		}

		::System::Void set_rawName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_RAWNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FONT_OFFSET))(this);
		}

		::UnityEngine::ImagePosition get_imagePosition()
		{
			return ((::UnityEngine::ImagePosition(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_IMAGEPOSITION_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::TextAnchor a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_ALIGNMENT_OFFSET))(this, a1);
		}

		::System::Boolean get_wordWrap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_WORDWRAP_OFFSET))(this);
		}

		::System::Void set_wordWrap(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_WORDWRAP_OFFSET))(this, a1);
		}

		::System::Void set_clipping(::UnityEngine::TextClipping a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextClipping))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_CLIPPING_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_contentOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_OFFSET))(this);
		}

		::System::Void set_contentOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_OFFSET))(this, a1);
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

		::System::Void set_stretchWidth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_STRETCHWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_stretchHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_STRETCHHEIGHT_OFFSET))(this);
		}

		::System::Void set_stretchHeight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_STRETCHHEIGHT_OFFSET))(this, a1);
		}

		::System::Void set_Internal_clipOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_INTERNAL_CLIPOFFSET_OFFSET))(this, a1);
		}

		static ::System::IntPtr Internal_Create(::UnityEngine::GUIStyle* a1)
		{
			return ((::System::IntPtr(*)(::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CREATE_OFFSET))(a1);
		}

		static ::System::IntPtr Internal_Copy(::UnityEngine::GUIStyle* a1, ::UnityEngine::GUIStyle* a2)
		{
			return ((::System::IntPtr(*)(::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_COPY_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DESTROY_OFFSET))(a1);
		}

		::System::IntPtr GetStyleStatePtr(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETSTYLESTATEPTR_OFFSET))(this, a1);
		}

		::System::IntPtr GetRectOffsetPtr(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET))(this, a1);
		}

		static ::System::Single Internal_GetLineHeight(::System::IntPtr a1)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETLINEHEIGHT_OFFSET))(a1);
		}

		::System::Void Internal_Draw(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Internal_Draw2(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Internal_DrawCursor(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAWCURSOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Internal_DrawWithTextSelection(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Int32 a9, ::UnityEngine::Color a10, ::UnityEngine::Color a11)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAWWITHTEXTSELECTION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::UnityEngine::Vector2 Internal_GetCursorPixelPosition(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Internal_GetCursorStringIndex(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Internal_GetSelectedRenderedText(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 Internal_CalcSize(::UnityEngine::GUIContent* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Internal_CalcSizeWithConstraints(::UnityEngine::GUIContent* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_OFFSET))(this, a1, a2);
		}

		::System::Single Internal_CalcHeight(::UnityEngine::GUIContent* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GUIContent*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCHEIGHT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Internal_CalcMinMaxWidth(::UnityEngine::GUIContent* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_OFFSET))(this, a1);
		}

		static ::System::Void SetMouseTooltip(::System::String* a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_OFFSET))(a1, a2);
		}

		static ::System::Single Internal_GetCursorFlashOffset()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORFLASHOFFSET_OFFSET))();
		}

		static ::System::Void SetDefaultFont(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETDEFAULTFONT_OFFSET))(a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_FINALIZE_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_NAME_OFFSET))(this, a1);
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

		::System::Void Draw(::UnityEngine::Rect a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Draw_1(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Draw_2(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Draw_3(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Draw_4(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Draw_5(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void DrawCursor(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAWCURSOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DrawWithTextSelection(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::UnityEngine::Color a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void DrawWithTextSelection_1(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DrawWithTextSelection_2(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAWWITHTEXTSELECTION_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::GUIStyle* get_none()
		{
			return ((::UnityEngine::GUIStyle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NONE_OFFSET))();
		}

		::UnityEngine::Vector2 GetCursorPixelPosition(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETCURSORPIXELPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetCursorStringIndex(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETCURSORSTRINGINDEX_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 CalcSize(::UnityEngine::GUIContent* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 CalcSizeWithConstraints(::UnityEngine::GUIContent* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCSIZEWITHCONSTRAINTS_OFFSET))(this, a1, a2);
		}

		::System::Single CalcHeight(::UnityEngine::GUIContent* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GUIContent*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCHEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_isHeightDependantOnWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ISHEIGHTDEPENDANTONWIDTH_OFFSET))(this);
		}

		::System::Void CalcMinMaxWidth(::UnityEngine::GUIContent* a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCMINMAXWIDTH_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_TOSTRING_OFFSET))(this);
		}

		::System::Void get_contentOffset_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_contentOffset_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_Internal_clipOffset_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_INTERNAL_CLIPOFFSET_INJECTED_OFFSET))(this, a1);
		}

		::System::Void Internal_Draw_Injected(::UnityEngine::Rect& a1, ::UnityEngine::GUIContent* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Internal_Draw2_Injected(::UnityEngine::Rect& a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Internal_DrawCursor_Injected(::UnityEngine::Rect& a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAWCURSOR_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Internal_DrawWithTextSelection_Injected(::UnityEngine::Rect& a1, ::UnityEngine::GUIContent* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Int32 a9, ::UnityEngine::Color& a10, ::UnityEngine::Color& a11)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAWWITHTEXTSELECTION_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void Internal_GetCursorPixelPosition_Injected(::UnityEngine::Rect& a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Internal_GetCursorStringIndex_Injected(::UnityEngine::Rect& a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::Vector2& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Internal_GetSelectedRenderedText_Injected(::UnityEngine::Rect& a1, ::UnityEngine::GUIContent* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Internal_CalcSize_Injected(::UnityEngine::GUIContent* a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void Internal_CalcSizeWithConstraints_Injected(::UnityEngine::GUIContent* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Internal_CalcMinMaxWidth_Injected(::UnityEngine::GUIContent* a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_INJECTED_OFFSET))(this, a1, a2);
		}

		static ::System::Void SetMouseTooltip_Injected(::System::String* a1, ::UnityEngine::Rect& a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_INJECTED_OFFSET))(a1, a2);
		}
	};
}
