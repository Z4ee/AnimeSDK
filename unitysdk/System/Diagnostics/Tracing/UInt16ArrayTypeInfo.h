#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_UINT16ARRAYTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x186C2950)
#define SYSTEM_DIAGNOSTICS_TRACING_UINT16ARRAYTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x186C28C0)
#define SYSTEM_DIAGNOSTICS_TRACING_UINT16ARRAYTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x186C2A30)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int UInt16ArrayTypeInfo_TypeDefinitionIndex = 1621;

	class UInt16ArrayTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::Il2CppArray<::System::UInt16>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINT16ARRAYTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINT16ARRAYTYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::Il2CppArray<::System::UInt16>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::Il2CppArray<::System::UInt16>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINT16ARRAYTYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}
	};
}
