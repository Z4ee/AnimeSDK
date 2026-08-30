#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"
#include "unitysdk/System/Guid.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1AB77D10)
#define SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1AB77CC0)
#define SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB77E20)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int GuidTypeInfo_TypeDefinitionIndex = 1651;

	class GuidTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Guid>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::System::Guid& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_GUIDTYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}
	};
}
