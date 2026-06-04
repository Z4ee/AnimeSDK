#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_DATETIMETYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1869E210)
#define SYSTEM_DIAGNOSTICS_TRACING_DATETIMETYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1869E1C0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATETIMETYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1869E2B0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int DateTimeTypeInfo_TypeDefinitionIndex = 1642;

	class DateTimeTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::DateTime>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATETIMETYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATETIMETYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::System::DateTime& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATETIMETYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}
	};
}
