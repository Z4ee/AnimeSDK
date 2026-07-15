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

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ADDEVENTSOURCE_OFFSET UNITYSDK_OFFSET(0x1919C3B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_DISPOSEONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1919CDD0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_GET_EVENTLISTENERSLOCK_OFFSET UNITYSDK_OFFSET(0x1919CAC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ONEVENTSOURCECREATED_OFFSET UNITYSDK_OFFSET(0x1919C2D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ONEVENTWRITTEN_OFFSET UNITYSDK_OFFSET(0x1919C390)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1919D170)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventListener_TypeDefinitionIndex = 1681;

	class EventListener : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference*>** StaticGet_s_EventSources()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x54D0);
		}
		static ::System::Object** StaticGet_s_EventSourceCreatedLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x54D8);
		}
		static ::System::Diagnostics::Tracing::EventListener** StaticGet_s_Listeners()
		{
			return (::System::Diagnostics::Tracing::EventListener**)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x54E0);
		}
		static ::System::Boolean* StaticGet_s_EventSourceShutdownRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x3110);
		}
		static ::System::Boolean* StaticGet_s_CreatingListener()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventListener_TypeDefinitionIndex)->GetStaticField(0x3111);
		}
		::System::EventHandler_1<::System::Diagnostics::Tracing::EventSourceCreatedEventArgs*>* _EventSourceCreated; // 0x10
		::System::Diagnostics::Tracing::ActivityFilter* m_activityFilter; // 0x18
		::System::Diagnostics::Tracing::EventListener* m_Next; // 0x20
		::System::EventHandler_1<::System::Diagnostics::Tracing::EventWrittenEventArgs*>* EventWritten; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER__CCTOR_OFFSET))();
		}

		::System::Void OnEventSourceCreated(::System::Diagnostics::Tracing::EventSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ONEVENTSOURCECREATED_OFFSET))(this, a1);
		}

		::System::Void OnEventWritten(::System::Diagnostics::Tracing::EventWrittenEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventWrittenEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ONEVENTWRITTEN_OFFSET))(this, a1);
		}

		static ::System::Void AddEventSource(::System::Diagnostics::Tracing::EventSource* a1)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_ADDEVENTSOURCE_OFFSET))(a1);
		}

		static ::System::Void DisposeOnShutdown(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_DISPOSEONSHUTDOWN_OFFSET))(a1, a2);
		}

		static ::System::Object* get_EventListenersLock()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTLISTENER_GET_EVENTLISTENERSLOCK_OFFSET))();
		}
	};
}
