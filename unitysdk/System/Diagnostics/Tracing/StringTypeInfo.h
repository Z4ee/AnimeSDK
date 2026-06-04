#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0x186C07B0)
#define SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x186C0610)
#define SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x186C05C0)
#define SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x186C07D0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int StringTypeInfo_TypeDefinitionIndex = 1639;

	class StringTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::System::String*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}

		::System::Object* GetData(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STRINGTYPEINFO_GETDATA_OFFSET))(this, a1);
		}
	};
}
