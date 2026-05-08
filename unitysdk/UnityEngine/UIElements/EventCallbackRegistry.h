#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventCallbackList; }
namespace UnityEngine::UIElements { class EventCallbackListPool; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLIST_OFFSET UNITYSDK_OFFSET(0x197A9240)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASBUBBLEHANDLERS_OFFSET UNITYSDK_OFFSET(0x197A3F10)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASTRICKLEDOWNHANDLERS_OFFSET UNITYSDK_OFFSET(0x197A3ED0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_INVOKECALLBACKS_OFFSET UNITYSDK_OFFSET(0x197A3C80)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_RELEASECALLBACKLIST_OFFSET UNITYSDK_OFFSET(0x197A92C0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x197A93F0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x197A93E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackRegistry_TypeDefinitionIndex = 25009;

	class EventCallbackRegistry : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::EventCallbackListPool** StaticGet_s_ListPool()
		{
			return (::UnityEngine::UIElements::EventCallbackListPool**)Il2CppClass::FromTypeDefinitionIndex(EventCallbackRegistry_TypeDefinitionIndex)->GetStaticField(0x1E8B0);
		}
		::UnityEngine::UIElements::EventCallbackList* m_Callbacks; // 0x10
		::UnityEngine::UIElements::EventCallbackList* m_TemporaryCallbacks; // 0x18
		::System::Int32 m_IsInvoking; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UIElements::EventCallbackList* GetCallbackList(::UnityEngine::UIElements::EventCallbackList* initializer)
		{
			return ((::UnityEngine::UIElements::EventCallbackList*(*)(::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLIST_OFFSET))(initializer);
		}

		static ::System::Void ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList* toRelease)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_RELEASECALLBACKLIST_OFFSET))(toRelease);
		}

		::System::Void InvokeCallbacks(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_INVOKECALLBACKS_OFFSET))(this, evt);
		}

		::System::Boolean HasTrickleDownHandlers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASTRICKLEDOWNHANDLERS_OFFSET))(this);
		}

		::System::Boolean HasBubbleHandlers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASBUBBLEHANDLERS_OFFSET))(this);
		}
	};
}
