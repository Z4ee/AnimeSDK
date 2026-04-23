#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_SBYTETYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x17908920)
#define SYSTEM_DIAGNOSTICS_TRACING_SBYTETYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x17908890)
#define SYSTEM_DIAGNOSTICS_TRACING_SBYTETYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17908A30)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int SByteTypeInfo_TypeDefinitionIndex = 1607;

	class SByteTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::SByte>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SBYTETYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SBYTETYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::System::SByte& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::SByte&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SBYTETYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
