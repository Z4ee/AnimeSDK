#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutGroup; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUILayoutUtility_LayoutCache; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUILAYOUTUTILITY_BEGINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1CAD2330)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGINLAYOUTAREA_OFFSET UNITYSDK_OFFSET(0x1CACC930)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGINLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x1CACBE10)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGINWINDOW_OFFSET UNITYSDK_OFFSET(0x1CAC8390)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGIN_OFFSET UNITYSDK_OFFSET(0x1CAD21B0)
#define UNITYENGINE_GUILAYOUTUTILITY_CREATEGUILAYOUTGROUPINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x1CAD3240)
#define UNITYENGINE_GUILAYOUTUTILITY_DOGETRECT_1_OFFSET UNITYSDK_OFFSET(0x1CAD39F0)
#define UNITYENGINE_GUILAYOUTUTILITY_DOGETRECT_OFFSET UNITYSDK_OFFSET(0x1CAD33B0)
#define UNITYENGINE_GUILAYOUTUTILITY_ENDLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x1CACC180)
#define UNITYENGINE_GUILAYOUTUTILITY_GETRECT_1_OFFSET UNITYSDK_OFFSET(0x1CACBAE0)
#define UNITYENGINE_GUILAYOUTUTILITY_GETRECT_OFFSET UNITYSDK_OFFSET(0x1CACA760)
#define UNITYENGINE_GUILAYOUTUTILITY_GET_SPACESTYLE_OFFSET UNITYSDK_OFFSET(0x1CACBA60)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CAD20F0)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_OFFSET UNITYSDK_OFFSET(0x1CAD20C0)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CAD2110)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_OFFSET UNITYSDK_OFFSET(0x1CAD2100)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFREEGROUP_OFFSET UNITYSDK_OFFSET(0x1CAD2460)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMCONTAINER_OFFSET UNITYSDK_OFFSET(0x1CAD2E90)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMEDITORWINDOW_OFFSET UNITYSDK_OFFSET(0x1CAD2AC0)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTSINGLEGROUP_OFFSET UNITYSDK_OFFSET(0x1CAD25B0)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUT_OFFSET UNITYSDK_OFFSET(0x1CAC8620)
#define UNITYENGINE_GUILAYOUTUTILITY_SELECTIDLIST_OFFSET UNITYSDK_OFFSET(0x1CAC8150)
#define UNITYENGINE_GUILAYOUTUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAD3C50)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutUtility_TypeDefinitionIndex = 5169;

	class GUILayoutUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::GUILayoutUtility_LayoutCache** StaticGet_current()
		{
			return (::UnityEngine::GUILayoutUtility_LayoutCache**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x19D80);
		}
		static ::UnityEngine::GUIStyle** StaticGet_s_SpaceStyle()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x19D88);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GUILayoutUtility_LayoutCache*>** StaticGet_s_StoredLayouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GUILayoutUtility_LayoutCache*>**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x19D90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GUILayoutUtility_LayoutCache*>** StaticGet_s_StoredWindows()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GUILayoutUtility_LayoutCache*>**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x19D98);
		}
		static ::UnityEngine::Rect* StaticGet_kDummyRect()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x9360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rect Internal_GetWindowRect(::System::Int32 a1)
		{
			return ((::UnityEngine::Rect(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_OFFSET))(a1);
		}

		static ::System::Void Internal_MoveWindow(::System::Int32 a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GUILayoutUtility_LayoutCache* SelectIDList(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::GUILayoutUtility_LayoutCache*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_SELECTIDLIST_OFFSET))(a1, a2);
		}

		static ::System::Void Begin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGIN_OFFSET))(a1);
		}

		static ::System::Void BeginContainer(::UnityEngine::GUILayoutUtility_LayoutCache* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GUILayoutUtility_LayoutCache*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINCONTAINER_OFFSET))(a1);
		}

		static ::System::Void BeginWindow(::System::Int32 a1, ::UnityEngine::GUIStyle* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINWINDOW_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Layout()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUT_OFFSET))();
		}

		static ::System::Void LayoutFromEditorWindow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMEDITORWINDOW_OFFSET))();
		}

		static ::System::Void LayoutFromContainer(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMCONTAINER_OFFSET))(a1, a2);
		}

		static ::System::Void LayoutFreeGroup(::UnityEngine::GUILayoutGroup* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GUILayoutGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFREEGROUP_OFFSET))(a1);
		}

		static ::System::Void LayoutSingleGroup(::UnityEngine::GUILayoutGroup* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GUILayoutGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTSINGLEGROUP_OFFSET))(a1);
		}

		static ::UnityEngine::GUILayoutGroup* CreateGUILayoutGroupInstanceOfType(::System::Type* a1)
		{
			return ((::UnityEngine::GUILayoutGroup*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_CREATEGUILAYOUTGROUPINSTANCEOFTYPE_OFFSET))(a1);
		}

		static ::UnityEngine::GUILayoutGroup* BeginLayoutGroup(::UnityEngine::GUIStyle* a1, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a2, ::System::Type* a3)
		{
			return ((::UnityEngine::GUILayoutGroup*(*)(::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINLAYOUTGROUP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EndLayoutGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_ENDLAYOUTGROUP_OFFSET))();
		}

		static ::UnityEngine::GUILayoutGroup* BeginLayoutArea(::UnityEngine::GUIStyle* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::GUILayoutGroup*(*)(::UnityEngine::GUIStyle*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINLAYOUTAREA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect GetRect(::UnityEngine::GUIContent* a1, ::UnityEngine::GUIStyle* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_GETRECT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Rect DoGetRect(::UnityEngine::GUIContent* a1, ::UnityEngine::GUIStyle* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_DOGETRECT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Rect GetRect_1(::System::Single a1, ::System::Single a2, ::UnityEngine::GUIStyle* a3, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a4)
		{
			return ((::UnityEngine::Rect(*)(::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_GETRECT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Rect DoGetRect_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::GUIStyle* a5, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a6)
		{
			return ((::UnityEngine::Rect(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_DOGETRECT_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::GUIStyle* get_spaceStyle()
		{
			return ((::UnityEngine::GUIStyle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_GET_SPACESTYLE_OFFSET))();
		}

		static ::System::Void Internal_GetWindowRect_Injected(::System::Int32 a1, ::UnityEngine::Rect& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_MoveWindow_Injected(::System::Int32 a1, ::UnityEngine::Rect& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_INJECTED_OFFSET))(a1, a2);
		}
	};
}
