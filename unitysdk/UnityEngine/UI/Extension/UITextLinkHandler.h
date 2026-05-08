#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { template <typename T> class ExecuteEvents_EventFunction_1; }
namespace UnityEngine::UI::Extension { class LinkFeature; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ADD_ONANYLINKCLICKED_OFFSET UNITYSDK_OFFSET(0x1BD78D00)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_CACHEEVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1BD7A3A0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_COLLECTLINKDETAILSUNDER_OFFSET UNITYSDK_OFFSET(0x1BD79920)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_COLLECTLINKSOURCETEXTSUNDER_OFFSET UNITYSDK_OFFSET(0x1BD793D0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_COLLECTLINKTEXTSUNDER_OFFSET UNITYSDK_OFFSET(0x1BD78EC0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GETEVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1BD7AB10)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GET_ACTIVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1BD78CA0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x1BD79FE0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_NOTIFYGLOBALLINKCLICK_OFFSET UNITYSDK_OFFSET(0x1BD79F20)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BD7A630)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BD7A040)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1BD7A950)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1BD7B340)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0x1BD7AC80)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_REMOVE_ONANYLINKCLICKED_OFFSET UNITYSDK_OFFSET(0x1BD78DE0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_RESTORECURSOR_OFFSET UNITYSDK_OFFSET(0x1BD7A8D0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_SETHANDCURSOR_OFFSET UNITYSDK_OFFSET(0x1BD7AEB0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD7B500)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD7B4B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextLinkHandler_TypeDefinitionIndex = 65492;

	class UITextLinkHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Texture2D** StaticGet__cachedLinkCursor()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITextLinkHandler_TypeDefinitionIndex)->GetStaticField(0x46E50);
		}
		static ::System::Action_2<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*>** StaticGet_OnAnyLinkClicked()
		{
			return (::System::Action_2<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*>**)Il2CppClass::FromTypeDefinitionIndex(UITextLinkHandler_TypeDefinitionIndex)->GetStaticField(0x46E58);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::UITextLinkHandler*>** StaticGet__activeHandlers()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::UITextLinkHandler*>**)Il2CppClass::FromTypeDefinitionIndex(UITextLinkHandler_TypeDefinitionIndex)->GetStaticField(0x46E60);
		}
		::UnityEngine::UI::Extension::UILocalizationText* _text; // 0x18
		::UnityEngine::UI::Extension::LinkFeature* _linkFeature; // 0x20
		::UnityEngine::Camera* _eventCamera; // 0x28
		::System::Boolean _savedRaycastTarget; // 0x30
		::System::String* _hoveredLinkId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UI::Extension::UITextLinkHandler*>* get_ActiveHandlers()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UI::Extension::UITextLinkHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GET_ACTIVEHANDLERS_OFFSET))();
		}

		static ::System::Void add_OnAnyLinkClicked(::System::Action_2<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ADD_ONANYLINKCLICKED_OFFSET))(value);
		}

		static ::System::Void remove_OnAnyLinkClicked(::System::Action_2<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_REMOVE_ONANYLINKCLICKED_OFFSET))(value);
		}

		static ::System::Void CollectLinkTextsUnder(::UnityEngine::Transform* root, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_COLLECTLINKTEXTSUNDER_OFFSET))(root, results);
		}

		static ::System::Void CollectLinkSourceTextsUnder(::UnityEngine::Transform* root, ::System::Collections::Generic::List_1<::System::String*>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_COLLECTLINKSOURCETEXTSUNDER_OFFSET))(root, results);
		}

		static ::System::Void CollectLinkDetailsUnder(::UnityEngine::Transform* root, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_COLLECTLINKDETAILSUNDER_OFFSET))(root, results);
		}

		static ::System::Void NotifyGlobalLinkClick(::System::String* linkId, ::UnityEngine::UI::Extension::UILocalizationText* text)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_NOTIFYGLOBALLINKCLICK_OFFSET))(linkId, text);
		}

		::System::Void Init(::UnityEngine::UI::Extension::UILocalizationText* text, ::UnityEngine::UI::Extension::LinkFeature* linkFeature)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::LinkFeature*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_INIT_OFFSET))(this, text, linkFeature);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERMOVE_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		static ::System::Void SetHandCursor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_SETHANDCURSOR_OFFSET))();
		}

		static ::System::Void RestoreCursor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_RESTORECURSOR_OFFSET))();
		}

		::UnityEngine::Camera* GetEventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GETEVENTCAMERA_OFFSET))(this);
		}

		::System::Void CacheEventCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_CACHEEVENTCAMERA_OFFSET))(this);
		}
	};
}
