#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventActivityOptions.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventOpcode.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEOPTIONS_SET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x3B67AA0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEOPTIONS_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x3B679E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEOPTIONS_SET_OPCODE_OFFSET UNITYSDK_OFFSET(0x3B67A40)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSourceOptions_TypeDefinitionIndex = 1604;

	struct alignas(8) EventSourceOptions
	{
		::System::Diagnostics::Tracing::EventKeywords keywords; // 0x10
		::System::Diagnostics::Tracing::EventTags tags; // 0x18
		::System::Diagnostics::Tracing::EventActivityOptions activityOptions; // 0x1C
		::System::Byte level; // 0x20
		::System::Byte opcode; // 0x21
		::System::Byte valuesSet; // 0x22

		::System::Void set_Level(::System::Diagnostics::Tracing::EventLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEOPTIONS_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Void set_Opcode(::System::Diagnostics::Tracing::EventOpcode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventOpcode))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEOPTIONS_SET_OPCODE_OFFSET))(this, a1);
		}

		::System::Void set_Keywords(::System::Diagnostics::Tracing::EventKeywords a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEOPTIONS_SET_KEYWORDS_OFFSET))(this, a1);
		}
	};
}
