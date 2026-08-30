#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_DECIMALTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1BCCDFE0)
#define SYSTEM_DIAGNOSTICS_TRACING_DECIMALTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1BCCDF90)
#define SYSTEM_DIAGNOSTICS_TRACING_DECIMALTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCE1A0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int DecimalTypeInfo_TypeDefinitionIndex = 1656;

	class DecimalTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Decimal>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DECIMALTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DECIMALTYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::System::Decimal& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DECIMALTYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}
	};
}
