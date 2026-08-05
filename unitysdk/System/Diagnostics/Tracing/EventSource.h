#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E443600)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E443610)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4435A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E443620)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4435F0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSource_TypeDefinitionIndex = 1566;

	class EventSource : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_namespaceBytes()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0xF90);
		}
		static ::System::Guid* StaticGet_AspNetEventSourceGuid()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x4E0);
		}
		static ::System::Byte* StaticGet_m_EventSourceExceptionRecurenceCount()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean m_eventSourceEnabled; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET))(this);
		}
	};
}
