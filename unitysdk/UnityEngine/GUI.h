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

#define UNITYENGINE_GUI_BEGINGROUP_1_OFFSET UNITYSDK_OFFSET(0x1AEBFAD0)
#define UNITYENGINE_GUI_BEGINGROUP_2_OFFSET UNITYSDK_OFFSET(0x1AEBFB50)
#define UNITYENGINE_GUI_BEGINGROUP_OFFSET UNITYSDK_OFFSET(0x1AEBF850)
#define UNITYENGINE_GUI_BEGINSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1AEC0000)
#define UNITYENGINE_GUI_BOX_1_OFFSET UNITYSDK_OFFSET(0x1AEB8750)
#define UNITYENGINE_GUI_BOX_OFFSET UNITYSDK_OFFSET(0x1AEB85D0)
#define UNITYENGINE_GUI_BUTTON_1_OFFSET UNITYSDK_OFFSET(0x1AEB8C90)
#define UNITYENGINE_GUI_BUTTON_2_OFFSET UNITYSDK_OFFSET(0x1AEB8D40)
#define UNITYENGINE_GUI_BUTTON_OFFSET UNITYSDK_OFFSET(0x1AEB8AA0)
#define UNITYENGINE_GUI_CALCMOUSERECTS_OFFSET UNITYSDK_OFFSET(0x1AEBDD50)
#define UNITYENGINE_GUI_CALCTOTALHORIZSPACING_OFFSET UNITYSDK_OFFSET(0x1AEBD3F0)
#define UNITYENGINE_GUI_CALCULATESCALEDTEXTURERECTS_OFFSET UNITYSDK_OFFSET(0x1AEB7FD0)
#define UNITYENGINE_GUI_CALLWINDOWDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AEC1710)
#define UNITYENGINE_GUI_DOBUTTONGRID_OFFSET UNITYSDK_OFFSET(0x1AEBC610)
#define UNITYENGINE_GUI_DOBUTTON_OFFSET UNITYSDK_OFFSET(0x1AEB8E20)
#define UNITYENGINE_GUI_DOCONTROL_OFFSET UNITYSDK_OFFSET(0x1AEBD6C0)
#define UNITYENGINE_GUI_DOLABEL_OFFSET UNITYSDK_OFFSET(0x1AEB6C60)
#define UNITYENGINE_GUI_DOREPEATBUTTON_OFFSET UNITYSDK_OFFSET(0x1AEB90A0)
#define UNITYENGINE_GUI_DOSETSKIN_OFFSET UNITYSDK_OFFSET(0x1AEB6410)
#define UNITYENGINE_GUI_DOTEXTFIELD_1_OFFSET UNITYSDK_OFFSET(0x1AEB9860)
#define UNITYENGINE_GUI_DOTEXTFIELD_2_OFFSET UNITYSDK_OFFSET(0x1AEB9920)
#define UNITYENGINE_GUI_DOTEXTFIELD_OFFSET UNITYSDK_OFFSET(0x1AEB9760)
#define UNITYENGINE_GUI_DOTOGGLE_OFFSET UNITYSDK_OFFSET(0x1AEBC3E0)
#define UNITYENGINE_GUI_DRAWTEXTUREWITHTEXCOORDS_1_OFFSET UNITYSDK_OFFSET(0x1AEB8210)
#define UNITYENGINE_GUI_DRAWTEXTUREWITHTEXCOORDS_OFFSET UNITYSDK_OFFSET(0x1AEB8180)
#define UNITYENGINE_GUI_DRAWTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1AEB6EE0)
#define UNITYENGINE_GUI_DRAWTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1AEB6FB0)
#define UNITYENGINE_GUI_DRAWTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1AEB7030)
#define UNITYENGINE_GUI_DRAWTEXTURE_4_OFFSET UNITYSDK_OFFSET(0x1AEB71D0)
#define UNITYENGINE_GUI_DRAWTEXTURE_5_OFFSET UNITYSDK_OFFSET(0x1AEB7320)
#define UNITYENGINE_GUI_DRAWTEXTURE_6_OFFSET UNITYSDK_OFFSET(0x1AEB74D0)
#define UNITYENGINE_GUI_DRAWTEXTURE_7_OFFSET UNITYSDK_OFFSET(0x1AEB7620)
#define UNITYENGINE_GUI_DRAWTEXTURE_8_OFFSET UNITYSDK_OFFSET(0x1AEB7800)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AEB6E70)
#define UNITYENGINE_GUI_ENDGROUP_OFFSET UNITYSDK_OFFSET(0x1AEBFF20)
#define UNITYENGINE_GUI_ENDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1AEC1260)
#define UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AEB59A0)
#define UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1AEB5940)
#define UNITYENGINE_GUI_GET_BLENDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AEB5B50)
#define UNITYENGINE_GUI_GET_BLITMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AEB5B60)
#define UNITYENGINE_GUI_GET_CHANGED_OFFSET UNITYSDK_OFFSET(0x1AEB5B00)
#define UNITYENGINE_GUI_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AEB58C0)
#define UNITYENGINE_GUI_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1AEB5860)
#define UNITYENGINE_GUI_GET_CONTENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AEB5A80)
#define UNITYENGINE_GUI_GET_CONTENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1AEB5A20)
#define UNITYENGINE_GUI_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1AEB5B20)
#define UNITYENGINE_GUI_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1AEB6700)
#define UNITYENGINE_GUI_GET_NEXTSCROLLSTEPTIME_OFFSET UNITYSDK_OFFSET(0x1AEB6230)
#define UNITYENGINE_GUI_GET_ROUNDEDRECTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AEB5B70)
#define UNITYENGINE_GUI_GET_ROUNDEDRECTWITHCOLORPERBORDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AEB5B80)
#define UNITYENGINE_GUI_GET_SCROLLTROUGHSIDE_OFFSET UNITYSDK_OFFSET(0x1AEB6170)
#define UNITYENGINE_GUI_GET_SCROLLVIEWSTATES_OFFSET UNITYSDK_OFFSET(0x1AEBFFA0)
#define UNITYENGINE_GUI_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x1AEB6580)
#define UNITYENGINE_GUI_GET_USEPAGESCROLLBARS_OFFSET UNITYSDK_OFFSET(0x1AEB5B40)
#define UNITYENGINE_GUI_GRABMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0x1AEB5B90)
#define UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORDESKTOPWITHFORCEDKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1AEBA010)
#define UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORDESKTOP_OFFSET UNITYSDK_OFFSET(0x1AEBA850)
#define UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORTOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x1AEBA340)
#define UNITYENGINE_GUI_HASMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0x1AEB5BA0)
#define UNITYENGINE_GUI_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1AEBE690)
#define UNITYENGINE_GUI_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x1AEBE2B0)
#define UNITYENGINE_GUI_INTERNALREPAINTEDITORWINDOW_OFFSET UNITYSDK_OFFSET(0x1AEB5BD0)
#define UNITYENGINE_GUI_LABEL_1_OFFSET UNITYSDK_OFFSET(0x1AEB6B10)
#define UNITYENGINE_GUI_LABEL_2_OFFSET UNITYSDK_OFFSET(0x1AEB6A30)
#define UNITYENGINE_GUI_LABEL_OFFSET UNITYSDK_OFFSET(0x1AEB6810)
#define UNITYENGINE_GUI_PASSWORDFIELDGETSTRTOSHOW_OFFSET UNITYSDK_OFFSET(0x1AEB96D0)
#define UNITYENGINE_GUI_RELEASEMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0x1AEB5BB0)
#define UNITYENGINE_GUI_REPEATBUTTON_1_OFFSET UNITYSDK_OFFSET(0x1AEB9490)
#define UNITYENGINE_GUI_REPEATBUTTON_OFFSET UNITYSDK_OFFSET(0x1AEB8F20)
#define UNITYENGINE_GUI_SCROLLERREPEATBUTTON_OFFSET UNITYSDK_OFFSET(0x1AEBF1F0)
#define UNITYENGINE_GUI_SCROLLER_OFFSET UNITYSDK_OFFSET(0x1AEBEC70)
#define UNITYENGINE_GUI_SELECTIONGRID_OFFSET UNITYSDK_OFFSET(0x1AEBC4F0)
#define UNITYENGINE_GUI_SETNEXTCONTROLNAME_OFFSET UNITYSDK_OFFSET(0x1AEB5BC0)
#define UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AEB5A10)
#define UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1AEB59B0)
#define UNITYENGINE_GUI_SET_CHANGED_OFFSET UNITYSDK_OFFSET(0x1AEB5B10)
#define UNITYENGINE_GUI_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AEB5930)
#define UNITYENGINE_GUI_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1AEB58D0)
#define UNITYENGINE_GUI_SET_CONTENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AEB5AF0)
#define UNITYENGINE_GUI_SET_CONTENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1AEB5A90)
#define UNITYENGINE_GUI_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1AEB5B30)
#define UNITYENGINE_GUI_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1AEB67C0)
#define UNITYENGINE_GUI_SET_NEXTSCROLLSTEPTIME_OFFSET UNITYSDK_OFFSET(0x1AEB6290)
#define UNITYENGINE_GUI_SET_SCROLLTROUGHSIDE_OFFSET UNITYSDK_OFFSET(0x1AEB61D0)
#define UNITYENGINE_GUI_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x1AEB62F0)
#define UNITYENGINE_GUI_SLIDER_OFFSET UNITYSDK_OFFSET(0x1AEBE3A0)
#define UNITYENGINE_GUI_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1AEBC2C0)
#define UNITYENGINE_GUI_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1AEBF660)
#define UNITYENGINE_GUI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEB5BE0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUI_TypeDefinitionIndex = 5213;

	class GUI : public ::System::Object
	{
	public:
		static ::UnityEngineInternal::GenericStack** StaticGet__scrollViewStates_k__BackingField()
		{
			return (::UnityEngineInternal::GenericStack**)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x3B690);
		}
		static ::UnityEngine::GUISkin** StaticGet_s_Skin()
		{
			return (::UnityEngine::GUISkin**)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x3B698);
		}
		static ::System::DateTime* StaticGet__nextScrollStepTime_k__BackingField()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F00);
		}
		static ::System::Int32* StaticGet_s_HotTextField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F08);
		}
		static ::System::Int32* StaticGet_s_ScrollviewHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F0C);
		}
		static ::System::Int32* StaticGet__scrollTroughSide_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F10);
		}
		static ::System::Int32* StaticGet_s_ButtonGridHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F14);
		}
		static ::System::Int32* StaticGet_s_SliderHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F18);
		}
		static ::System::Int32* StaticGet_s_ToggleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F1C);
		}
		static ::System::Int32* StaticGet_s_ButonHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F20);
		}
		static ::System::Int32* StaticGet_s_ScrollControlId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F24);
		}
		static ::System::Int32* StaticGet_s_RepeatButtonHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F28);
		}
		static ::System::Int32* StaticGet_s_BeginGroupHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F2C);
		}
		static ::System::Int32* StaticGet_s_BoxHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUI_TypeDefinitionIndex)->GetStaticField(0x9F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_COLOR_OFFSET))();
		}

		static ::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_COLOR_OFFSET))(a1);
		}

		static ::UnityEngine::Color get_backgroundColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_OFFSET))();
		}

		static ::System::Void set_backgroundColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_OFFSET))(a1);
		}

		static ::UnityEngine::Color get_contentColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_CONTENTCOLOR_OFFSET))();
		}

		static ::System::Void set_contentColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_CONTENTCOLOR_OFFSET))(a1);
		}

		static ::System::Boolean get_changed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_CHANGED_OFFSET))();
		}

		static ::System::Void set_changed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_CHANGED_OFFSET))(a1);
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_ENABLED_OFFSET))(a1);
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

		static ::System::Void GrabMouseControl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GRABMOUSECONTROL_OFFSET))(a1);
		}

		static ::System::Boolean HasMouseControl(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HASMOUSECONTROL_OFFSET))(a1);
		}

		static ::System::Void ReleaseMouseControl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_RELEASEMOUSECONTROL_OFFSET))();
		}

		static ::System::Void SetNextControlName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SETNEXTCONTROLNAME_OFFSET))(a1);
		}

		static ::System::Void InternalRepaintEditorWindow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_INTERNALREPAINTEDITORWINDOW_OFFSET))();
		}

		static ::System::Int32 get_scrollTroughSide()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_SCROLLTROUGHSIDE_OFFSET))();
		}

		static ::System::Void set_scrollTroughSide(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_SCROLLTROUGHSIDE_OFFSET))(a1);
		}

		static ::System::DateTime get_nextScrollStepTime()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_NEXTSCROLLSTEPTIME_OFFSET))();
		}

		static ::System::Void set_nextScrollStepTime(::System::DateTime a1)
		{
			return ((::System::Void(*)(::System::DateTime))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_NEXTSCROLLSTEPTIME_OFFSET))(a1);
		}

		static ::System::Void set_skin(::UnityEngine::GUISkin* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GUISkin*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_SKIN_OFFSET))(a1);
		}

		static ::UnityEngine::GUISkin* get_skin()
		{
			return ((::UnityEngine::GUISkin*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_SKIN_OFFSET))();
		}

		static ::System::Void DoSetSkin(::UnityEngine::GUISkin* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GUISkin*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOSETSKIN_OFFSET))(a1);
		}

		static ::UnityEngine::Matrix4x4 get_matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_MATRIX_OFFSET))();
		}

		static ::System::Void set_matrix(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_MATRIX_OFFSET))(a1);
		}

		static ::System::Void Label(::UnityEngine::Rect a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_LABEL_OFFSET))(a1, a2);
		}

		static ::System::Void Label_1(::UnityEngine::Rect a1, ::System::String* a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::String*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_LABEL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Label_2(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_LABEL_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawTexture(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(a1, a2);
		}

		static ::System::Void DrawTexture_1(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::ScaleMode a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawTexture_2(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::ScaleMode a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawTexture_3(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::ScaleMode a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawTexture_4(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::ScaleMode a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::Color a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void DrawTexture_5(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::ScaleMode a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::Color a6, ::UnityEngine::Vector4 a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void DrawTexture_6(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::ScaleMode a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::Color a6, ::UnityEngine::Vector4 a7, ::UnityEngine::Vector4 a8)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void DrawTexture_7(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::ScaleMode a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::Color a6, ::UnityEngine::Vector4 a7, ::UnityEngine::Vector4 a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_7_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void DrawTexture_8(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::ScaleMode a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::Color a6, ::UnityEngine::Color a7, ::UnityEngine::Color a8, ::UnityEngine::Color a9, ::UnityEngine::Vector4 a10, ::UnityEngine::Vector4 a11, ::System::Boolean a12)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_8_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Boolean CalculateScaledTextureRects(::UnityEngine::Rect a1, ::UnityEngine::ScaleMode a2, ::System::Single a3, ::UnityEngine::Rect& a4, ::UnityEngine::Rect& a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::ScaleMode, ::System::Single, ::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALCULATESCALEDTEXTURERECTS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawTextureWithTexCoords(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::Rect a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTUREWITHTEXCOORDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawTextureWithTexCoords_1(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2, ::UnityEngine::Rect a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTUREWITHTEXCOORDS_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Box(::UnityEngine::Rect a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BOX_OFFSET))(a1, a2);
		}

		static ::System::Void Box_1(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BOX_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Button(::UnityEngine::Rect a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_OFFSET))(a1, a2);
		}

		static ::System::Boolean Button_1(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Button_2(::UnityEngine::Rect a1, ::System::Int32 a2, ::UnityEngine::GUIContent* a3, ::UnityEngine::GUIStyle* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean RepeatButton(::UnityEngine::Rect a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_REPEATBUTTON_OFFSET))(a1, a2);
		}

		static ::System::Boolean RepeatButton_1(::UnityEngine::Rect a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_REPEATBUTTON_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean DoRepeatButton(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3, ::UnityEngine::FocusType a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::FocusType))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOREPEATBUTTON_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* PasswordFieldGetStrToShow(::System::String* a1, ::System::Char a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_PASSWORDFIELDGETSTRTOSHOW_OFFSET))(a1, a2);
		}

		static ::System::Void DoTextField(::UnityEngine::Rect a1, ::System::Int32 a2, ::UnityEngine::GUIContent* a3, ::System::Boolean a4, ::System::Int32 a5, ::UnityEngine::GUIStyle* a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOTEXTFIELD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DoTextField_1(::UnityEngine::Rect a1, ::System::Int32 a2, ::UnityEngine::GUIContent* a3, ::System::Boolean a4, ::System::Int32 a5, ::UnityEngine::GUIStyle* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOTEXTFIELD_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void DoTextField_2(::UnityEngine::Rect a1, ::System::Int32 a2, ::UnityEngine::GUIContent* a3, ::System::Boolean a4, ::System::Int32 a5, ::UnityEngine::GUIStyle* a6, ::System::String* a7, ::System::Char a8)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOTEXTFIELD_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void HandleTextFieldEventForTouchscreen(::UnityEngine::Rect a1, ::System::Int32 a2, ::UnityEngine::GUIContent* a3, ::System::Boolean a4, ::System::Int32 a5, ::UnityEngine::GUIStyle* a6, ::System::String* a7, ::System::Char a8, ::UnityEngine::TextEditor* a9)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::System::String*, ::System::Char, ::UnityEngine::TextEditor*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORTOUCHSCREEN_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void HandleTextFieldEventForDesktop(::UnityEngine::Rect a1, ::System::Int32 a2, ::UnityEngine::GUIContent* a3, ::System::Boolean a4, ::System::Int32 a5, ::UnityEngine::GUIStyle* a6, ::UnityEngine::TextEditor* a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::UnityEngine::TextEditor*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORDESKTOP_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void HandleTextFieldEventForDesktopWithForcedKeyboard(::UnityEngine::Rect a1, ::System::Int32 a2, ::UnityEngine::GUIContent* a3, ::System::Boolean a4, ::System::Int32 a5, ::UnityEngine::GUIStyle* a6, ::System::String* a7, ::UnityEngine::TextEditor* a8)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*, ::System::String*, ::UnityEngine::TextEditor*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HANDLETEXTFIELDEVENTFORDESKTOPWITHFORCEDKEYBOARD_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean Toggle(::UnityEngine::Rect a1, ::System::Boolean a2, ::UnityEngine::GUIContent* a3, ::UnityEngine::GUIStyle* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_TOGGLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 SelectionGrid(::UnityEngine::Rect a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::GUIContent*>* a3, ::System::Int32 a4, ::UnityEngine::GUIStyle* a5)
		{
			return ((::System::Int32(*)(::UnityEngine::Rect, ::System::Int32, ::Il2CppArray<::UnityEngine::GUIContent*>*, ::System::Int32, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SELECTIONGRID_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 CalcTotalHorizSpacing(::System::Int32 a1, ::UnityEngine::GUIStyle* a2, ::UnityEngine::GUIStyle* a3, ::UnityEngine::GUIStyle* a4, ::UnityEngine::GUIStyle* a5)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALCTOTALHORIZSPACING_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean DoControl(::UnityEngine::Rect a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::UnityEngine::GUIContent* a5, ::UnityEngine::GUIStyle* a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOCONTROL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DoLabel(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOLABEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean DoToggle(::UnityEngine::Rect a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::GUIContent* a4, ::UnityEngine::GUIStyle* a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOTOGGLE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean DoButton(::UnityEngine::Rect a1, ::System::Int32 a2, ::UnityEngine::GUIContent* a3, ::UnityEngine::GUIStyle* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOBUTTON_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 DoButtonGrid(::UnityEngine::Rect a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::GUIContent*>* a3, ::Il2CppArray<::System::String*>* a4, ::System::Int32 a5, ::UnityEngine::GUIStyle* a6, ::UnityEngine::GUIStyle* a7, ::UnityEngine::GUIStyle* a8, ::UnityEngine::GUIStyle* a9, ::UnityEngine::GUI_ToolbarButtonSize a10, ::Il2CppArray<::System::Boolean>* a11)
		{
			return ((::System::Int32(*)(::UnityEngine::Rect, ::System::Int32, ::Il2CppArray<::UnityEngine::GUIContent*>*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUI_ToolbarButtonSize, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOBUTTONGRID_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::Il2CppArray<::UnityEngine::Rect>* CalcMouseRects(::UnityEngine::Rect a1, ::Il2CppArray<::UnityEngine::GUIContent*>* a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::GUIStyle* a6, ::UnityEngine::GUIStyle* a7, ::UnityEngine::GUIStyle* a8, ::UnityEngine::GUIStyle* a9, ::System::Boolean a10, ::UnityEngine::GUI_ToolbarButtonSize a11)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::UnityEngine::Rect, ::Il2CppArray<::UnityEngine::GUIContent*>*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::System::Boolean, ::UnityEngine::GUI_ToolbarButtonSize))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALCMOUSERECTS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::Single HorizontalSlider(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::GUIStyle* a5, ::UnityEngine::GUIStyle* a6)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HORIZONTALSLIDER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single Slider(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::GUIStyle* a6, ::UnityEngine::GUIStyle* a7, ::System::Boolean a8, ::System::Int32 a9, ::UnityEngine::GUIStyle* a10)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::System::Boolean, ::System::Int32, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SLIDER_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Single HorizontalScrollbar(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::GUIStyle* a6)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HORIZONTALSCROLLBAR_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean ScrollerRepeatButton(::System::Int32 a1, ::UnityEngine::Rect a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Rect, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SCROLLERREPEATBUTTON_OFFSET))(a1, a2, a3);
		}

		static ::System::Single VerticalScrollbar(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::GUIStyle* a6)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_VERTICALSCROLLBAR_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single Scroller(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::GUIStyle* a6, ::UnityEngine::GUIStyle* a7, ::UnityEngine::GUIStyle* a8, ::UnityEngine::GUIStyle* a9, ::System::Boolean a10)
		{
			return ((::System::Single(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SCROLLER_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void BeginGroup(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINGROUP_OFFSET))(a1);
		}

		static ::System::Void BeginGroup_1(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINGROUP_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BeginGroup_2(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINGROUP_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EndGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_ENDGROUP_OFFSET))();
		}

		static ::UnityEngineInternal::GenericStack* get_scrollViewStates()
		{
			return ((::UnityEngineInternal::GenericStack*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_SCROLLVIEWSTATES_OFFSET))();
		}

		static ::UnityEngine::Vector2 BeginScrollView(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Rect a3, ::System::Boolean a4, ::System::Boolean a5, ::UnityEngine::GUIStyle* a6, ::UnityEngine::GUIStyle* a7, ::UnityEngine::GUIStyle* a8)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Rect, ::System::Boolean, ::System::Boolean, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BEGINSCROLLVIEW_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void EndScrollView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_ENDSCROLLVIEW_OFFSET))(a1);
		}

		static ::System::Void CallWindowDelegate(::UnityEngine::GUI_WindowFunction* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::GUISkin* a4, ::System::Int32 a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::GUIStyle* a8)
		{
			return ((::System::Void(*)(::UnityEngine::GUI_WindowFunction*, ::System::Int32, ::System::Int32, ::UnityEngine::GUISkin*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALLWINDOWDELEGATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void get_color_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_COLOR_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_color_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_COLOR_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_backgroundColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_backgroundColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_contentColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_CONTENTCOLOR_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_contentColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_CONTENTCOLOR_INJECTED_OFFSET))(a1);
		}
	};
}
