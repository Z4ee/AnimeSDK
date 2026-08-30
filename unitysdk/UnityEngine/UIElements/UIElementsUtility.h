#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIElements/ContextType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class GUILayoutUtility_LayoutCache; }
namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IMGUIContainer; }
namespace UnityEngine::UIElements { class Panel; }

#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_BEGINCONTAINERGUI_OFFSET UNITYSDK_OFFSET(0x1EDEE160)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CLEANUPROOTS_OFFSET UNITYSDK_OFFSET(0x1EDFE0E0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1EDFE320)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x1EDFE2B0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_DODISPATCH_OFFSET UNITYSDK_OFFSET(0x1EDFD990)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EDFE150)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUI_OFFSET UNITYSDK_OFFSET(0x1EDEE480)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETALLPANELS_OFFSET UNITYSDK_OFFSET(0x1EDFCE20)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETPANELSITERATOR_OFFSET UNITYSDK_OFFSET(0x1EDFE830)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_MAKECURRENTIMGUICONTAINERDIRTY_OFFSET UNITYSDK_OFFSET(0x1EDFD500)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1EDFD840)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0x1EDFD830)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_REMOVECACHEDPANEL_OFFSET UNITYSDK_OFFSET(0x1EDE0F70)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_TAKECAPTURE_OFFSET UNITYSDK_OFFSET(0x1EDFD620)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDFD0D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIElementsUtility_TypeDefinitionIndex = 5890;

	class UIElementsUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Event** StaticGet_s_EventInstance()
		{
			return (::UnityEngine::Event**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x19040);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UIElements::Panel*>** StaticGet_s_UIElementsCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UIElements::Panel*>**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x19048);
		}
		static ::System::String** StaticGet_s_RepaintProfilerMarkerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x19050);
		}
		static ::System::String** StaticGet_s_EventProfilerMarkerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x19058);
		}
		static ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>** StaticGet_s_ContainerStack()
		{
			return (::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x19060);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_EventProfilerMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x91B0);
		}
		static ::UnityEngine::Color* StaticGet_editorPlayModeTintColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x91B8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_RepaintProfilerMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x91C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void MakeCurrentIMGUIContainerDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_MAKECURRENTIMGUICONTAINERDIRTY_OFFSET))();
		}

		static ::System::Void TakeCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_TAKECAPTURE_OFFSET))();
		}

		static ::System::Void ReleaseCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_RELEASECAPTURE_OFFSET))();
		}

		static ::System::Boolean ProcessEvent(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_PROCESSEVENT_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveCachedPanel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_REMOVECACHEDPANEL_OFFSET))(a1);
		}

		static ::System::Void CleanupRoots()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CLEANUPROOTS_OFFSET))();
		}

		static ::System::Boolean EndContainerGUIFromException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void BeginContainerGUI(::UnityEngine::GUILayoutUtility_LayoutCache* a1, ::UnityEngine::Event* a2, ::UnityEngine::UIElements::IMGUIContainer* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GUILayoutUtility_LayoutCache*, ::UnityEngine::Event*, ::UnityEngine::UIElements::IMGUIContainer*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_BEGINCONTAINERGUI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EndContainerGUI(::UnityEngine::Event* a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::UnityEngine::Event*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUI_OFFSET))(a1, a2);
		}

		static ::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event* a1)
		{
			return ((::UnityEngine::UIElements::EventBase*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_OFFSET))(a1);
		}

		static ::UnityEngine::UIElements::EventBase* CreateEvent_1(::UnityEngine::Event* a1, ::UnityEngine::EventType a2)
		{
			return ((::UnityEngine::UIElements::EventBase*(*)(::UnityEngine::Event*, ::UnityEngine::EventType))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean DoDispatch(::UnityEngine::UIElements::BaseVisualElementPanel* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::BaseVisualElementPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_DODISPATCH_OFFSET))(a1);
		}

		static ::System::Void GetAllPanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* a1, ::UnityEngine::UIElements::ContextType a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*, ::UnityEngine::UIElements::ContextType))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETALLPANELS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2_Enumerator<::System::Int32, ::UnityEngine::UIElements::Panel*> GetPanelsIterator()
		{
			return ((::System::Collections::Generic::Dictionary_2_Enumerator<::System::Int32, ::UnityEngine::UIElements::Panel*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETPANELSITERATOR_OFFSET))();
		}
	};
}
