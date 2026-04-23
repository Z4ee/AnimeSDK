#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/FocusType.h"
#include "unitysdk/UnityEngine/GUI_ToolbarButtonSize.h"
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
namespace UnityEngine { class TextEditor; }
namespace UnityEngine { class Texture; }
namespace UnityEngineInternal { class GenericStack; }

#define UNITYENGINE_GUI_BEGINGROUP_1_OFFSET UNITYSDK_OFFSET(0x1A4A88D0)
#define UNITYENGINE_GUI_BEGINGROUP_2_OFFSET UNITYSDK_OFFSET(0x1A4A8950)
#define UNITYENGINE_GUI_BEGINGROUP_OFFSET UNITYSDK_OFFSET(0x1A4A8650)
#define UNITYENGINE_GUI_BEGINSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1A4A8E00)
#define UNITYENGINE_GUI_BOX_1_OFFSET UNITYSDK_OFFSET(0x1A4A1AD0)
#define UNITYENGINE_GUI_BOX_OFFSET UNITYSDK_OFFSET(0x1A4A1950)
#define UNITYENGINE_GUI_BUTTON_1_OFFSET UNITYSDK_OFFSET(0x1A4A2060)
#define UNITYENGINE_GUI_BUTTON_2_OFFSET UNITYSDK_OFFSET(0x1A4A2110)
#define UNITYENGINE_GUI_BUTTON_OFFSET UNITYSDK_OFFSET(0x1A4A1E70)
#define UNITYENGINE_GUI_CALCMOUSERECTS_OFFSET UNITYSDK_OFFSET(0x1A4A6AE0)
#define UNITYENGINE_GUI_CALCTOTALHORIZSPACING_OFFSET UNITYSDK_OFFSET(0x1A4A6180)
#define UNITYENGINE_GUI_CALCULATESCALEDTEXTURERECTS_OFFSET UNITYSDK_OFFSET(0x1A4A1350)
#define UNITYENGINE_GUI_CALLWINDOWDELEGATE_OFFSET UNITYSDK_OFFSET(0x1A4AA530)
#define UNITYENGINE_GUI_DOBUTTONGRID_OFFSET UNITYSDK_OFFSET(0x1A4A5390)
#define UNITYENGINE_GUI_DOBUTTON_OFFSET UNITYSDK_OFFSET(0x1A4A21F0)
#define UNITYENGINE_GUI_DOCONTROL_OFFSET UNITYSDK_OFFSET(0x1A4A6450)
#define UNITYENGINE_GUI_DOLABEL_OFFSET UNITYSDK_OFFSET(0x1A4A0080)
#define UNITYENGINE_GUI_DOREPEATBUTTON_OFFSET UNITYSDK_OFFSET(0x1A4A2470)
#define UNITYENGINE_GUI_DOSETSKIN_OFFSET UNITYSDK_OFFSET(0x1A49F800)
#define UNITYENGINE_GUI_DOTEXTFIELD_1_OFFSET UNITYSDK_OFFSET(0x1A4A2C30)
#define UNITYENGINE_GUI_DOTEXTFIELD_2_OFFSET UNITYSDK_OFFSET(0x1A4A2CF0)
#define UNITYENGINE_GUI_DOTEXTFIELD_OFFSET UNITYSDK_OFFSET(0x1A4A2B30)
#define UNITYENGINE_GUI_DOTOGGLE_OFFSET UNITYSDK_OFFSET(0x1A4A5160)
#define UNITYENGINE_GUI_DRAWTEXTUREWITHTEXCOORDS_1_OFFSET UNITYSDK_OFFSET(0x1A4A1590)
#define UNITYENGINE_GUI_DRAWTEXTUREWITHTEXCOORDS_OFFSET UNITYSDK_OFFSET(0x1A4A1500)
#define UNITYENGINE_GUI_DRAWTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1A4A0310)
#define UNITYENGINE_GUI_DRAWTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1A4A03E0)
#define UNITYENGINE_GUI_DRAWTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1A4A0460)
#define UNITYENGINE_GUI_DRAWTEXTURE_4_OFFSET UNITYSDK_OFFSET(0x1A4A0600)
#define UNITYENGINE_GUI_DRAWTEXTURE_5_OFFSET UNITYSDK_OFFSET(0x1A4A0750)
#define UNITYENGINE_GUI_DRAWTEXTURE_6_OFFSET UNITYSDK_OFFSET(0x1A4A0900)
#define UNITYENGINE_GUI_DRAWTEXTURE_7_OFFSET UNITYSDK_OFFSET(0x1A4A0A50)
#define UNITYENGINE_GUI_DRAWTEXTURE_8_OFFSET UNITYSDK_OFFSET(0x1A4A0C30)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A4A02A0)
#define UNITYENGINE_GUI_ENDGROUP_OFFSET UNITYSDK_OFFSET(0x1A4A8D20)
#define UNITYENGINE_GUI_ENDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1A4AA080)
#define UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A49ED90)
#define UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1A49ED30)
#define UNITYENGINE_GUI_GET_BLENDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A49EF40)
#define UNITYENGINE_GUI_GET_BLITMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A49EF50)
#define UNITYENGINE_GUI_GET_CHANGED_OFFSET UNITYSDK_OFFSET(0x1A49EEF0)
#define UNITYENGINE_GUI_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A49ECB0)
#define UNITYENGINE_GUI_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1A49EC50)
#define UNITYENGINE_GUI_GET_CONTENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A49EE70)
#define UNITYENGINE_GUI_GET_CONTENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A49EE10)
#define UNITYENGINE_GUI_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A49EF10)
#define UNITYENGINE_GUI_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1A49FB20)
#define UNITYENGINE_GUI_GET_NEXTSCROLLSTEPTIME_OFFSET UNITYSDK_OFFSET(0x1A49F620)
#define UNITYENGINE_GUI_GET_ROUNDEDRECTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A49EF60)
#define UNITYENGINE_GUI_GET_ROUNDEDRECTWITHCOLORPERBORDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A49EF70)
#define UNITYENGINE_GUI_GET_SCROLLTROUGHSIDE_OFFSET UNITYSDK_OFFSET(0x1A49F560)
#define UNITYENGINE_GUI_GET_SCROLLVIEWSTATES_OFFSET UNITYSDK_OFFSET(0x1A4A8DA0)
#define UNITYENGINE_GUI_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x1A49F990)
#define UNITYENGINE_GUI_GET_USEPAGESCROLLBARS_OFFSET UNITYSDK_OFFSET(0x1A49EF30)
#define UNITYENGINE_GUI_GRABMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0x1A49EF80)
#define UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORDESKTOPWITHFORCEDKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1A4A3320)
#define UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORDESKTOP_OFFSET UNITYSDK_OFFSET(0x1A4A3B70)
#define UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORTOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x1A4A3660)
#define UNITYENGINE_GUI_HASMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0x1A49EF90)
#define UNITYENGINE_GUI_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1A4A7480)
#define UNITYENGINE_GUI_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x1A4A70A0)
#define UNITYENGINE_GUI_INTERNALREPAINTEDITORWINDOW_OFFSET UNITYSDK_OFFSET(0x1A49EFC0)
#define UNITYENGINE_GUI_LABEL_1_OFFSET UNITYSDK_OFFSET(0x1A49FF30)
#define UNITYENGINE_GUI_LABEL_2_OFFSET UNITYSDK_OFFSET(0x1A49FE50)
#define UNITYENGINE_GUI_LABEL_OFFSET UNITYSDK_OFFSET(0x1A49FC30)
#define UNITYENGINE_GUI_PASSWORDFIELDGETSTRTOSHOW_OFFSET UNITYSDK_OFFSET(0x1A4A2AA0)
#define UNITYENGINE_GUI_RELEASEMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0x1A49EFA0)
#define UNITYENGINE_GUI_REPEATBUTTON_1_OFFSET UNITYSDK_OFFSET(0x1A4A2860)
#define UNITYENGINE_GUI_REPEATBUTTON_OFFSET UNITYSDK_OFFSET(0x1A4A22F0)
#define UNITYENGINE_GUI_SCROLLERREPEATBUTTON_OFFSET UNITYSDK_OFFSET(0x1A4A7FF0)
#define UNITYENGINE_GUI_SCROLLER_OFFSET UNITYSDK_OFFSET(0x1A4A7A70)
#define UNITYENGINE_GUI_SELECTIONGRID_OFFSET UNITYSDK_OFFSET(0x1A4A5270)
#define UNITYENGINE_GUI_SETNEXTCONTROLNAME_OFFSET UNITYSDK_OFFSET(0x1A49EFB0)
#define UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A49EE00)
#define UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1A49EDA0)
#define UNITYENGINE_GUI_SET_CHANGED_OFFSET UNITYSDK_OFFSET(0x1A49EF00)
#define UNITYENGINE_GUI_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A49ED20)
#define UNITYENGINE_GUI_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1A49ECC0)
#define UNITYENGINE_GUI_SET_CONTENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A49EEE0)
#define UNITYENGINE_GUI_SET_CONTENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A49EE80)
#define UNITYENGINE_GUI_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A49EF20)
#define UNITYENGINE_GUI_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1A49FBE0)
#define UNITYENGINE_GUI_SET_NEXTSCROLLSTEPTIME_OFFSET UNITYSDK_OFFSET(0x1A49F680)
#define UNITYENGINE_GUI_SET_SCROLLTROUGHSIDE_OFFSET UNITYSDK_OFFSET(0x1A49F5C0)
#define UNITYENGINE_GUI_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x1A49F6E0)
#define UNITYENGINE_GUI_SLIDER_OFFSET UNITYSDK_OFFSET(0x1A4A7190)
#define UNITYENGINE_GUI_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1A4A5040)
#define UNITYENGINE_GUI_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1A4A8460)
#define UNITYENGINE_GUI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A49EFD0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUI_TypeDefinitionIndex = 5114;

	class GUI : public ::System::Object
	{
	public:
		static ::UnityEngineInternal::GenericStack** StaticGet__scrollViewStates_k__BackingField()
		{
			return (::UnityEngineInternal::GenericStack**)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x15F90);
		}
		static ::UnityEngine::GUISkin** StaticGet_s_Skin()
		{
			return (::UnityEngine::GUISkin**)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x15F98);
		}
		static ::System::Int32* StaticGet_s_BoxHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6300);
		}
		static ::System::Int32* StaticGet_s_SliderHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6304);
		}
		static ::System::Int32* StaticGet_s_BeginGroupHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6308);
		}
		static ::System::Int32* StaticGet__scrollTroughSide_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x630C);
		}
		static ::System::Int32* StaticGet_s_ToggleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6310);
		}
		static ::System::Int32* StaticGet_s_ScrollControlId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6314);
		}
		static ::System::Int32* StaticGet_s_HotTextField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6318);
		}
		static ::System::Int32* StaticGet_s_ButtonGridHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x631C);
		}
		static ::System::Int32* StaticGet_s_ScrollviewHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6320);
		}
		static ::System::Int32* StaticGet_s_RepeatButtonHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6324);
		}
		static ::System::Int32* StaticGet_s_ButonHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6328);
		}
		static ::System::DateTime* StaticGet__nextScrollStepTime_k__BackingField()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x6330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI__CCTOR_OFFSET))();
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

		static ::System::Void SetNextControlName(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SETNEXTCONTROLNAME_OFFSET))(name);
		}

		static ::System::Void InternalRepaintEditorWindow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_INTERNALREPAINTEDITORWINDOW_OFFSET))();
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

		static ::System::Void DrawTextureWithTexCoords(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::Rect texCoords)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTUREWITHTEXCOORDS_OFFSET))(position, image, texCoords);
		}

		static ::System::Void DrawTextureWithTexCoords_1(::UnityEngine::Rect position, ::UnityEngine::Texture* image, ::UnityEngine::Rect texCoords, ::System::Boolean alphaBlend)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTUREWITHTEXCOORDS_1_OFFSET))(position, image, texCoords, alphaBlend);
		}

		static ::System::Void Box(::UnityEngine::Rect position, ::System::String* text)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BOX_OFFSET))(position, text);
		}

		static ::System::Void Box_1(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BOX_1_OFFSET))(position, content, style);
		}

		static ::System::Boolean Button(::UnityEngine::Rect position, ::System::String* text)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_OFFSET))(position, text);
		}

		static ::System::Boolean Button_1(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_1_OFFSET))(position, content, style);
		}

		static ::System::Boolean Button_2(::UnityEngine::Rect position, ::System::Int32 id, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_2_OFFSET))(position, id, content, style);
		}

		static ::System::Boolean RepeatButton(::UnityEngine::Rect position, ::System::String* text)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_REPEATBUTTON_OFFSET))(position, text);
		}

		static ::System::Boolean RepeatButton_1(::UnityEngine::Rect position, ::UnityEngine::Texture* image)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_REPEATBUTTON_1_OFFSET))(position, image);
		}

		static ::System::Boolean DoRepeatButton(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::UnityEngine::FocusType focusType)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::FocusType))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOREPEATBUTTON_OFFSET))(position, content, style, focusType);
		}

		static ::System::String* PasswordFieldGetStrToShow(::System::String* password, ::System::Char maskChar)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_PASSWORDFIELDGETSTRTOSHOW_OFFSET))(password, maskChar);
		}

		static ::System::Void DoTextField(::UnityEngine::Rect position, ::System::Int32 id, ::UnityEngine::GUIContent* content, ::System::Boolean multiline, ::System::Int32 maxLength, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOTEXTFIELD_OFFSET))(position, id, content, multiline, maxLength, style);
		}

		static ::System::Void DoTextField_1(::UnityEngine::Rect position, ::System::Int32 id, ::UnityEngine::GUIContent* content, ::System::Boolean multiline, ::System::Int32 maxLength, ::UnityEngine::GUIStyle* style, ::System::String* secureText)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOTEXTFIELD_1_OFFSET))(position, id, content, multiline, maxLength, style, secureText);
		}

		static ::System::Void DoTextField_2(::UnityEngine::Rect position, ::System::Int32 id, ::UnityEngine::GUIContent* content, ::System::Boolean multiline, ::System::Int32 maxLength, ::UnityEngine::GUIStyle* style, ::System::String* secureText, ::System::Char maskChar)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOTEXTFIELD_2_OFFSET))(position, id, content, multiline, maxLength, style, secureText, maskChar);
		}

		static ::System::Void HandleTextFieldEventForTouchscreen(::UnityEngine::Rect position, ::System::Int32 id, ::UnityEngine::GUIContent* content, ::System::Boolean multiline, ::System::Int32 maxLength, ::UnityEngine::GUIStyle* style, ::System::String* secureText, ::System::Char maskChar, ::UnityEngine::TextEditor* editor)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::System::String*, ::System::Char, ::UnityEngine::TextEditor*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORTOUCHSCREEN_OFFSET))(position, id, content, multiline, maxLength, style, secureText, maskChar, editor);
		}

		static ::System::Void HandleTextFieldEventForDesktop(::UnityEngine::Rect position, ::System::Int32 id, ::UnityEngine::GUIContent* content, ::System::Boolean multiline, ::System::Int32 maxLength, ::UnityEngine::GUIStyle* style, ::UnityEngine::TextEditor* editor)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::UnityEngine::TextEditor*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORDESKTOP_OFFSET))(position, id, content, multiline, maxLength, style, editor);
		}

		static ::System::Void HandleTextFieldEventForDesktopWithForcedKeyboard(::UnityEngine::Rect position, ::System::Int32 id, ::UnityEngine::GUIContent* content, ::System::Boolean multiline, ::System::Int32 maxLength, ::UnityEngine::GUIStyle* style, ::System::String* secureText, ::UnityEngine::TextEditor* editor)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::System::String*, ::UnityEngine::TextEditor*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORDESKTOPWITHFORCEDKEYBOARD_OFFSET))(position, id, content, multiline, maxLength, style, secureText, editor);
		}

		static ::System::Boolean Toggle(::UnityEngine::Rect position, ::System::Boolean value, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_TOGGLE_OFFSET))(position, value, content, style);
		}

		static ::System::Int32 SelectionGrid(::UnityEngine::Rect position, ::System::Int32 selected, ::Il2CppArray<::UnityEngine::GUIContent*>* contents, ::System::Int32 xCount, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Int32(*)(::UnityEngine::Rect, ::System::Int32, ::Il2CppArray<::UnityEngine::GUIContent*>*, ::System::Int32, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SELECTIONGRID_OFFSET))(position, selected, contents, xCount, style);
		}

		static ::System::Int32 CalcTotalHorizSpacing(::System::Int32 xCount, ::UnityEngine::GUIStyle* style, ::UnityEngine::GUIStyle* firstStyle, ::UnityEngine::GUIStyle* midStyle, ::UnityEngine::GUIStyle* lastStyle)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALCTOTALHORIZSPACING_OFFSET))(xCount, style, firstStyle, midStyle, lastStyle);
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

		static ::System::Int32 DoButtonGrid(::UnityEngine::Rect position, ::System::Int32 selected, ::Il2CppArray<::UnityEngine::GUIContent*>* contents, ::Il2CppArray<::System::String*>* controlNames, ::System::Int32 xCount, ::UnityEngine::GUIStyle* style, ::UnityEngine::GUIStyle* firstStyle, ::UnityEngine::GUIStyle* midStyle, ::UnityEngine::GUIStyle* lastStyle, ::UnityEngine::GUI_ToolbarButtonSize buttonSize, ::Il2CppArray<::System::Boolean>* contentsEnabled)
		{
			return ((::System::Int32(*)(::UnityEngine::Rect, ::System::Int32, ::Il2CppArray<::UnityEngine::GUIContent*>*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUI_ToolbarButtonSize, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOBUTTONGRID_OFFSET))(position, selected, contents, controlNames, xCount, style, firstStyle, midStyle, lastStyle, buttonSize, contentsEnabled);
		}

		static ::Il2CppArray<::UnityEngine::Rect>* CalcMouseRects(::UnityEngine::Rect position, ::Il2CppArray<::UnityEngine::GUIContent*>* contents, ::System::Int32 xCount, ::System::Single elemWidth, ::System::Single elemHeight, ::UnityEngine::GUIStyle* style, ::UnityEngine::GUIStyle* firstStyle, ::UnityEngine::GUIStyle* midStyle, ::UnityEngine::GUIStyle* lastStyle, ::System::Boolean addBorders, ::UnityEngine::GUI_ToolbarButtonSize buttonSize)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::UnityEngine::Rect, ::Il2CppArray<::UnityEngine::GUIContent*>*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::System::Boolean, ::UnityEngine::GUI_ToolbarButtonSize))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALCMOUSERECTS_OFFSET))(position, contents, xCount, elemWidth, elemHeight, style, firstStyle, midStyle, lastStyle, addBorders, buttonSize);
		}

		static ::System::Single HorizontalSlider(::UnityEngine::Rect position, ::System::Single value, ::System::Single leftValue, ::System::Single rightValue, ::UnityEngine::GUIStyle* slider, ::UnityEngine::GUIStyle* thumb)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HORIZONTALSLIDER_OFFSET))(position, value, leftValue, rightValue, slider, thumb);
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

		static ::UnityEngine::Vector2 BeginScrollView(::UnityEngine::Rect position, ::UnityEngine::Vector2 scrollPosition, ::UnityEngine::Rect viewRect, ::System::Boolean alwaysShowHorizontal, ::System::Boolean alwaysShowVertical, ::UnityEngine::GUIStyle* horizontalScrollbar, ::UnityEngine::GUIStyle* verticalScrollbar, ::UnityEngine::GUIStyle* background)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Rect, ::System::Boolean, ::System::Boolean, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINSCROLLVIEW_OFFSET))(position, scrollPosition, viewRect, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background);
		}

		static ::System::Void EndScrollView(::System::Boolean handleScrollWheel)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_ENDSCROLLVIEW_OFFSET))(handleScrollWheel);
		}

		static ::System::Void CallWindowDelegate(::UnityEngine::GUI_WindowFunction* func, ::System::Int32 id, ::System::Int32 instanceID, ::UnityEngine::GUISkin* _skin, ::System::Int32 forceRect, ::System::Single width, ::System::Single height, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::GUI_WindowFunction*, ::System::Int32, ::System::Int32, ::UnityEngine::GUISkin*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALLWINDOWDELEGATE_OFFSET))(func, id, instanceID, _skin, forceRect, width, height, style);
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
	};
}
