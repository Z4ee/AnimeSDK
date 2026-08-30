#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldTags.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTFIELDATTRIBUTE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1AB5AEF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTFIELDATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AB5AEE0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTFIELDATTRIBUTE_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1AB5AED0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventFieldAttribute_TypeDefinitionIndex = 1599;

	class EventFieldAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Diagnostics::Tracing::EventFieldTags _Tags_k__BackingField; // 0x18
		::System::Diagnostics::Tracing::EventFieldFormat _Format_k__BackingField; // 0x1C

		::System::Diagnostics::Tracing::EventFieldTags get_Tags()
		{
			return ((::System::Diagnostics::Tracing::EventFieldTags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTFIELDATTRIBUTE_GET_TAGS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTFIELDATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventFieldFormat get_Format()
		{
			return ((::System::Diagnostics::Tracing::EventFieldFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTFIELDATTRIBUTE_GET_FORMAT_OFFSET))(this);
		}
	};
}
