#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class TraceEventCache; }

#define SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_OFFSET UNITYSDK_OFFSET(0x1A0E2230)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceFilter_TypeDefinitionIndex = 2528;

	class TraceFilter : public ::System::Object
	{
	public:
		::System::Boolean ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* formatOrMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_OFFSET))(this, cache, source, eventType, id, formatOrMessage);
		}
	};
}
