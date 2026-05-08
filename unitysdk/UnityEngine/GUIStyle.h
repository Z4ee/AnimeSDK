#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FontStyle.h"
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

#define UNITYENGINE_GUISTYLE_ASSIGNRECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1ACF62F0)
#define UNITYENGINE_GUISTYLE_ASSIGNSTYLESTATE_OFFSET UNITYSDK_OFFSET(0x1ACF62D0)
#define UNITYENGINE_GUISTYLE_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1ACF6E30)
#define UNITYENGINE_GUISTYLE_CALCMINMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1ACF6E40)
#define UNITYENGINE_GUISTYLE_CALCSIZEWITHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1ACF2290)
#define UNITYENGINE_GUISTYLE_CALCSIZE_OFFSET UNITYSDK_OFFSET(0x1ACF6E00)
#define UNITYENGINE_GUISTYLE_DRAW_1_OFFSET UNITYSDK_OFFSET(0x1ACE4C90)
#define UNITYENGINE_GUISTYLE_DRAW_2_OFFSET UNITYSDK_OFFSET(0x1ACE66A0)
#define UNITYENGINE_GUISTYLE_DRAW_3_OFFSET UNITYSDK_OFFSET(0x1ACE3920)
#define UNITYENGINE_GUISTYLE_DRAW_4_OFFSET UNITYSDK_OFFSET(0x1ACF6B90)
#define UNITYENGINE_GUISTYLE_DRAW_OFFSET UNITYSDK_OFFSET(0x1ACE7A10)
#define UNITYENGINE_GUISTYLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ACF64C0)
#define UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET UNITYSDK_OFFSET(0x1ACF62E0)
#define UNITYENGINE_GUISTYLE_GETSTYLESTATEPTR_OFFSET UNITYSDK_OFFSET(0x1ACF62C0)
#define UNITYENGINE_GUISTYLE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1ACF6690)
#define UNITYENGINE_GUISTYLE_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1ACF6140)
#define UNITYENGINE_GUISTYLE_GET_BORDER_OFFSET UNITYSDK_OFFSET(0x1ACF69F0)
#define UNITYENGINE_GUISTYLE_GET_CLIPPING_OFFSET UNITYSDK_OFFSET(0x1ACF6180)
#define UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACF61D0)
#define UNITYENGINE_GUISTYLE_GET_CONTENTOFFSET_OFFSET UNITYSDK_OFFSET(0x1ACF61A0)
#define UNITYENGINE_GUISTYLE_GET_FIXEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1ACE6120)
#define UNITYENGINE_GUISTYLE_GET_FIXEDWIDTH_OFFSET UNITYSDK_OFFSET(0x1ACE6110)
#define UNITYENGINE_GUISTYLE_GET_FOCUSED_OFFSET UNITYSDK_OFFSET(0x1ACF68D0)
#define UNITYENGINE_GUISTYLE_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1ACF6230)
#define UNITYENGINE_GUISTYLE_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1ACF6250)
#define UNITYENGINE_GUISTYLE_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1ACF6100)
#define UNITYENGINE_GUISTYLE_GET_HOVER_OFFSET UNITYSDK_OFFSET(0x1ACF6600)
#define UNITYENGINE_GUISTYLE_GET_IMAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x1ACF6120)
#define UNITYENGINE_GUISTYLE_GET_ISHEIGHTDEPENDANTONWIDTH_OFFSET UNITYSDK_OFFSET(0x1ACF20C0)
#define UNITYENGINE_GUISTYLE_GET_MARGIN_OFFSET UNITYSDK_OFFSET(0x1ACE79A0)
#define UNITYENGINE_GUISTYLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ACE53D0)
#define UNITYENGINE_GUISTYLE_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1ACE6260)
#define UNITYENGINE_GUISTYLE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1ACF5930)
#define UNITYENGINE_GUISTYLE_GET_ONACTIVE_OFFSET UNITYSDK_OFFSET(0x1ACF6840)
#define UNITYENGINE_GUISTYLE_GET_ONFOCUSED_OFFSET UNITYSDK_OFFSET(0x1ACF6960)
#define UNITYENGINE_GUISTYLE_GET_ONHOVER_OFFSET UNITYSDK_OFFSET(0x1ACF67B0)
#define UNITYENGINE_GUISTYLE_GET_ONNORMAL_OFFSET UNITYSDK_OFFSET(0x1ACF6720)
#define UNITYENGINE_GUISTYLE_GET_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x1ACF6AF0)
#define UNITYENGINE_GUISTYLE_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1ACEEB30)
#define UNITYENGINE_GUISTYLE_GET_RAWNAME_OFFSET UNITYSDK_OFFSET(0x1ACF60E0)
#define UNITYENGINE_GUISTYLE_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1ACF6270)
#define UNITYENGINE_GUISTYLE_GET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0x1ACECD40)
#define UNITYENGINE_GUISTYLE_GET_STRETCHWIDTH_OFFSET UNITYSDK_OFFSET(0x1ACECD30)
#define UNITYENGINE_GUISTYLE_GET_WORDWRAP_OFFSET UNITYSDK_OFFSET(0x1ACF6160)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1ACF63C0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACF6400)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCMINMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1ACF63D0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACF63B0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZEWITHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1ACF6380)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACF6370)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_OFFSET UNITYSDK_OFFSET(0x1ACF6340)
#define UNITYENGINE_GUISTYLE_INTERNAL_COPY_OFFSET UNITYSDK_OFFSET(0x1ACF62A0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1ACF6290)
#define UNITYENGINE_GUISTYLE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1ACF62B0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACF6330)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET UNITYSDK_OFFSET(0x1ACF6320)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACF6310)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET UNITYSDK_OFFSET(0x1ACF6300)
#define UNITYENGINE_GUISTYLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ACF6C80)
#define UNITYENGINE_GUISTYLE_SETDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0x1ACF3160)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACF6410)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_OFFSET UNITYSDK_OFFSET(0x1ACE4D20)
#define UNITYENGINE_GUISTYLE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1ACF66F0)
#define UNITYENGINE_GUISTYLE_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1ACF6150)
#define UNITYENGINE_GUISTYLE_SET_BORDER_OFFSET UNITYSDK_OFFSET(0x1ACF6A60)
#define UNITYENGINE_GUISTYLE_SET_CLIPPING_OFFSET UNITYSDK_OFFSET(0x1ACF6190)
#define UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACF6200)
#define UNITYENGINE_GUISTYLE_SET_CONTENTOFFSET_OFFSET UNITYSDK_OFFSET(0x1ACF61E0)
#define UNITYENGINE_GUISTYLE_SET_FIXEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1ACF6220)
#define UNITYENGINE_GUISTYLE_SET_FIXEDWIDTH_OFFSET UNITYSDK_OFFSET(0x1ACF6210)
#define UNITYENGINE_GUISTYLE_SET_FOCUSED_OFFSET UNITYSDK_OFFSET(0x1ACF6930)
#define UNITYENGINE_GUISTYLE_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1ACF6240)
#define UNITYENGINE_GUISTYLE_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1ACF6260)
#define UNITYENGINE_GUISTYLE_SET_FONT_OFFSET UNITYSDK_OFFSET(0x1ACF6110)
#define UNITYENGINE_GUISTYLE_SET_HOVER_OFFSET UNITYSDK_OFFSET(0x1ACF6660)
#define UNITYENGINE_GUISTYLE_SET_IMAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x1ACF6130)
#define UNITYENGINE_GUISTYLE_SET_MARGIN_OFFSET UNITYSDK_OFFSET(0x1ACF6A90)
#define UNITYENGINE_GUISTYLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1ACF3D40)
#define UNITYENGINE_GUISTYLE_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1ACF65D0)
#define UNITYENGINE_GUISTYLE_SET_ONACTIVE_OFFSET UNITYSDK_OFFSET(0x1ACF68A0)
#define UNITYENGINE_GUISTYLE_SET_ONFOCUSED_OFFSET UNITYSDK_OFFSET(0x1ACF69C0)
#define UNITYENGINE_GUISTYLE_SET_ONHOVER_OFFSET UNITYSDK_OFFSET(0x1ACF6810)
#define UNITYENGINE_GUISTYLE_SET_ONNORMAL_OFFSET UNITYSDK_OFFSET(0x1ACF6780)
#define UNITYENGINE_GUISTYLE_SET_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x1ACF6B60)
#define UNITYENGINE_GUISTYLE_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1ACF6AC0)
#define UNITYENGINE_GUISTYLE_SET_RAWNAME_OFFSET UNITYSDK_OFFSET(0x1ACF60F0)
#define UNITYENGINE_GUISTYLE_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1ACF6280)
#define UNITYENGINE_GUISTYLE_SET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0x1ACF5920)
#define UNITYENGINE_GUISTYLE_SET_STRETCHWIDTH_OFFSET UNITYSDK_OFFSET(0x1ACF2570)
#define UNITYENGINE_GUISTYLE_SET_WORDWRAP_OFFSET UNITYSDK_OFFSET(0x1ACF6170)
#define UNITYENGINE_GUISTYLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ACF6E80)
#define UNITYENGINE_GUISTYLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACF6F90)
#define UNITYENGINE_GUISTYLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ACF6420)
#define UNITYENGINE_GUISTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACF2510)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStyle_TypeDefinitionIndex = 6374;

	class GUIStyle : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIStyle** StaticGet_s_None()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(GUIStyle_TypeDefinitionIndex)->GetStaticField(0x5920);
		}
		static ::System::Boolean* StaticGet_showKeyboardFocus()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GUIStyle_TypeDefinitionIndex)->GetStaticField(0x2FB0);
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

		::System::Void set_font(::UnityEngine::Font* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_FONT_OFFSET))(this, value);
		}

		::UnityEngine::ImagePosition get_imagePosition()
		{
			return ((::UnityEngine::ImagePosition(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_IMAGEPOSITION_OFFSET))(this);
		}

		::System::Void set_imagePosition(::UnityEngine::ImagePosition value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ImagePosition))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_IMAGEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::TextAnchor get_alignment()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ALIGNMENT_OFFSET))(this);
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

		::UnityEngine::TextClipping get_clipping()
		{
			return ((::UnityEngine::TextClipping(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_CLIPPING_OFFSET))(this);
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

		::System::Void set_fixedWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_FIXEDWIDTH_OFFSET))(this, value);
		}

		::System::Single get_fixedHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FIXEDHEIGHT_OFFSET))(this);
		}

		::System::Void set_fixedHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_FIXEDHEIGHT_OFFSET))(this, value);
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

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FONTSIZE_OFFSET))(this);
		}

		::System::Void set_fontSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_FONTSIZE_OFFSET))(this, value);
		}

		::UnityEngine::FontStyle get_fontStyle()
		{
			return ((::UnityEngine::FontStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FONTSTYLE_OFFSET))(this);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FontStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_FONTSTYLE_OFFSET))(this, value);
		}

		::System::Boolean get_richText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Void set_richText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_RICHTEXT_OFFSET))(this, value);
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

		::System::Void AssignStyleState(::System::Int32 idx, ::System::IntPtr srcStyleState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_ASSIGNSTYLESTATE_OFFSET))(this, idx, srcStyleState);
		}

		::System::IntPtr GetRectOffsetPtr(::System::Int32 idx)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET))(this, idx);
		}

		::System::Void AssignRectOffset(::System::Int32 idx, ::System::IntPtr srcRectOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_ASSIGNRECTOFFSET_OFFSET))(this, idx, srcRectOffset);
		}

		::System::Void Internal_Draw(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET))(this, screenRect, content, isHover, isActive, on, hasKeyboardFocus);
		}

		::System::Void Internal_Draw2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET))(this, position, content, controlID, on);
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

		::System::Void set_normal(::UnityEngine::GUIStyleState* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyleState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_NORMAL_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyleState* get_hover()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_HOVER_OFFSET))(this);
		}

		::System::Void set_hover(::UnityEngine::GUIStyleState* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyleState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_HOVER_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyleState* get_active()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_active(::UnityEngine::GUIStyleState* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyleState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_ACTIVE_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyleState* get_onNormal()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ONNORMAL_OFFSET))(this);
		}

		::System::Void set_onNormal(::UnityEngine::GUIStyleState* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyleState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_ONNORMAL_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyleState* get_onHover()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ONHOVER_OFFSET))(this);
		}

		::System::Void set_onHover(::UnityEngine::GUIStyleState* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyleState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_ONHOVER_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyleState* get_onActive()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ONACTIVE_OFFSET))(this);
		}

		::System::Void set_onActive(::UnityEngine::GUIStyleState* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyleState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_ONACTIVE_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyleState* get_focused()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FOCUSED_OFFSET))(this);
		}

		::System::Void set_focused(::UnityEngine::GUIStyleState* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyleState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_FOCUSED_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyleState* get_onFocused()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_ONFOCUSED_OFFSET))(this);
		}

		::System::Void set_onFocused(::UnityEngine::GUIStyleState* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyleState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_ONFOCUSED_OFFSET))(this, value);
		}

		::UnityEngine::RectOffset* get_border()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_BORDER_OFFSET))(this);
		}

		::System::Void set_border(::UnityEngine::RectOffset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_BORDER_OFFSET))(this, value);
		}

		::UnityEngine::RectOffset* get_margin()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_MARGIN_OFFSET))(this);
		}

		::System::Void set_margin(::UnityEngine::RectOffset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_MARGIN_OFFSET))(this, value);
		}

		::UnityEngine::RectOffset* get_padding()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_padding(::UnityEngine::RectOffset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_PADDING_OFFSET))(this, value);
		}

		::UnityEngine::RectOffset* get_overflow()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_OVERFLOW_OFFSET))(this);
		}

		::System::Void set_overflow(::UnityEngine::RectOffset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_OVERFLOW_OFFSET))(this, value);
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

		::System::Void Draw_3(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Boolean on, ::System::Boolean hover)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_3_OFFSET))(this, position, content, controlID, on, hover);
		}

		::System::Void Draw_4(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::System::Int32 controlId, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_4_OFFSET))(this, position, content, controlId, isHover, isActive, on, hasKeyboardFocus);
		}

		static ::UnityEngine::GUIStyle* op_Implicit(::System::String* str)
		{
			return ((::UnityEngine::GUIStyle*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_OP_IMPLICIT_OFFSET))(str);
		}

		static ::UnityEngine::GUIStyle* get_none()
		{
			return ((::UnityEngine::GUIStyle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NONE_OFFSET))();
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

		::System::Void Internal_Draw_Injected(::UnityEngine::Rect& screenRect, ::UnityEngine::GUIContent* content, ::System::Boolean isHover, ::System::Boolean isActive, ::System::Boolean on, ::System::Boolean hasKeyboardFocus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET))(this, screenRect, content, isHover, isActive, on, hasKeyboardFocus);
		}

		::System::Void Internal_Draw2_Injected(::UnityEngine::Rect& position, ::UnityEngine::GUIContent* content, ::System::Int32 controlID, ::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET))(this, position, content, controlID, on);
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
