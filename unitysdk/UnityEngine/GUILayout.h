#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUILAYOUT_BEGINAREA_1_OFFSET UNITYSDK_OFFSET(0x1AEC5E80)
#define UNITYENGINE_GUILAYOUT_BEGINAREA_OFFSET UNITYSDK_OFFSET(0x1AEC5D50)
#define UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_1_OFFSET UNITYSDK_OFFSET(0x1AEC5390)
#define UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1AEC5260)
#define UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x1AEC66C0)
#define UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1AEC65B0)
#define UNITYENGINE_GUILAYOUT_BEGINVERTICAL_1_OFFSET UNITYSDK_OFFSET(0x1AEC5B90)
#define UNITYENGINE_GUILAYOUT_BEGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x1AEC5A60)
#define UNITYENGINE_GUILAYOUT_BUTTON_1_OFFSET UNITYSDK_OFFSET(0x1AEC4120)
#define UNITYENGINE_GUILAYOUT_BUTTON_OFFSET UNITYSDK_OFFSET(0x1AEC3EC0)
#define UNITYENGINE_GUILAYOUT_DOBUTTON_OFFSET UNITYSDK_OFFSET(0x1AEC4020)
#define UNITYENGINE_GUILAYOUT_DOHORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x1AEC4B90)
#define UNITYENGINE_GUILAYOUT_DOLABEL_OFFSET UNITYSDK_OFFSET(0x1AEC3E10)
#define UNITYENGINE_GUILAYOUT_DOTEXTFIELD_OFFSET UNITYSDK_OFFSET(0x1AEC41D0)
#define UNITYENGINE_GUILAYOUT_DOTOGGLE_OFFSET UNITYSDK_OFFSET(0x1AEC4800)
#define UNITYENGINE_GUILAYOUT_ENDAREA_OFFSET UNITYSDK_OFFSET(0x1AEC63A0)
#define UNITYENGINE_GUILAYOUT_ENDHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1AEC58A0)
#define UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x1AEC6A30)
#define UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1AEC69C0)
#define UNITYENGINE_GUILAYOUT_ENDVERTICAL_OFFSET UNITYSDK_OFFSET(0x1AEC5D40)
#define UNITYENGINE_GUILAYOUT_EXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1AEC6AA0)
#define UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1AEC1C30)
#define UNITYENGINE_GUILAYOUT_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x1AEC4AA0)
#define UNITYENGINE_GUILAYOUT_LABEL_OFFSET UNITYSDK_OFFSET(0x1AEC3C50)
#define UNITYENGINE_GUILAYOUT_SELECTIONGRID_1_OFFSET UNITYSDK_OFFSET(0x1AEC4A00)
#define UNITYENGINE_GUILAYOUT_SELECTIONGRID_OFFSET UNITYSDK_OFFSET(0x1AEC4900)
#define UNITYENGINE_GUILAYOUT_SPACE_OFFSET UNITYSDK_OFFSET(0x1AEC4DD0)
#define UNITYENGINE_GUILAYOUT_TEXTFIELD_OFFSET UNITYSDK_OFFSET(0x1AEC4130)
#define UNITYENGINE_GUILAYOUT_TOGGLE_1_OFFSET UNITYSDK_OFFSET(0x1AEC4880)
#define UNITYENGINE_GUILAYOUT_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1AEC4620)
#define UNITYENGINE_GUILAYOUT_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AEC1BC0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayout_TypeDefinitionIndex = 5221;

	class GUILayout : public ::System::Object
	{
	public:
		static ::System::Void Label(::System::String* a1, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_LABEL_OFFSET))(a1, a2);
		}

		static ::System::Void DoLabel(::UnityEngine::GUIContent* a1, ::UnityEngine::GUIStyle* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOLABEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Button(::System::String* a1, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BUTTON_OFFSET))(a1, a2);
		}

		static ::System::Boolean Button_1(::UnityEngine::GUIContent* a1, ::UnityEngine::GUIStyle* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BUTTON_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean DoButton(::UnityEngine::GUIContent* a1, ::UnityEngine::GUIStyle* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOBUTTON_OFFSET))(a1, a2, a3);
		}

		static ::System::String* TextField(::System::String* a1, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_TEXTFIELD_OFFSET))(a1, a2);
		}

		static ::System::String* DoTextField(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::GUIStyle* a4, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a5)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOTEXTFIELD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean Toggle(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_TOGGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Toggle_1(::System::Boolean a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a4)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_TOGGLE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean DoToggle(::System::Boolean a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a4)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOTOGGLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 SelectionGrid(::System::Int32 a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::UnityEngine::GUIStyle* a4, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a5)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Int32, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SELECTIONGRID_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 SelectionGrid_1(::System::Int32 a1, ::Il2CppArray<::UnityEngine::GUIContent*>* a2, ::System::Int32 a3, ::UnityEngine::GUIStyle* a4, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a5)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::UnityEngine::GUIContent*>*, ::System::Int32, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SELECTIONGRID_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single HorizontalSlider(::System::Single a1, ::System::Single a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_HORIZONTALSLIDER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single DoHorizontalSlider(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::GUIStyle* a4, ::UnityEngine::GUIStyle* a5, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a6)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOHORIZONTALSLIDER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Space(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SPACE_OFFSET))(a1);
		}

		static ::System::Void BeginHorizontal(::Il2CppArray<::UnityEngine::GUILayoutOption*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_OFFSET))(a1);
		}

		static ::System::Void BeginHorizontal_1(::UnityEngine::GUIContent* a1, ::UnityEngine::GUIStyle* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EndHorizontal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDHORIZONTAL_OFFSET))();
		}

		static ::System::Void BeginVertical(::Il2CppArray<::UnityEngine::GUILayoutOption*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINVERTICAL_OFFSET))(a1);
		}

		static ::System::Void BeginVertical_1(::UnityEngine::GUIContent* a1, ::UnityEngine::GUIStyle* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINVERTICAL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EndVertical()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDVERTICAL_OFFSET))();
		}

		static ::System::Void BeginArea(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_OFFSET))(a1);
		}

		static ::System::Void BeginArea_1(::UnityEngine::Rect a1, ::UnityEngine::GUIContent* a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EndArea()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDAREA_OFFSET))();
		}

		static ::UnityEngine::Vector2 BeginScrollView(::UnityEngine::Vector2 a1, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 BeginScrollView_1(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::System::Boolean a3, ::UnityEngine::GUIStyle* a4, ::UnityEngine::GUIStyle* a5, ::UnityEngine::GUIStyle* a6, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a7)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void EndScrollView()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_OFFSET))();
		}

		static ::System::Void EndScrollView_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_1_OFFSET))(a1);
		}

		static ::UnityEngine::GUILayoutOption* Width(::System::Single a1)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_WIDTH_OFFSET))(a1);
		}

		static ::UnityEngine::GUILayoutOption* Height(::System::Single a1)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET))(a1);
		}

		static ::UnityEngine::GUILayoutOption* ExpandWidth(::System::Boolean a1)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_EXPANDWIDTH_OFFSET))(a1);
		}
	};
}
