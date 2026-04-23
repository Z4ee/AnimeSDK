#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_DATETIMEOFFSETTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x178E5C20)
#define SYSTEM_DIAGNOSTICS_TRACING_DATETIMEOFFSETTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x178E5AC0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATETIMEOFFSETTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x178E5DE0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int DateTimeOffsetTypeInfo_TypeDefinitionIndex = 1645;

	class DateTimeOffsetTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::DateTimeOffset>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATETIMEOFFSETTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATETIMEOFFSETTYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::System::DateTimeOffset& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATETIMEOFFSETTYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
