#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/SourceLevels.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Diagnostics/TraceFilter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Diagnostics { class TraceEventCache; }

#define SYSTEM_DIAGNOSTICS_EVENTTYPEFILTER_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DB79AB0)
#define SYSTEM_DIAGNOSTICS_EVENTTYPEFILTER_SET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DB79AC0)
#define SYSTEM_DIAGNOSTICS_EVENTTYPEFILTER_SHOULDTRACE_OFFSET UNITYSDK_OFFSET(0x1DB79AA0)
#define SYSTEM_DIAGNOSTICS_EVENTTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB79A90)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventTypeFilter_TypeDefinitionIndex = 2756;

	class EventTypeFilter : public ::System::Diagnostics::TraceFilter
	{
	public:
		::System::Diagnostics::SourceLevels level; // 0x18

		::System::Void _ctor(::System::Diagnostics::SourceLevels level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::SourceLevels))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTTYPEFILTER__CTOR_OFFSET))(this, level);
		}

		::System::Boolean ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* formatOrMessage, ::Il2CppArray<::System::Object*>* args, ::System::Object* data1, ::Il2CppArray<::System::Object*>* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTTYPEFILTER_SHOULDTRACE_OFFSET))(this, cache, source, eventType, id, formatOrMessage, args, data1, data);
		}

		::System::Diagnostics::SourceLevels get_EventType()
		{
			return ((::System::Diagnostics::SourceLevels(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTTYPEFILTER_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Void set_EventType(::System::Diagnostics::SourceLevels value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::SourceLevels))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTTYPEFILTER_SET_EVENTTYPE_OFFSET))(this, value);
		}
	};
}
