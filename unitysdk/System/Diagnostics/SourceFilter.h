#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Diagnostics/TraceFilter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Diagnostics { class TraceEventCache; }

#define SYSTEM_DIAGNOSTICS_SOURCEFILTER_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x19E2A750)
#define SYSTEM_DIAGNOSTICS_SOURCEFILTER_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x19E2A650)
#define SYSTEM_DIAGNOSTICS_SOURCEFILTER_SHOULDTRACE_OFFSET UNITYSDK_OFFSET(0x19E2A6C0)
#define SYSTEM_DIAGNOSTICS_SOURCEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2A5E0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int SourceFilter_TypeDefinitionIndex = 2758;

	class SourceFilter : public ::System::Diagnostics::TraceFilter
	{
	public:
		::System::String* src; // 0x18

		::System::Void _ctor(::System::String* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCEFILTER__CTOR_OFFSET))(this, source);
		}

		::System::Boolean ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* formatOrMessage, ::Il2CppArray<::System::Object*>* args, ::System::Object* data1, ::Il2CppArray<::System::Object*>* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCEFILTER_SHOULDTRACE_OFFSET))(this, cache, source, eventType, id, formatOrMessage, args, data1, data);
		}

		::System::String* get_Source()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCEFILTER_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SOURCEFILTER_SET_SOURCE_OFFSET))(this, value);
		}
	};
}
