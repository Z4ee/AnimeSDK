#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_BOOLEANTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1869C670)
#define SYSTEM_DIAGNOSTICS_TRACING_BOOLEANTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1869C460)
#define SYSTEM_DIAGNOSTICS_TRACING_BOOLEANTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1869C780)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int BooleanTypeInfo_TypeDefinitionIndex = 1603;

	class BooleanTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BOOLEANTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BOOLEANTYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::System::Boolean& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BOOLEANTYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}
	};
}
