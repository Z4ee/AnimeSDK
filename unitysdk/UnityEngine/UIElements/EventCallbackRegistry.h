#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventCallbackList; }
namespace UnityEngine::UIElements { class EventCallbackListPool; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLIST_OFFSET UNITYSDK_OFFSET(0x1B355D10)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASBUBBLEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B350BA0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASTRICKLEDOWNHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B350B60)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_INVOKECALLBACKS_OFFSET UNITYSDK_OFFSET(0x1B350810)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_RELEASECALLBACKLIST_OFFSET UNITYSDK_OFFSET(0x1B355D90)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B355E10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackRegistry_TypeDefinitionIndex = 6191;

	class EventCallbackRegistry : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::EventCallbackListPool** StaticGet_s_ListPool()
		{
			return (::UnityEngine::UIElements::EventCallbackListPool**)Il2CppClass::FromTypeDefinitionIndex(EventCallbackRegistry_TypeDefinitionIndex)->GetStaticField(0x1EA0);
		}
		::UnityEngine::UIElements::EventCallbackList* m_Callbacks; // 0x10
		::UnityEngine::UIElements::EventCallbackList* m_TemporaryCallbacks; // 0x18
		::System::Int32 m_IsInvoking; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UIElements::EventCallbackList* GetCallbackList(::UnityEngine::UIElements::EventCallbackList* a1)
		{
			return ((::UnityEngine::UIElements::EventCallbackList*(*)(::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLIST_OFFSET))(a1);
		}

		static ::System::Void ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_RELEASECALLBACKLIST_OFFSET))(a1);
		}

		::System::Void InvokeCallbacks(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_INVOKECALLBACKS_OFFSET))(this, a1);
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
