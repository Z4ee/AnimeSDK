#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_CHARARRAYTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x162B81B0)
#define SYSTEM_DIAGNOSTICS_TRACING_CHARARRAYTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x162B80D0)
#define SYSTEM_DIAGNOSTICS_TRACING_CHARARRAYTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162B8360)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int CharArrayTypeInfo_TypeDefinitionIndex = 1629;

	class CharArrayTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::Il2CppArray<::System::Char>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_CHARARRAYTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_CHARARRAYTYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Il2CppArray<::System::Char>*& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::Il2CppArray<::System::Char>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_CHARARRAYTYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}
	};
}
