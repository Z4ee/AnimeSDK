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

#define UNITYENGINE_GUILAYOUTUTILITY_BEGINCONTAINER_OFFSET UNITYSDK_OFFSET(0x18A79670)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGINLAYOUTAREA_OFFSET UNITYSDK_OFFSET(0x18A745C0)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGINLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x18A73B50)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGINWINDOW_OFFSET UNITYSDK_OFFSET(0x18A71970)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGIN_OFFSET UNITYSDK_OFFSET(0x18A794F0)
#define UNITYENGINE_GUILAYOUTUTILITY_CREATEGUILAYOUTGROUPINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x18A79EA0)
#define UNITYENGINE_GUILAYOUTUTILITY_DOGETRECT_1_OFFSET UNITYSDK_OFFSET(0x18A7A640)
#define UNITYENGINE_GUILAYOUTUTILITY_DOGETRECT_OFFSET UNITYSDK_OFFSET(0x18A79F90)
#define UNITYENGINE_GUILAYOUTUTILITY_ENDLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x18A73E10)
#define UNITYENGINE_GUILAYOUTUTILITY_GETRECT_1_OFFSET UNITYSDK_OFFSET(0x18A73820)
#define UNITYENGINE_GUILAYOUTUTILITY_GETRECT_OFFSET UNITYSDK_OFFSET(0x18A726D0)
#define UNITYENGINE_GUILAYOUTUTILITY_GET_SPACESTYLE_OFFSET UNITYSDK_OFFSET(0x18A737A0)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A79430)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_OFFSET UNITYSDK_OFFSET(0x18A79400)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A79450)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_OFFSET UNITYSDK_OFFSET(0x18A79440)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFREEGROUP_OFFSET UNITYSDK_OFFSET(0x18A797A0)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMCONTAINER_OFFSET UNITYSDK_OFFSET(0x18A79CA0)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMEDITORWINDOW_OFFSET UNITYSDK_OFFSET(0x18A79A90)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTSINGLEGROUP_OFFSET UNITYSDK_OFFSET(0x18A79900)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUT_OFFSET UNITYSDK_OFFSET(0x18A71E70)
#define UNITYENGINE_GUILAYOUTUTILITY_SELECTIDLIST_OFFSET UNITYSDK_OFFSET(0x18A716F0)
#define UNITYENGINE_GUILAYOUTUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A7A910)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutUtility_TypeDefinitionIndex = 5116;

	class GUILayoutUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIStyle** StaticGet_s_SpaceStyle()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15EE0);
		}
		static ::UnityEngine::GUILayoutUtility_LayoutCache** StaticGet_current()
		{
			return (::UnityEngine::GUILayoutUtility_LayoutCache**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15EE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GUILayoutUtility_LayoutCache*>** StaticGet_s_StoredWindows()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GUILayoutUtility_LayoutCache*>**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15EF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GUILayoutUtility_LayoutCache*>** StaticGet_s_StoredLayouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GUILayoutUtility_LayoutCache*>**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15EF8);
		}
		static ::UnityEngine::Rect* StaticGet_kDummyRect()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(GUILayoutUtility_TypeDefinitionIndex)->GetStaticField(0x6670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rect Internal_GetWindowRect(::System::Int32 windowID)
		{
			return ((::UnityEngine::Rect(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_OFFSET))(windowID);
		}

		static ::System::Void Internal_MoveWindow(::System::Int32 windowID, ::UnityEngine::Rect r)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_OFFSET))(windowID, r);
		}

		static ::UnityEngine::GUILayoutUtility_LayoutCache* SelectIDList(::System::Int32 instanceID, ::System::Boolean isWindow)
		{
			return ((::UnityEngine::GUILayoutUtility_LayoutCache*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_SELECTIDLIST_OFFSET))(instanceID, isWindow);
		}

		static ::System::Void Begin(::System::Int32 instanceID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGIN_OFFSET))(instanceID);
		}

		static ::System::Void BeginContainer(::UnityEngine::GUILayoutUtility_LayoutCache* cache)
		{
			return ((::System::Void(*)(::UnityEngine::GUILayoutUtility_LayoutCache*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINCONTAINER_OFFSET))(cache);
		}

		static ::System::Void BeginWindow(::System::Int32 windowID, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINWINDOW_OFFSET))(windowID, style, options);
		}

		static ::System::Void Layout()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUT_OFFSET))();
		}

		static ::System::Void LayoutFromEditorWindow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMEDITORWINDOW_OFFSET))();
		}

		static ::System::Void LayoutFromContainer(::System::Single w, ::System::Single h)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMCONTAINER_OFFSET))(w, h);
		}

		static ::System::Void LayoutFreeGroup(::UnityEngine::GUILayoutGroup* toplevel)
		{
			return ((::System::Void(*)(::UnityEngine::GUILayoutGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFREEGROUP_OFFSET))(toplevel);
		}

		static ::System::Void LayoutSingleGroup(::UnityEngine::GUILayoutGroup* i)
		{
			return ((::System::Void(*)(::UnityEngine::GUILayoutGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTSINGLEGROUP_OFFSET))(i);
		}

		static ::UnityEngine::GUILayoutGroup* CreateGUILayoutGroupInstanceOfType(::System::Type* LayoutType)
		{
			return ((::UnityEngine::GUILayoutGroup*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_CREATEGUILAYOUTGROUPINSTANCEOFTYPE_OFFSET))(LayoutType);
		}

		static ::UnityEngine::GUILayoutGroup* BeginLayoutGroup(::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options, ::System::Type* layoutType)
		{
			return ((::UnityEngine::GUILayoutGroup*(*)(::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINLAYOUTGROUP_OFFSET))(style, options, layoutType);
		}

		static ::System::Void EndLayoutGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_ENDLAYOUTGROUP_OFFSET))();
		}

		static ::UnityEngine::GUILayoutGroup* BeginLayoutArea(::UnityEngine::GUIStyle* style, ::System::Type* layoutType)
		{
			return ((::UnityEngine::GUILayoutGroup*(*)(::UnityEngine::GUIStyle*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINLAYOUTAREA_OFFSET))(style, layoutType);
		}

		static ::UnityEngine::Rect GetRect(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_GETRECT_OFFSET))(content, style, options);
		}

		static ::UnityEngine::Rect DoGetRect(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_DOGETRECT_OFFSET))(content, style, options);
		}

		static ::UnityEngine::Rect GetRect_1(::System::Single width, ::System::Single height, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Rect(*)(::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_GETRECT_1_OFFSET))(width, height, style, options);
		}

		static ::UnityEngine::Rect DoGetRect_1(::System::Single minWidth, ::System::Single maxWidth, ::System::Single minHeight, ::System::Single maxHeight, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Rect(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_DOGETRECT_1_OFFSET))(minWidth, maxWidth, minHeight, maxHeight, style, options);
		}

		static ::UnityEngine::GUIStyle* get_spaceStyle()
		{
			return ((::UnityEngine::GUIStyle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_GET_SPACESTYLE_OFFSET))();
		}

		static ::System::Void Internal_GetWindowRect_Injected(::System::Int32 windowID, ::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_INJECTED_OFFSET))(windowID, ret);
		}

		static ::System::Void Internal_MoveWindow_Injected(::System::Int32 windowID, ::UnityEngine::Rect& r)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_INJECTED_OFFSET))(windowID, r);
		}
	};
}
