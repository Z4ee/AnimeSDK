#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_UINT16TYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1790BEA0)
#define SYSTEM_DIAGNOSTICS_TRACING_UINT16TYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1790BE10)
#define SYSTEM_DIAGNOSTICS_TRACING_UINT16TYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1790BF30)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int UInt16TypeInfo_TypeDefinitionIndex = 1609;

	class UInt16TypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::UInt16>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINT16TYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINT16TYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::System::UInt16& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::UInt16&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINT16TYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
