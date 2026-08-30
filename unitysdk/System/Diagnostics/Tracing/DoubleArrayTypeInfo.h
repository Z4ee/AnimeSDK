#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_DOUBLEARRAYTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1AB59A40)
#define SYSTEM_DIAGNOSTICS_TRACING_DOUBLEARRAYTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1AB59970)
#define SYSTEM_DIAGNOSTICS_TRACING_DOUBLEARRAYTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB59BF0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int DoubleArrayTypeInfo_TypeDefinitionIndex = 1640;

	class DoubleArrayTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::Il2CppArray<::System::Double>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DOUBLEARRAYTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DOUBLEARRAYTYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::Il2CppArray<::System::Double>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::Il2CppArray<::System::Double>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DOUBLEARRAYTYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}
	};
}
