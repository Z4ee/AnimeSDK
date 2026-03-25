#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class FieldMetadata; }

#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ADDNONSCALAR_OFFSET UNITYSDK_OFFSET(0x162DE7F0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ADDSCALAR_OFFSET UNITYSDK_OFFSET(0x162DE730)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_BEGINBUFFERED_OFFSET UNITYSDK_OFFSET(0x162DE900)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ENCODE_OFFSET UNITYSDK_OFFSET(0x162DEA20)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ENDBUFFERED_OFFSET UNITYSDK_OFFSET(0x162DEA10)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x162DE5B0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingMetadataCollector_Impl_TypeDefinitionIndex = 1660;

	class TraceLoggingMetadataCollector_Impl : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::FieldMetadata*>* fields; // 0x10
		::System::Int32 bufferNesting; // 0x18
		::System::Int16 scratchSize; // 0x1C
		::System::SByte pinCount; // 0x1E
		::System::Boolean scalar; // 0x1F
		::System::SByte dataCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL__CTOR_OFFSET))(this);
		}

		::System::Void AddScalar(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ADDSCALAR_OFFSET))(this, size);
		}

		::System::Void AddNonscalar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ADDNONSCALAR_OFFSET))(this);
		}

		::System::Void BeginBuffered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_BEGINBUFFERED_OFFSET))(this);
		}

		::System::Void EndBuffered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ENDBUFFERED_OFFSET))(this);
		}

		::System::Int32 Encode(::Il2CppArray<::System::Byte>* metadata)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ENCODE_OFFSET))(this, metadata);
		}
	};
}
