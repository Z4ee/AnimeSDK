#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class GUI_WindowFunction; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_GUILAYOUT_BEGINAREA_1_OFFSET UNITYSDK_OFFSET(0x1E426270)
#define UNITYENGINE_GUILAYOUT_BEGINAREA_2_OFFSET UNITYSDK_OFFSET(0x1E4262F0)
#define UNITYENGINE_GUILAYOUT_BEGINAREA_3_OFFSET UNITYSDK_OFFSET(0x1E426080)
#define UNITYENGINE_GUILAYOUT_BEGINAREA_OFFSET UNITYSDK_OFFSET(0x1E425FF0)
#define UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_1_OFFSET UNITYSDK_OFFSET(0x1E425940)
#define UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_2_OFFSET UNITYSDK_OFFSET(0x1E425820)
#define UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E425790)
#define UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x1E4269C0)
#define UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1E4268E0)
#define UNITYENGINE_GUILAYOUT_BEGINVERTICAL_1_OFFSET UNITYSDK_OFFSET(0x1E425F70)
#define UNITYENGINE_GUILAYOUT_BEGINVERTICAL_2_OFFSET UNITYSDK_OFFSET(0x1E425E50)
#define UNITYENGINE_GUILAYOUT_BEGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E425DC0)
#define UNITYENGINE_GUILAYOUT_BOX_OFFSET UNITYSDK_OFFSET(0x1E424BA0)
#define UNITYENGINE_GUILAYOUT_BUTTON_1_OFFSET UNITYSDK_OFFSET(0x1E425040)
#define UNITYENGINE_GUILAYOUT_BUTTON_OFFSET UNITYSDK_OFFSET(0x1E424DE0)
#define UNITYENGINE_GUILAYOUT_DOBOX_OFFSET UNITYSDK_OFFSET(0x1E424D60)
#define UNITYENGINE_GUILAYOUT_DOBUTTON_OFFSET UNITYSDK_OFFSET(0x1E424F40)
#define UNITYENGINE_GUILAYOUT_DOLABEL_OFFSET UNITYSDK_OFFSET(0x1E424960)
#define UNITYENGINE_GUILAYOUT_DOTOGGLE_OFFSET UNITYSDK_OFFSET(0x1E4252F0)
#define UNITYENGINE_GUILAYOUT_DOWINDOW_OFFSET UNITYSDK_OFFSET(0x1E426F80)
#define UNITYENGINE_GUILAYOUT_ENDAREA_OFFSET UNITYSDK_OFFSET(0x1E4266A0)
#define UNITYENGINE_GUILAYOUT_ENDHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E425C40)
#define UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x1E426D70)
#define UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1E426D00)
#define UNITYENGINE_GUILAYOUT_ENDVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E425FE0)
#define UNITYENGINE_GUILAYOUT_EXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E427370)
#define UNITYENGINE_GUILAYOUT_EXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E427310)
#define UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1E423640)
#define UNITYENGINE_GUILAYOUT_LABEL_1_OFFSET UNITYSDK_OFFSET(0x1E4249E0)
#define UNITYENGINE_GUILAYOUT_LABEL_OFFSET UNITYSDK_OFFSET(0x1E4247A0)
#define UNITYENGINE_GUILAYOUT_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4272A0)
#define UNITYENGINE_GUILAYOUT_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4271C0)
#define UNITYENGINE_GUILAYOUT_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E427230)
#define UNITYENGINE_GUILAYOUT_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1E427150)
#define UNITYENGINE_GUILAYOUT_SPACE_OFFSET UNITYSDK_OFFSET(0x1E425380)
#define UNITYENGINE_GUILAYOUT_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1E425160)
#define UNITYENGINE_GUILAYOUT_WIDTH_OFFSET UNITYSDK_OFFSET(0x1E4235D0)
#define UNITYENGINE_GUILAYOUT_WINDOW_OFFSET UNITYSDK_OFFSET(0x1E426DD0)
#define UNITYENGINE_GUILAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4273D0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayout_TypeDefinitionIndex = 6411;

	class GUILayout : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Label(::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_LABEL_OFFSET))(text, options);
		}

		static ::System::Void Label_1(::System::String* text, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_LABEL_1_OFFSET))(text, style, options);
		}

		static ::System::Void DoLabel(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOLABEL_OFFSET))(content, style, options);
		}

		static ::System::Void Box(::UnityEngine::Texture* image, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BOX_OFFSET))(image, options);
		}

		static ::System::Void DoBox(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOBOX_OFFSET))(content, style, options);
		}

		static ::System::Boolean Button(::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BUTTON_OFFSET))(text, options);
		}

		static ::System::Boolean Button_1(::System::String* text, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BUTTON_1_OFFSET))(text, style, options);
		}

		static ::System::Boolean DoButton(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOBUTTON_OFFSET))(content, style, options);
		}

		static ::System::Boolean Toggle(::System::Boolean value, ::System::String* text, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::String*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_TOGGLE_OFFSET))(value, text, style, options);
		}

		static ::System::Boolean DoToggle(::System::Boolean value, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOTOGGLE_OFFSET))(value, content, style, options);
		}

		static ::System::Void Space(::System::Single pixels)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SPACE_OFFSET))(pixels);
		}

		static ::System::Void BeginHorizontal(::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_OFFSET))(options);
		}

		static ::System::Void BeginHorizontal_1(::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_1_OFFSET))(style, options);
		}

		static ::System::Void BeginHorizontal_2(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_2_OFFSET))(content, style, options);
		}

		static ::System::Void EndHorizontal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDHORIZONTAL_OFFSET))();
		}

		static ::System::Void BeginVertical(::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINVERTICAL_OFFSET))(options);
		}

		static ::System::Void BeginVertical_1(::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINVERTICAL_1_OFFSET))(style, options);
		}

		static ::System::Void BeginVertical_2(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINVERTICAL_2_OFFSET))(content, style, options);
		}

		static ::System::Void EndVertical()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDVERTICAL_OFFSET))();
		}

		static ::System::Void BeginArea(::UnityEngine::Rect screenRect)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_OFFSET))(screenRect);
		}

		static ::System::Void BeginArea_1(::UnityEngine::Rect screenRect, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_1_OFFSET))(screenRect, style);
		}

		static ::System::Void BeginArea_2(::UnityEngine::Rect screenRect, ::System::String* text, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::String*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_2_OFFSET))(screenRect, text, style);
		}

		static ::System::Void BeginArea_3(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_3_OFFSET))(screenRect, content, style);
		}

		static ::System::Void EndArea()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDAREA_OFFSET))();
		}

		static ::UnityEngine::Vector2 BeginScrollView(::UnityEngine::Vector2 scrollPosition, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_OFFSET))(scrollPosition, options);
		}

		static ::UnityEngine::Vector2 BeginScrollView_1(::UnityEngine::Vector2 scrollPosition, ::System::Boolean alwaysShowHorizontal, ::System::Boolean alwaysShowVertical, ::UnityEngine::GUIStyle* horizontalScrollbar, ::UnityEngine::GUIStyle* verticalScrollbar, ::UnityEngine::GUIStyle* background, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_1_OFFSET))(scrollPosition, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background, options);
		}

		static ::System::Void EndScrollView()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_OFFSET))();
		}

		static ::System::Void EndScrollView_1(::System::Boolean handleScrollWheel)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_1_OFFSET))(handleScrollWheel);
		}

		static ::UnityEngine::Rect Window(::System::Int32 id, ::UnityEngine::Rect screenRect, ::UnityEngine::GUI_WindowFunction* func, ::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Rect(*)(::System::Int32, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_WINDOW_OFFSET))(id, screenRect, func, text, options);
		}

		static ::UnityEngine::Rect DoWindow(::System::Int32 id, ::UnityEngine::Rect screenRect, ::UnityEngine::GUI_WindowFunction* func, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Rect(*)(::System::Int32, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOWINDOW_OFFSET))(id, screenRect, func, content, style, options);
		}

		static ::UnityEngine::GUILayoutOption* Width(::System::Single width)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_WIDTH_OFFSET))(width);
		}

		static ::UnityEngine::GUILayoutOption* MinWidth(::System::Single minWidth)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_MINWIDTH_OFFSET))(minWidth);
		}

		static ::UnityEngine::GUILayoutOption* MaxWidth(::System::Single maxWidth)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_MAXWIDTH_OFFSET))(maxWidth);
		}

		static ::UnityEngine::GUILayoutOption* Height(::System::Single height)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET))(height);
		}

		static ::UnityEngine::GUILayoutOption* MinHeight(::System::Single minHeight)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_MINHEIGHT_OFFSET))(minHeight);
		}

		static ::UnityEngine::GUILayoutOption* MaxHeight(::System::Single maxHeight)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_MAXHEIGHT_OFFSET))(maxHeight);
		}

		static ::UnityEngine::GUILayoutOption* ExpandWidth(::System::Boolean expand)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_EXPANDWIDTH_OFFSET))(expand);
		}

		static ::UnityEngine::GUILayoutOption* ExpandHeight(::System::Boolean expand)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_EXPANDHEIGHT_OFFSET))(expand);
		}
	};
}
