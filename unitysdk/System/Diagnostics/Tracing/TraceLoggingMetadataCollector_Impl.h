#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class FieldMetadata; }

#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ADDNONSCALAR_OFFSET UNITYSDK_OFFSET(0x191C2770)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ADDSCALAR_OFFSET UNITYSDK_OFFSET(0x191C26F0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_BEGINBUFFERED_OFFSET UNITYSDK_OFFSET(0x191C28D0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ENCODE_OFFSET UNITYSDK_OFFSET(0x191C29D0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ENDBUFFERED_OFFSET UNITYSDK_OFFSET(0x191C29C0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x191C2500)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingMetadataCollector_Impl_TypeDefinitionIndex = 1663;

	class TraceLoggingMetadataCollector_Impl : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::FieldMetadata*>* fields; // 0x10
		::System::SByte dataCount; // 0x18
		::System::Int32 bufferNesting; // 0x1C
		::System::Int16 scratchSize; // 0x20
		::System::SByte pinCount; // 0x22
		::System::Boolean scalar; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL__CTOR_OFFSET))(this);
		}

		::System::Void AddScalar(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ADDSCALAR_OFFSET))(this, a1);
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

		::System::Int32 Encode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_IMPL_ENCODE_OFFSET))(this, a1);
		}
	};
}
