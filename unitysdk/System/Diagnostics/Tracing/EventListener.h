#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { class WeakReference; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class ActivityFilter; }
namespace System::Diagnostics::Tracing { class EventSource; }
namespace System::Diagnostics::Tracing { class EventSourceCreatedEventArgs; }
namespace System::Diagnostics::Tracing { class EventWrittenEventArgs; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ADDEVENTSOURCE_OFFSET UNITYSDK_OFFSET(0x178E75A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_DISPOSEONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x178E7E00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_GET_EVENTLISTENERSLOCK_OFFSET UNITYSDK_OFFSET(0x178E7B30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ONEVENTSOURCECREATED_OFFSET UNITYSDK_OFFSET(0x178E74C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ONEVENTWRITTEN_OFFSET UNITYSDK_OFFSET(0x178E7580)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x178E80C0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventListener_TypeDefinitionIndex = 1679;

	class EventListener : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference*>** StaticGet_s_EventSources()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x5DF0);
		}
		static ::System::Diagnostics::Tracing::EventListener** StaticGet_s_Listeners()
		{
			return (::System::Diagnostics::Tracing::EventListener**)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x5DF8);
		}
		static ::System::Object** StaticGet_s_EventSourceCreatedLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x5E00);
		}
		static ::System::Boolean* StaticGet_s_EventSourceShutdownRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x2D70);
		}
		static ::System::Boolean* StaticGet_s_CreatingListener()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x2D71);
		}
		::System::EventHandler_1<::System::Diagnostics::Tracing::EventWrittenEventArgs*>* EventWritten; // 0x10
		::System::Diagnostics::Tracing::EventListener* m_Next; // 0x18
		::System::Diagnostics::Tracing::ActivityFilter* m_activityFilter; // 0x20
		::System::EventHandler_1<::System::Diagnostics::Tracing::EventSourceCreatedEventArgs*>* _EventSourceCreated; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER__CCTOR_OFFSET))();
		}

		::System::Void OnEventSourceCreated(::System::Diagnostics::Tracing::EventSource* eventSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ONEVENTSOURCECREATED_OFFSET))(this, eventSource);
		}

		::System::Void OnEventWritten(::System::Diagnostics::Tracing::EventWrittenEventArgs* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventWrittenEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ONEVENTWRITTEN_OFFSET))(this, eventData);
		}

		static ::System::Void AddEventSource(::System::Diagnostics::Tracing::EventSource* newEventSource)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ADDEVENTSOURCE_OFFSET))(newEventSource);
		}

		static ::System::Void DisposeOnShutdown(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_DISPOSEONSHUTDOWN_OFFSET))(sender, e);
		}

		static ::System::Object* get_EventListenersLock()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_GET_EVENTLISTENERSLOCK_OFFSET))();
		}
	};
}
