#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_TIMESPANTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x191C1350)
#define SYSTEM_DIAGNOSTICS_TRACING_TIMESPANTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x191C1300)
#define SYSTEM_DIAGNOSTICS_TRACING_TIMESPANTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x191C13E0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TimeSpanTypeInfo_TypeDefinitionIndex = 1648;

	class TimeSpanTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::TimeSpan>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TIMESPANTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TIMESPANTYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::System::TimeSpan& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TIMESPANTYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}
	};
}
