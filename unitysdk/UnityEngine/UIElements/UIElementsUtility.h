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

#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_BEGINCONTAINERGUI_OFFSET UNITYSDK_OFFSET(0x1BBE60B0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CLEANUPROOTS_OFFSET UNITYSDK_OFFSET(0x1BBF8090)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1BBF82D0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x1BBF8260)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_DODISPATCH_OFFSET UNITYSDK_OFFSET(0x1BBF79E0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BBF8100)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUI_OFFSET UNITYSDK_OFFSET(0x1BBE6320)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETALLPANELS_OFFSET UNITYSDK_OFFSET(0x1BBF6E60)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETPANELSITERATOR_OFFSET UNITYSDK_OFFSET(0x1BBF8A60)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_MAKECURRENTIMGUICONTAINERDIRTY_OFFSET UNITYSDK_OFFSET(0x1BBF7560)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1BBF7860)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0x1BBF7850)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_REMOVECACHEDPANEL_OFFSET UNITYSDK_OFFSET(0x1BBD88A0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_TAKECAPTURE_OFFSET UNITYSDK_OFFSET(0x1BBF7680)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBF70F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIElementsUtility_TypeDefinitionIndex = 27472;

	class UIElementsUtility : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_s_EventProfilerMarkerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x22530);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UIElements::Panel*>** StaticGet_s_UIElementsCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UIElements::Panel*>**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x22538);
		}
		static ::UnityEngine::Event** StaticGet_s_EventInstance()
		{
			return (::UnityEngine::Event**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x22540);
		}
		static ::System::String** StaticGet_s_RepaintProfilerMarkerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x22548);
		}
		static ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>** StaticGet_s_ContainerStack()
		{
			return (::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>**)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x22550);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_EventProfilerMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x7770);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_RepaintProfilerMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x7778);
		}
		static ::UnityEngine::Color* StaticGet_editorPlayModeTintColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIElementsUtility_TypeDefinitionIndex)->GetStaticField(0x7780);
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

		static ::System::Boolean ProcessEvent(::System::Int32 instanceID, ::System::IntPtr nativeEventPtr)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_PROCESSEVENT_OFFSET))(instanceID, nativeEventPtr);
		}

		static ::System::Void RemoveCachedPanel(::System::Int32 instanceID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_REMOVECACHEDPANEL_OFFSET))(instanceID);
		}

		static ::System::Void CleanupRoots()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CLEANUPROOTS_OFFSET))();
		}

		static ::System::Boolean EndContainerGUIFromException(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET))(exception);
		}

		static ::System::Void BeginContainerGUI(::UnityEngine::GUILayoutUtility_LayoutCache* cache, ::UnityEngine::Event* evt, ::UnityEngine::UIElements::IMGUIContainer* container)
		{
			return ((::System::Void(*)(::UnityEngine::GUILayoutUtility_LayoutCache*, ::UnityEngine::Event*, ::UnityEngine::UIElements::IMGUIContainer*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_BEGINCONTAINERGUI_OFFSET))(cache, evt, container);
		}

		static ::System::Void EndContainerGUI(::UnityEngine::Event* evt, ::UnityEngine::Rect layoutSize)
		{
			return ((::System::Void(*)(::UnityEngine::Event*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUI_OFFSET))(evt, layoutSize);
		}

		static ::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event* systemEvent)
		{
			return ((::UnityEngine::UIElements::EventBase*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_OFFSET))(systemEvent);
		}

		static ::UnityEngine::UIElements::EventBase* CreateEvent_1(::UnityEngine::Event* systemEvent, ::UnityEngine::EventType eventType)
		{
			return ((::UnityEngine::UIElements::EventBase*(*)(::UnityEngine::Event*, ::UnityEngine::EventType))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_1_OFFSET))(systemEvent, eventType);
		}

		static ::System::Boolean DoDispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::BaseVisualElementPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_DODISPATCH_OFFSET))(panel);
		}

		static ::System::Void GetAllPanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* panels, ::UnityEngine::UIElements::ContextType contextType)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*, ::UnityEngine::UIElements::ContextType))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETALLPANELS_OFFSET))(panels, contextType);
		}

		static ::System::Collections::Generic::Dictionary_2_Enumerator<::System::Int32, ::UnityEngine::UIElements::Panel*> GetPanelsIterator()
		{
			return ((::System::Collections::Generic::Dictionary_2_Enumerator<::System::Int32, ::UnityEngine::UIElements::Panel*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETPANELSITERATOR_OFFSET))();
		}
	};
}
