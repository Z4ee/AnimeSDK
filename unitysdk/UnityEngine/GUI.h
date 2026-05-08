#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/FocusType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/ScaleMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUISkin; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class GUI_WindowFunction; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngineInternal { class GenericStack; }

#define UNITYENGINE_GUI_BEGINGROUP_1_OFFSET UNITYSDK_OFFSET(0x1ACE6380)
#define UNITYENGINE_GUI_BEGINGROUP_2_OFFSET UNITYSDK_OFFSET(0x1ACE6400)
#define UNITYENGINE_GUI_BEGINGROUP_OFFSET UNITYSDK_OFFSET(0x1ACE6130)
#define UNITYENGINE_GUI_BEGINSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x1ACE6970)
#define UNITYENGINE_GUI_BEGINSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1ACE6830)
#define UNITYENGINE_GUI_BOX_1_OFFSET UNITYSDK_OFFSET(0x1ACE3860)
#define UNITYENGINE_GUI_BOX_2_OFFSET UNITYSDK_OFFSET(0x1ACE35E0)
#define UNITYENGINE_GUI_BOX_OFFSET UNITYSDK_OFFSET(0x1ACE3460)
#define UNITYENGINE_GUI_BUTTON_1_OFFSET UNITYSDK_OFFSET(0x1ACE3CC0)
#define UNITYENGINE_GUI_BUTTON_2_OFFSET UNITYSDK_OFFSET(0x1ACE3C20)
#define UNITYENGINE_GUI_BUTTON_3_OFFSET UNITYSDK_OFFSET(0x1ACE3EA0)
#define UNITYENGINE_GUI_BUTTON_OFFSET UNITYSDK_OFFSET(0x1ACE3A30)
#define UNITYENGINE_GUI_CALCULATESCALEDTEXTURERECTS_OFFSET UNITYSDK_OFFSET(0x1ACE32B0)
#define UNITYENGINE_GUI_CALLWINDOWDELEGATE_OFFSET UNITYSDK_OFFSET(0x1ACE8490)
#define UNITYENGINE_GUI_DOBUTTON_OFFSET UNITYSDK_OFFSET(0x1ACE3F80)
#define UNITYENGINE_GUI_DOCONTROL_OFFSET UNITYSDK_OFFSET(0x1ACE46D0)
#define UNITYENGINE_GUI_DOLABEL_OFFSET UNITYSDK_OFFSET(0x1ACE1F30)
#define UNITYENGINE_GUI_DOREPEATBUTTON_OFFSET UNITYSDK_OFFSET(0x1ACE4080)
#define UNITYENGINE_GUI_DOSETSKIN_OFFSET UNITYSDK_OFFSET(0x1ACE15E0)
#define UNITYENGINE_GUI_DOTOGGLE_OFFSET UNITYSDK_OFFSET(0x1ACE45C0)
#define UNITYENGINE_GUI_DOWINDOW_OFFSET UNITYSDK_OFFSET(0x1ACE8200)
#define UNITYENGINE_GUI_DRAGWINDOW_1_OFFSET UNITYSDK_OFFSET(0x1ACE90D0)
#define UNITYENGINE_GUI_DRAGWINDOW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACE0DF0)
#define UNITYENGINE_GUI_DRAGWINDOW_OFFSET UNITYSDK_OFFSET(0x1ACE0D90)
#define UNITYENGINE_GUI_DRAWTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1ACE2230)
#define UNITYENGINE_GUI_DRAWTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1ACE2300)
#define UNITYENGINE_GUI_DRAWTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1ACE2380)
#define UNITYENGINE_GUI_DRAWTEXTURE_4_OFFSET UNITYSDK_OFFSET(0x1ACE2520)
#define UNITYENGINE_GUI_DRAWTEXTURE_5_OFFSET UNITYSDK_OFFSET(0x1ACE2670)
#define UNITYENGINE_GUI_DRAWTEXTURE_6_OFFSET UNITYSDK_OFFSET(0x1ACE2820)
#define UNITYENGINE_GUI_DRAWTEXTURE_7_OFFSET UNITYSDK_OFFSET(0x1ACE2970)
#define UNITYENGINE_GUI_DRAWTEXTURE_8_OFFSET UNITYSDK_OFFSET(0x1ACE2B50)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ACE21C0)
#define UNITYENGINE_GUI_ENDGROUP_OFFSET UNITYSDK_OFFSET(0x1ACE6750)
#define UNITYENGINE_GUI_ENDSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x1ACE7B20)
#define UNITYENGINE_GUI_ENDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1ACE7AC0)
#define UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACE0A70)
#define UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1ACE0A10)
#define UNITYENGINE_GUI_GET_BLENDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ACE0C20)
#define UNITYENGINE_GUI_GET_BLITMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ACE0C30)
#define UNITYENGINE_GUI_GET_CHANGED_OFFSET UNITYSDK_OFFSET(0x1ACE0BD0)
#define UNITYENGINE_GUI_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACE0990)
#define UNITYENGINE_GUI_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1ACE0930)
#define UNITYENGINE_GUI_GET_CONTENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACE0B50)
#define UNITYENGINE_GUI_GET_CONTENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1ACE0AF0)
#define UNITYENGINE_GUI_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1ACE0BF0)
#define UNITYENGINE_GUI_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1ACE19D0)
#define UNITYENGINE_GUI_GET_NEXTSCROLLSTEPTIME_OFFSET UNITYSDK_OFFSET(0x1ACE1400)
#define UNITYENGINE_GUI_GET_ROUNDEDRECTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ACE0C40)
#define UNITYENGINE_GUI_GET_ROUNDEDRECTWITHCOLORPERBORDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ACE0C50)
#define UNITYENGINE_GUI_GET_SCROLLTROUGHSIDE_OFFSET UNITYSDK_OFFSET(0x1ACE1340)
#define UNITYENGINE_GUI_GET_SCROLLVIEWSTATES_OFFSET UNITYSDK_OFFSET(0x1ACE67D0)
#define UNITYENGINE_GUI_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x1ACE1840)
#define UNITYENGINE_GUI_GET_USEPAGESCROLLBARS_OFFSET UNITYSDK_OFFSET(0x1ACE0C10)
#define UNITYENGINE_GUI_GRABMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0x1ACE0C60)
#define UNITYENGINE_GUI_HASMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0x1ACE0C70)
#define UNITYENGINE_GUI_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1ACE51E0)
#define UNITYENGINE_GUI_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x1ACE4D90)
#define UNITYENGINE_GUI_INTERNALREPAINTEDITORWINDOW_OFFSET UNITYSDK_OFFSET(0x1ACE0C90)
#define UNITYENGINE_GUI_INTERNAL_DOWINDOW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACE0D80)
#define UNITYENGINE_GUI_INTERNAL_DOWINDOW_OFFSET UNITYSDK_OFFSET(0x1ACE0CA0)
#define UNITYENGINE_GUI_LABEL_1_OFFSET UNITYSDK_OFFSET(0x1ACE1DE0)
#define UNITYENGINE_GUI_LABEL_2_OFFSET UNITYSDK_OFFSET(0x1ACE1D00)
#define UNITYENGINE_GUI_LABEL_OFFSET UNITYSDK_OFFSET(0x1ACE1AE0)
#define UNITYENGINE_GUI_RELEASEMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0x1ACE0C80)
#define UNITYENGINE_GUI_SCROLLERREPEATBUTTON_OFFSET UNITYSDK_OFFSET(0x1ACE5C90)
#define UNITYENGINE_GUI_SCROLLER_OFFSET UNITYSDK_OFFSET(0x1ACE5710)
#define UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACE0AE0)
#define UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1ACE0A80)
#define UNITYENGINE_GUI_SET_CHANGED_OFFSET UNITYSDK_OFFSET(0x1ACE0BE0)
#define UNITYENGINE_GUI_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACE0A00)
#define UNITYENGINE_GUI_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1ACE09A0)
#define UNITYENGINE_GUI_SET_CONTENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ACE0BC0)
#define UNITYENGINE_GUI_SET_CONTENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1ACE0B60)
#define UNITYENGINE_GUI_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1ACE0C00)
#define UNITYENGINE_GUI_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1ACE1A90)
#define UNITYENGINE_GUI_SET_NEXTSCROLLSTEPTIME_OFFSET UNITYSDK_OFFSET(0x1ACE1460)
#define UNITYENGINE_GUI_SET_SCROLLTROUGHSIDE_OFFSET UNITYSDK_OFFSET(0x1ACE13A0)
#define UNITYENGINE_GUI_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x1ACE14C0)
#define UNITYENGINE_GUI_SLIDER_OFFSET UNITYSDK_OFFSET(0x1ACE4EF0)
#define UNITYENGINE_GUI_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1ACE44A0)
#define UNITYENGINE_GUI_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1ACE5F20)
#define UNITYENGINE_GUI_WINDOW_1_OFFSET UNITYSDK_OFFSET(0x1ACE8350)
#define UNITYENGINE_GUI_WINDOW_OFFSET UNITYSDK_OFFSET(0x1ACE7FD0)
#define UNITYENGINE_GUI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACE0E00)
#define UNITYENGINE_GUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE9190)

