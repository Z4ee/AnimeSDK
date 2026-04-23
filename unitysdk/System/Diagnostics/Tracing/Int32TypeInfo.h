#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_INT32TYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x17903070)
#define SYSTEM_DIAGNOSTICS_TRACING_INT32TYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x17902F90)
#define SYSTEM_DIAGNOSTICS_TRACING_INT32TYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17903180)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int Int32TypeInfo_TypeDefinitionIndex = 1610;

	class Int32TypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_INT32TYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_INT32TYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::System::Int32& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_INT32TYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
