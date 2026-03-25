#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_UINTPTRARRAYTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x162DFF50)
#define SYSTEM_DIAGNOSTICS_TRACING_UINTPTRARRAYTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x162DFEB0)
#define SYSTEM_DIAGNOSTICS_TRACING_UINTPTRARRAYTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162DFF70)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int UIntPtrArrayTypeInfo_TypeDefinitionIndex = 1628;

	class UIntPtrArrayTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::Il2CppArray<::System::UIntPtr>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINTPTRARRAYTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINTPTRARRAYTYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Il2CppArray<::System::UIntPtr>*& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::Il2CppArray<::System::UIntPtr>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_UINTPTRARRAYTYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
