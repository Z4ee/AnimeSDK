#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUILAYOUT_BEGINAREA_1_OFFSET UNITYSDK_OFFSET(0x18A743D0)
#define UNITYENGINE_GUILAYOUT_BEGINAREA_OFFSET UNITYSDK_OFFSET(0x18A742A0)
#define UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_1_OFFSET UNITYSDK_OFFSET(0x18A739A0)
#define UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18A73870)
#define UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x18A74B50)
#define UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x18A74A70)
#define UNITYENGINE_GUILAYOUT_BEGINVERTICAL_1_OFFSET UNITYSDK_OFFSET(0x18A740E0)
#define UNITYENGINE_GUILAYOUT_BEGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x18A73FB0)
#define UNITYENGINE_GUILAYOUT_BUTTON_OFFSET UNITYSDK_OFFSET(0x18A72700)
#define UNITYENGINE_GUILAYOUT_DOBUTTON_OFFSET UNITYSDK_OFFSET(0x18A72860)
#define UNITYENGINE_GUILAYOUT_DOHORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x18A731A0)
#define UNITYENGINE_GUILAYOUT_DOLABEL_OFFSET UNITYSDK_OFFSET(0x18A72650)
#define UNITYENGINE_GUILAYOUT_DOTEXTFIELD_OFFSET UNITYSDK_OFFSET(0x18A72A00)
#define UNITYENGINE_GUILAYOUT_DOTOGGLE_OFFSET UNITYSDK_OFFSET(0x18A73030)
#define UNITYENGINE_GUILAYOUT_ENDAREA_OFFSET UNITYSDK_OFFSET(0x18A74860)
#define UNITYENGINE_GUILAYOUT_ENDHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18A73E00)
#define UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x18A74EC0)
#define UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x18A74E50)
#define UNITYENGINE_GUILAYOUT_ENDVERTICAL_OFFSET UNITYSDK_OFFSET(0x18A74290)
#define UNITYENGINE_GUILAYOUT_EXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x18A74F30)
#define UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET UNITYSDK_OFFSET(0x18A71900)
#define UNITYENGINE_GUILAYOUT_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x18A730B0)
#define UNITYENGINE_GUILAYOUT_LABEL_OFFSET UNITYSDK_OFFSET(0x18A72480)
#define UNITYENGINE_GUILAYOUT_SPACE_OFFSET UNITYSDK_OFFSET(0x18A733E0)
#define UNITYENGINE_GUILAYOUT_TEXTFIELD_OFFSET UNITYSDK_OFFSET(0x18A72960)
#define UNITYENGINE_GUILAYOUT_TOGGLE_OFFSET UNITYSDK_OFFSET(0x18A72E50)
#define UNITYENGINE_GUILAYOUT_WIDTH_OFFSET UNITYSDK_OFFSET(0x18A71890)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayout_TypeDefinitionIndex = 5113;

	class GUILayout : public ::System::Object
	{
	public:
		static ::System::Void Label(::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_LABEL_OFFSET))(text, options);
		}

		static ::System::Void DoLabel(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOLABEL_OFFSET))(content, style, options);
		}

		static ::System::Boolean Button(::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BUTTON_OFFSET))(text, options);
		}

		static ::System::Boolean DoButton(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOBUTTON_OFFSET))(content, style, options);
		}

		static ::System::String* TextField(::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_TEXTFIELD_OFFSET))(text, options);
		}

		static ::System::String* DoTextField(::System::String* text, ::System::Int32 maxLength, ::System::Boolean multiline, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOTEXTFIELD_OFFSET))(text, maxLength, multiline, style, options);
		}

		static ::System::Boolean Toggle(::System::Boolean value, ::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_TOGGLE_OFFSET))(value, text, options);
		}

		static ::System::Boolean DoToggle(::System::Boolean value, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOTOGGLE_OFFSET))(value, content, style, options);
		}

		static ::System::Single HorizontalSlider(::System::Single value, ::System::Single leftValue, ::System::Single rightValue, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_HORIZONTALSLIDER_OFFSET))(value, leftValue, rightValue, options);
		}

		static ::System::Single DoHorizontalSlider(::System::Single value, ::System::Single leftValue, ::System::Single rightValue, ::UnityEngine::GUIStyle* slider, ::UnityEngine::GUIStyle* thumb, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOHORIZONTALSLIDER_OFFSET))(value, leftValue, rightValue, slider, thumb, options);
		}

		static ::System::Void Space(::System::Single pixels)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SPACE_OFFSET))(pixels);
		}

		static ::System::Void BeginHorizontal(::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_OFFSET))(options);
		}

		static ::System::Void BeginHorizontal_1(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_1_OFFSET))(content, style, options);
		}

		static ::System::Void EndHorizontal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDHORIZONTAL_OFFSET))();
		}

		static ::System::Void BeginVertical(::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINVERTICAL_OFFSET))(options);
		}

		static ::System::Void BeginVertical_1(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINVERTICAL_1_OFFSET))(content, style, options);
		}

		static ::System::Void EndVertical()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDVERTICAL_OFFSET))();
		}

		static ::System::Void BeginArea(::UnityEngine::Rect screenRect)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_OFFSET))(screenRect);
		}

		static ::System::Void BeginArea_1(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_1_OFFSET))(screenRect, content, style);
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

		static ::UnityEngine::GUILayoutOption* Width(::System::Single width)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_WIDTH_OFFSET))(width);
		}

		static ::UnityEngine::GUILayoutOption* Height(::System::Single height)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET))(height);
		}

		static ::UnityEngine::GUILayoutOption* ExpandWidth(::System::Boolean expand)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_EXPANDWIDTH_OFFSET))(expand);
		}
	};
}