namespace UnityEngine
{
	inline static constexpr unsigned int GUI_TypeDefinitionIndex = 6354;

	class GUI : public ::System::Object
	{
	public:
		static ::UnityEngine::GUISkin** StaticGet_s_Skin()
		{
			return (::UnityEngine::GUISkin**)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x5850);
		}
		static ::UnityEngineInternal::GenericStack** StaticGet__scrollViewStates_k__BackingField()
		{
			return (::UnityEngineInternal::GenericStack**)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x5858);
		}
		static ::System::Int32* StaticGet_s_ScrollviewHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F30);
		}
		static ::System::Int32* StaticGet_s_HotTextField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F34);
		}
		static ::System::Int32* StaticGet_s_ButonHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F38);
		}
		static ::System::Int32* StaticGet_s_ButtonGridHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F3C);
		}
		static ::System::DateTime* StaticGet__nextScrollStepTime_k__BackingField()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F40);
		}
		static ::System::Int32* StaticGet_s_SliderHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F48);
		}
		static ::System::Int32* StaticGet_s_BeginGroupHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F4C);
		}
		static ::System::Int32* StaticGet_s_RepeatButtonHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F50);
		}
		static ::System::Int32* StaticGet__scrollTroughSide_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F54);
		}
		static ::System::Int32* StaticGet_s_ToggleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F58);
		}
		static ::System::Int32* StaticGet_s_BoxHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F5C);
		}
		static ::System::Int32* StaticGet_s_ScrollControlId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x2F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_COLOR_OFFSET))();
		}

		static ::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_COLOR_OFFSET))(value);
		}

		static ::UnityEngine::Color get_backgroundColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_OFFSET))();
		}

		static ::System::Void set_backgroundColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_OFFSET))(value);
		}

		static ::UnityEngine::Color get_contentColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_CONTENTCOLOR_OFFSET))();
		}

		static ::System::Void set_contentColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_CONTENTCOLOR_OFFSET))(value);
		}

		static ::System::Boolean get_changed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_CHANGED_OFFSET))();
		}

		static ::System::Void set_changed(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_CHANGED_OFFSET))(value);
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_ENABLED_OFFSET))(value);
		}

		static ::System::Boolean get_usePageScrollbars()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_USEPAGESCROLLBARS_OFFSET))();
		}

		static ::UnityEngine::Material* get_blendMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BLENDMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_blitMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BLITMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_roundedRectMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_ROUNDEDRECTMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_roundedRectWithColorPerBorderMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_ROUNDEDRECTWITHCOLORPERBORDERMATERIAL_OFFSET))();
		}

		static ::System::Void GrabMouseControl(::System::Int32 id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GRABMOUSECONTROL_OFFSET))(id);
		}

		static ::System::Boolean HasMouseControl(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HASMOUSECONTROL_OFFSET))(id);
		}

		static ::System::Void ReleaseMouseControl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_RELEASEMOUSECONTROL_OFFSET))();
		}

		static ::System::Void InternalRepaintEditorWindow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_INTERNALREPAINTEDITORWINDOW_OFFSET))();
		}

		static ::UnityEngine::Rect Internal_DoWindow(::System::Int32 id, ::System::Int32 instanceID, ::UnityEngine::Rect clientRect, ::UnityEngine::GUI_WindowFunction* func, ::UnityEngine::GUIContent* title, ::UnityEngine::GUIStyle* style, ::System::Object* skin, ::System::Boolean forceRectOnLayout)
		{
			return ((::UnityEngine::Rect(*)(::System::Int32, ::System::Int32, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_INTERNAL_DOWINDOW_OFFSET))(id, instanceID, clientRect, func, title, style, skin, forceRectOnLayout);
		}

		static ::System::Void DragWindow(::UnityEngine::Rect position)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAGWINDOW_OFFSET))(position);
		}

		static ::System::Int32 get_scrollTroughSide()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_SCROLLTROUGHSIDE_OFFSET))();
		}

		static ::System::Void set_scrollTroughSide(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_SCROLLTROUGHSIDE_OFFSET))(value);
		}

		static ::System::DateTime get_nextScrollStepTime()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_NEXTSCROLLSTEPTIME_OFFSET))();
		}

		static ::System::Void set_nextScrollStepTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::System::DateTime))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_NEXTSCROLLSTEPTIME_OFFSET))(value);
		}

		static ::System::Void set_skin(::UnityEngine::GUISkin* value)
		{
			return ((::System::Void(*)(::UnityEngine::GUISkin*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_SKIN_OFFSET))(value);
		}

		static ::UnityEngine::GUISkin* get_skin()
		{
			return ((::UnityEngine::GUISkin*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_SKIN_OFFSET))();
		}

		static ::System::Void DoSetSkin(::UnityEngine::GUISkin* newSkin)
		{
			return ((::System::Void(*)(::UnityEngine::GUISkin*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOSETSKIN_OFFSET))(newSkin);
		}

		static ::UnityEngine::Matrix4x4 get_matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_MATRIX_OFFSET))();
		}

		static ::System::Void set_matrix(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_MATRIX_OFFSET))(value);
		}

		static ::System::Void Label(::UnityEngine::Rect position, ::System::String* text)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_LABEL_OFFSET))(position, text);
		}

		static ::System::Void Label_1(::UnityEngine::Rect position, ::System::String* text, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::String*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_LABEL_1_OFFSET))(position, text, style);
		}

		static ::System::Void Label_2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_LABEL_2_OFFSET))(position, content, style);
		}

		static ::System::Void DrawTexture(::UnityEngine::Rect position, ::UnityEngine::Texture* image)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(position, image);
		}

		static ::System::Void DrawTexture_1(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::ScaleMode scaleMode)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_1_OFFSET))(position, image, scaleMode);
		}

		static ::System::Void DrawTexture_2(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::ScaleMode scaleMode, ::System::Boolean alphaBlend)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_2_OFFSET))(position, image, scaleMode, alphaBlend);
		}

		static ::System::Void DrawTexture_3(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::ScaleMode scaleMode, ::System::Boolean alphaBlend, ::System::Single imageAspect)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_3_OFFSET))(position, image, scaleMode, alphaBlend, imageAspect);
		}

		static ::System::Void DrawTexture_4(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::ScaleMode scaleMode, ::System::Boolean alphaBlend, ::System::Single imageAspect, ::UnityEngine::Color color, ::System::Single borderWidth, ::System::Single borderRadius)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_4_OFFSET))(position, image, scaleMode, alphaBlend, imageAspect, color, borderWidth, borderRadius);
		}

		static ::System::Void DrawTexture_5(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::ScaleMode scaleMode, ::System::Boolean alphaBlend, ::System::Single imageAspect, ::UnityEngine::Color color, ::UnityEngine::Vector4 borderWidths, ::System::Single borderRadius)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_5_OFFSET))(position, image, scaleMode, alphaBlend, imageAspect, color, borderWidths, borderRadius);
		}

		static ::System::Void DrawTexture_6(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::ScaleMode scaleMode, ::System::Boolean alphaBlend, ::System::Single imageAspect, ::UnityEngine::Color color, ::UnityEngine::Vector4 borderWidths, ::UnityEngine::Vector4 borderRadiuses)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_6_OFFSET))(position, image, scaleMode, alphaBlend, imageAspect, color, borderWidths, borderRadiuses);
		}

		static ::System::Void DrawTexture_7(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::ScaleMode scaleMode, ::System::Boolean alphaBlend, ::System::Single imageAspect, ::UnityEngine::Color color, ::UnityEngine::Vector4 borderWidths, ::UnityEngine::Vector4 borderRadiuses, ::System::Boolean drawSmoothCorners)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_7_OFFSET))(position, image, scaleMode, alphaBlend, imageAspect, color, borderWidths, borderRadiuses, drawSmoothCorners);
		}

		static ::System::Void DrawTexture_8(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::ScaleMode scaleMode, ::System::Boolean alphaBlend, ::System::Single imageAspect, ::UnityEngine::Color leftColor, ::UnityEngine::Color topColor, ::UnityEngine::Color rightColor, ::UnityEngine::Color bottomColor, ::UnityEngine::Vector4 borderWidths, ::UnityEngine::Vector4 borderRadiuses, ::System::Boolean drawSmoothCorners)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_8_OFFSET))(position, image, scaleMode, alphaBlend, imageAspect, leftColor, topColor, rightColor, bottomColor, borderWidths, borderRadiuses, drawSmoothCorners);
		}

		static ::System::Boolean CalculateScaledTextureRects(::UnityEngine::Rect position, ::UnityEngine::ScaleMode scaleMode, ::System::Single imageAspect, ::UnityEngine::Rect& outScreenRect, ::UnityEngine::Rect& outSourceRect)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::ScaleMode, ::System::Single, ::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALCULATESCALEDTEXTURERECTS_OFFSET))(position, scaleMode, imageAspect, outScreenRect, outSourceRect);
		}

		static ::System::Void Box(::UnityEngine::Rect position, ::System::String* text)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BOX_OFFSET))(position, text);
		}

		static ::System::Void Box_1(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BOX_1_OFFSET))(position, content);
		}

		static ::System::Void Box_2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BOX_2_OFFSET))(position, content, style);
		}

		static ::System::Boolean Button(::UnityEngine::Rect position, ::System::String* text)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_OFFSET))(position, text);
		}

		static ::System::Boolean Button_1(::UnityEngine::Rect position, ::System::String* text, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::String*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_1_OFFSET))(position, text, style);
		}

		static ::System::Boolean Button_2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_2_OFFSET))(position, content, style);
		}

		static ::System::Boolean Button_3(::UnityEngine::Rect position, ::System::Int32 id, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_3_OFFSET))(position, id, content, style);
		}

		static ::System::Boolean DoRepeatButton(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::UnityEngine::FocusType focusType)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::FocusType))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOREPEATBUTTON_OFFSET))(position, content, style, focusType);
		}

		static ::System::Boolean Toggle(::UnityEngine::Rect position, ::System::Boolean value, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_TOGGLE_OFFSET))(position, value, content, style);
		}

		static ::System::Boolean DoControl(::UnityEngine::Rect position, ::System::Int32 id, ::System::Boolean on, ::System::Boolean hover, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOCONTROL_OFFSET))(position, id, on, hover, content, style);
		}

		static ::System::Void DoLabel(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOLABEL_OFFSET))(position, content, style);
		}

		static ::System::Boolean DoToggle(::UnityEngine::Rect position, ::System::Int32 id, ::System::Boolean value, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOTOGGLE_OFFSET))(position, id, value, content, style);
		}

		static ::System::Boolean DoButton(::UnityEngine::Rect position, ::System::Int32 id, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOBUTTON_OFFSET))(position, id, content, style);
		}

		static ::System::Single HorizontalSlider(::UnityEngine::Rect position, ::System::Single value, ::System::Single leftValue, ::System::Single rightValue)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HORIZONTALSLIDER_OFFSET))(position, value, leftValue, rightValue);
		}

		static ::System::Single Slider(::UnityEngine::Rect position, ::System::Single value, ::System::Single size, ::System::Single start, ::System::Single end, ::UnityEngine::GUIStyle* slider, ::UnityEngine::GUIStyle* thumb, ::System::Boolean horiz, ::System::Int32 id, ::UnityEngine::GUIStyle* thumbExtent)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SLIDER_OFFSET))(position, value, size, start, end, slider, thumb, horiz, id, thumbExtent);
		}

		static ::System::Single HorizontalScrollbar(::UnityEngine::Rect position, ::System::Single value, ::System::Single size, ::System::Single leftValue, ::System::Single rightValue, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HORIZONTALSCROLLBAR_OFFSET))(position, value, size, leftValue, rightValue, style);
		}

		static ::System::Boolean ScrollerRepeatButton(::System::Int32 scrollerID, ::UnityEngine::Rect rect, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Rect, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SCROLLERREPEATBUTTON_OFFSET))(scrollerID, rect, style);
		}

		static ::System::Single VerticalScrollbar(::UnityEngine::Rect position, ::System::Single value, ::System::Single size, ::System::Single topValue, ::System::Single bottomValue, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_VERTICALSCROLLBAR_OFFSET))(position, value, size, topValue, bottomValue, style);
		}

		static ::System::Single Scroller(::UnityEngine::Rect position, ::System::Single value, ::System::Single size, ::System::Single leftValue, ::System::Single rightValue, ::UnityEngine::GUIStyle* slider, ::UnityEngine::GUIStyle* thumb, ::UnityEngine::GUIStyle* leftButton, ::UnityEngine::GUIStyle* rightButton, ::System::Boolean horiz)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SCROLLER_OFFSET))(position, value, size, leftValue, rightValue, slider, thumb, leftButton, rightButton, horiz);
		}

		static ::System::Void BeginGroup(::UnityEngine::Rect position)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINGROUP_OFFSET))(position);
		}

		static ::System::Void BeginGroup_1(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINGROUP_1_OFFSET))(position, content, style);
		}

		static ::System::Void BeginGroup_2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::UnityEngine::Vector2 scrollOffset)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINGROUP_2_OFFSET))(position, content, style, scrollOffset);
		}

		static ::System::Void EndGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_ENDGROUP_OFFSET))();
		}

		static ::UnityEngineInternal::GenericStack* get_scrollViewStates()
		{
			return ((::UnityEngineInternal::GenericStack*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_SCROLLVIEWSTATES_OFFSET))();
		}

		static ::UnityEngine::Vector2 BeginScrollView(::UnityEngine::Rect position, ::UnityEngine::Vector2 scrollPosition, ::UnityEngine::Rect viewRect)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINSCROLLVIEW_OFFSET))(position, scrollPosition, viewRect);
		}

		static ::UnityEngine::Vector2 BeginScrollView_1(::UnityEngine::Rect position, ::UnityEngine::Vector2 scrollPosition, ::UnityEngine::Rect viewRect, ::System::Boolean alwaysShowHorizontal, ::System::Boolean alwaysShowVertical, ::UnityEngine::GUIStyle* horizontalScrollbar, ::UnityEngine::GUIStyle* verticalScrollbar, ::UnityEngine::GUIStyle* background)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Rect, ::System::Boolean, ::System::Boolean, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINSCROLLVIEW_1_OFFSET))(position, scrollPosition, viewRect, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background);
		}

		static ::System::Void EndScrollView()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_ENDSCROLLVIEW_OFFSET))();
		}

		static ::System::Void EndScrollView_1(::System::Boolean handleScrollWheel)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_ENDSCROLLVIEW_1_OFFSET))(handleScrollWheel);
		}

		static ::UnityEngine::Rect Window(::System::Int32 id, ::UnityEngine::Rect clientRect, ::UnityEngine::GUI_WindowFunction* func, ::System::String* text)
		{
			return ((::UnityEngine::Rect(*)(::System::Int32, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOW_OFFSET))(id, clientRect, func, text);
		}

		static ::UnityEngine::Rect Window_1(::System::Int32 id, ::UnityEngine::Rect clientRect, ::UnityEngine::GUI_WindowFunction* func, ::UnityEngine::GUIContent* title, ::UnityEngine::GUIStyle* style)
		{
			return ((::UnityEngine::Rect(*)(::System::Int32, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOW_1_OFFSET))(id, clientRect, func, title, style);
		}

		static ::UnityEngine::Rect DoWindow(::System::Int32 id, ::UnityEngine::Rect clientRect, ::UnityEngine::GUI_WindowFunction* func, ::UnityEngine::GUIContent* title, ::UnityEngine::GUIStyle* style, ::UnityEngine::GUISkin* skin, ::System::Boolean forceRectOnLayout)
		{
			return ((::UnityEngine::Rect(*)(::System::Int32, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUISkin*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOWINDOW_OFFSET))(id, clientRect, func, title, style, skin, forceRectOnLayout);
		}

		static ::System::Void CallWindowDelegate(::UnityEngine::GUI_WindowFunction* func, ::System::Int32 id, ::System::Int32 instanceID, ::UnityEngine::GUISkin* _skin, ::System::Int32 forceRect, ::System::Single width, ::System::Single height, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::GUI_WindowFunction*, ::System::Int32, ::System::Int32, ::UnityEngine::GUISkin*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALLWINDOWDELEGATE_OFFSET))(func, id, instanceID, _skin, forceRect, width, height, style);
		}

		static ::System::Void DragWindow_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAGWINDOW_1_OFFSET))();
		}

		static ::System::Void get_color_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_COLOR_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_color_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_COLOR_INJECTED_OFFSET))(value);
		}

		static ::System::Void get_backgroundColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_backgroundColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_INJECTED_OFFSET))(value);
		}

		static ::System::Void get_contentColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_CONTENTCOLOR_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_contentColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_CONTENTCOLOR_INJECTED_OFFSET))(value);
		}

		static ::System::Void Internal_DoWindow_Injected(::System::Int32 id, ::System::Int32 instanceID, ::UnityEngine::Rect& clientRect, ::UnityEngine::GUI_WindowFunction* func, ::UnityEngine::GUIContent* title, ::UnityEngine::GUIStyle* style, ::System::Object* skin, ::System::Boolean forceRectOnLayout, ::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Rect&, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::System::Object*, ::System::Boolean, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_INTERNAL_DOWINDOW_INJECTED_OFFSET))(id, instanceID, clientRect, func, title, style, skin, forceRectOnLayout, ret);
		}

		static ::System::Void DragWindow_Injected(::UnityEngine::Rect& position)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAGWINDOW_INJECTED_OFFSET))(position);
		}
	};
}
