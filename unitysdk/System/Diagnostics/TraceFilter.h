#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class TraceEventCache; }

#define SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_1_OFFSET UNITYSDK_OFFSET(0x1C014310)
#define SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_2_OFFSET UNITYSDK_OFFSET(0x1C014350)
#define SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_OFFSET UNITYSDK_OFFSET(0x1C0142D0)
#define SYSTEM_DIAGNOSTICS_TRACEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0143A0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceFilter_TypeDefinitionIndex = 2767;

	class TraceFilter : public ::System::Object
	{
	public:
		::System::String* initializeData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* formatOrMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_OFFSET))(this, cache, source, eventType, id, formatOrMessage);
		}

		::System::Boolean ShouldTrace_1(::System::Diagnostics::TraceEventCache* cache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* formatOrMessage, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_1_OFFSET))(this, cache, source, eventType, id, formatOrMessage, args);
		}

		::System::Boolean ShouldTrace_2(::System::Diagnostics::TraceEventCache* cache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* formatOrMessage, ::Il2CppArray<::System::Object*>* args, ::System::Object* data1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_2_OFFSET))(this, cache, source, eventType, id, formatOrMessage, args, data1);
		}
	};
}
