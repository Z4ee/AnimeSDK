#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"
#include "unitysdk/System/Guid.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x162D6020)
#define SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x162D5FD0)
#define SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162D6130)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int GuidTypeInfo_TypeDefinitionIndex = 1641;

	class GuidTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Guid>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::System::Guid& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
