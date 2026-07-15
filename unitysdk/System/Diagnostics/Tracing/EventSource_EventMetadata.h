#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventActivityOptions.h"
#include "unitysdk/System/Diagnostics/Tracing/EventDescriptor.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingEventTypes; }
namespace System::Reflection { class ParameterInfo; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSource_EventMetadata_TypeDefinitionIndex = 1659;

	struct alignas(8) EventSource_EventMetadata
	{
		::System::Diagnostics::Tracing::EventDescriptor Descriptor; // 0x10
		::System::Diagnostics::Tracing::EventTags Tags; // 0x20
		::System::Boolean EnabledForAnyListener; // 0x24
		::System::Boolean EnabledForETW; // 0x25
		::System::Boolean HasRelatedActivityID; // 0x26
		::System::Byte TriggersActivityTracking; // 0x27
		::System::String* Name; // 0x28
		::System::String* Message; // 0x30
		::Il2CppArray<::System::Reflection::ParameterInfo*>* Parameters; // 0x38
		::System::Diagnostics::Tracing::TraceLoggingEventTypes* TraceLoggingEventTypes; // 0x40
		::System::Diagnostics::Tracing::EventActivityOptions ActivityOptions; // 0x48
	};
}
