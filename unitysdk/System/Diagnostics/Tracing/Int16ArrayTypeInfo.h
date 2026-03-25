#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_INT16ARRAYTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x162D61D0)
#define SYSTEM_DIAGNOSTICS_TRACING_INT16ARRAYTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x162D6140)
#define SYSTEM_DIAGNOSTICS_TRACING_INT16ARRAYTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162D6380)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int Int16ArrayTypeInfo_TypeDefinitionIndex = 1621;

	class Int16ArrayTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::Il2CppArray<::System::Int16>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_INT16ARRAYTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_INT16ARRAYTYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Il2CppArray<::System::Int16>*& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::Il2CppArray<::System::Int16>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_INT16ARRAYTYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
