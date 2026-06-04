#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_BOOLEANARRAYTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1869C270)
#define SYSTEM_DIAGNOSTICS_TRACING_BOOLEANARRAYTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1869BF40)
#define SYSTEM_DIAGNOSTICS_TRACING_BOOLEANARRAYTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1869C420)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int BooleanArrayTypeInfo_TypeDefinitionIndex = 1617;

	class BooleanArrayTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::Il2CppArray<::System::Boolean>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BOOLEANARRAYTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BOOLEANARRAYTYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::Il2CppArray<::System::Boolean>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::Il2CppArray<::System::Boolean>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BOOLEANARRAYTYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}
	};
}
