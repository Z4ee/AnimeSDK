#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_UINT64TYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x162DFE10)
#define SYSTEM_DIAGNOSTICS_TRACING_UINT64TYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x162DFD90)
#define SYSTEM_DIAGNOSTICS_TRACING_UINT64TYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162DFEA0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int UInt64TypeInfo_TypeDefinitionIndex = 1612;

	class UInt64TypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::UInt64>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINT64TYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINT64TYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::System::UInt64& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::UInt64&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINT64TYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
