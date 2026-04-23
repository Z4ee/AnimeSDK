#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0x17909B30)
#define SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x17909980)
#define SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x17909930)
#define SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17909B50)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int StringTypeInfo_TypeDefinitionIndex = 1641;

	class StringTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::System::String* name, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_WRITEMETADATA_OFFSET))(this, collector, name, format);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::System::String*& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_WRITEDATA_OFFSET))(this, collector, value);
		}

		::System::Object* GetData(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_GETDATA_OFFSET))(this, value);
		}
	};
}
