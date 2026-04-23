#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_SINGLETYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x17908E00)
#define SYSTEM_DIAGNOSTICS_TRACING_SINGLETYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x17908D20)
#define SYSTEM_DIAGNOSTICS_TRACING_SINGLETYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17908F10)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int SingleTypeInfo_TypeDefinitionIndex = 1617;

	class SingleTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SINGLETYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SINGLETYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::System::Single& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::Single&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SINGLETYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
