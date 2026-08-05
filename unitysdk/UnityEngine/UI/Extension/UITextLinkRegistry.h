#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/Extension/LinkClickInfo.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITextLinkHandler; }

#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_ADD_ONACTIVEHANDLERSETCHANGED_OFFSET UNITYSDK_OFFSET(0x1D5D6E10)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_ADD_ONANYLINKCLICKED_OFFSET UNITYSDK_OFFSET(0x1D5D6C50)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_CLEARCURSORSTATE_OFFSET UNITYSDK_OFFSET(0x1D5D8800)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D5D8890)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_COLLECTLINKDETAILSUNDER_OFFSET UNITYSDK_OFFSET(0x1D5D7D00)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_COLLECTLINKSOURCETEXTSUNDER_OFFSET UNITYSDK_OFFSET(0x1D5D77C0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_COLLECTLINKTEXTSUNDER_OFFSET UNITYSDK_OFFSET(0x1D5D72B0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_GET_ACTIVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D5D6BF0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_HASANYLINKUNDER_OFFSET UNITYSDK_OFFSET(0x1D5D8310)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_NOTIFYENTERLINK_OFFSET UNITYSDK_OFFSET(0x1D5D6370)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_NOTIFYEXITLINK_OFFSET UNITYSDK_OFFSET(0x1D5D68A0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_NOTIFYGLOBALLINKCLICK_OFFSET UNITYSDK_OFFSET(0x1D5D71D0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_REGISTER_OFFSET UNITYSDK_OFFSET(0x1D5D6FD0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_REMOVE_ONACTIVEHANDLERSETCHANGED_OFFSET UNITYSDK_OFFSET(0x1D5D6EF0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_REMOVE_ONANYLINKCLICKED_OFFSET UNITYSDK_OFFSET(0x1D5D6D30)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_RESTORECURSOR_OFFSET UNITYSDK_OFFSET(0x1D5D6A40)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_SETHANDCURSOR_OFFSET UNITYSDK_OFFSET(0x1D5D6410)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1D5D70F0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5D6AC0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextLinkRegistry_TypeDefinitionIndex = 60647;

	class UITextLinkRegistry : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::Extension::UITextLinkHandler** StaticGet__hoveringHandler()
		{
			return (::UnityEngine::UI::Extension::UITextLinkHandler**)Il2CppClass::FromTypeDefinitionIndex(UITextLinkRegistry_TypeDefinitionIndex)->GetStaticField(0x45A60);
		}
		static ::System::Action** StaticGet_OnActiveHandlerSetChanged()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITextLinkRegistry_TypeDefinitionIndex)->GetStaticField(0x45A68);
		}
		static ::System::Action_1<::UnityEngine::UI::Extension::LinkClickInfo>** StaticGet_OnAnyLinkClicked()
		{
			return (::System::Action_1<::UnityEngine::UI::Extension::LinkClickInfo>**)Il2CppClass::FromTypeDefinitionIndex(UITextLinkRegistry_TypeDefinitionIndex)->GetStaticField(0x45A70);
		}
		static ::UnityEngine::Texture2D** StaticGet__cachedLinkCursor()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITextLinkRegistry_TypeDefinitionIndex)->GetStaticField(0x45A78);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::UITextLinkHandler*>** StaticGet__activeHandlers()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::UITextLinkHandler*>**)Il2CppClass::FromTypeDefinitionIndex(UITextLinkRegistry_TypeDefinitionIndex)->GetStaticField(0x45A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY__CCTOR_OFFSET))();
		}

		static ::System::Void NotifyEnterLink(::UnityEngine::UI::Extension::UITextLinkHandler* handler, ::System::String* linkId)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UITextLinkHandler*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_NOTIFYENTERLINK_OFFSET))(handler, linkId);
		}

		static ::System::Void NotifyExitLink(::UnityEngine::UI::Extension::UITextLinkHandler* handler)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UITextLinkHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_NOTIFYEXITLINK_OFFSET))(handler);
		}

		static ::System::Void SetHandCursor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_SETHANDCURSOR_OFFSET))();
		}

		static ::System::Void RestoreCursor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_RESTORECURSOR_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UI::Extension::UITextLinkHandler*>* get_ActiveHandlers()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UI::Extension::UITextLinkHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_GET_ACTIVEHANDLERS_OFFSET))();
		}

		static ::System::Void add_OnAnyLinkClicked(::System::Action_1<::UnityEngine::UI::Extension::LinkClickInfo>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::UI::Extension::LinkClickInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_ADD_ONANYLINKCLICKED_OFFSET))(value);
		}

		static ::System::Void remove_OnAnyLinkClicked(::System::Action_1<::UnityEngine::UI::Extension::LinkClickInfo>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::UI::Extension::LinkClickInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_REMOVE_ONANYLINKCLICKED_OFFSET))(value);
		}

		static ::System::Void add_OnActiveHandlerSetChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_ADD_ONACTIVEHANDLERSETCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_OnActiveHandlerSetChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_REMOVE_ONACTIVEHANDLERSETCHANGED_OFFSET))(value);
		}

		static ::System::Void Register(::UnityEngine::UI::Extension::UITextLinkHandler* handler)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UITextLinkHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_REGISTER_OFFSET))(handler);
		}

		static ::System::Void Unregister(::UnityEngine::UI::Extension::UITextLinkHandler* handler)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UITextLinkHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_UNREGISTER_OFFSET))(handler);
		}

		static ::System::Void NotifyGlobalLinkClick(::UnityEngine::UI::Extension::LinkClickInfo info)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::LinkClickInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_NOTIFYGLOBALLINKCLICK_OFFSET))(info);
		}

		static ::System::Void CollectLinkTextsUnder(::UnityEngine::Transform* root, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_COLLECTLINKTEXTSUNDER_OFFSET))(root, results);
		}

		static ::System::Void CollectLinkSourceTextsUnder(::UnityEngine::Transform* root, ::System::Collections::Generic::List_1<::System::String*>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_COLLECTLINKSOURCETEXTSUNDER_OFFSET))(root, results);
		}

		static ::System::Void CollectLinkDetailsUnder(::UnityEngine::Transform* root, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_COLLECTLINKDETAILSUNDER_OFFSET))(root, results);
		}

		static ::System::Boolean HasAnyLinkUnder(::UnityEngine::Transform* root)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_HASANYLINKUNDER_OFFSET))(root);
		}

		static ::System::Void ClearCursorState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_CLEARCURSORSTATE_OFFSET))();
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKREGISTRY_CLEAR_OFFSET))();
		}
	};
}
