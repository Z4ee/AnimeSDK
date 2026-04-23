#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventOpcode.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x178E6F70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x178E6F50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x178E6F40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_OPCODE_OFFSET UNITYSDK_OFFSET(0x178E6F60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x178E6F80)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventDataAttribute_TypeDefinitionIndex = 1588;

	class EventDataAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Diagnostics::Tracing::EventTags _Tags_k__BackingField; // 0x18
		::System::Diagnostics::Tracing::EventOpcode opcode; // 0x1C
		::System::Diagnostics::Tracing::EventLevel level; // 0x20
		::System::Diagnostics::Tracing::EventKeywords _Keywords_k__BackingField; // 0x28

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventLevel get_Level()
		{
			return ((::System::Diagnostics::Tracing::EventLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_LEVEL_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventOpcode get_Opcode()
		{
			return ((::System::Diagnostics::Tracing::EventOpcode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_OPCODE_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventKeywords get_Keywords()
		{
			return ((::System::Diagnostics::Tracing::EventKeywords(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_KEYWORDS_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventTags get_Tags()
		{
			return ((::System::Diagnostics::Tracing::EventTags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDATAATTRIBUTE_GET_TAGS_OFFSET))(this);
		}
	};
}
