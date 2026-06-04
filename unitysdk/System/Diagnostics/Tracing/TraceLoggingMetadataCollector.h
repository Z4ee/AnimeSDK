#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldTags.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingDataType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class FieldMetadata; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector_Impl; }

#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDARRAY_OFFSET UNITYSDK_OFFSET(0x1869C050)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDBINARY_OFFSET UNITYSDK_OFFSET(0x1869C8C0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x186C1940)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDGROUP_OFFSET UNITYSDK_OFFSET(0x1869DF20)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDSCALAR_OFFSET UNITYSDK_OFFSET(0x1869C4F0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_BEGINBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x186C1B70)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ENDBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x186C1CD0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GETMETADATA_OFFSET UNITYSDK_OFFSET(0x186C17C0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_BEGINNINGBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x186C1930)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_DATACOUNT_OFFSET UNITYSDK_OFFSET(0x186C1830)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_PINCOUNT_OFFSET UNITYSDK_OFFSET(0x186C1850)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_SCRATCHSIZE_OFFSET UNITYSDK_OFFSET(0x186C1810)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x186C1910)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x186C1920)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186C18E0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x186C1730)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingMetadataCollector_TypeDefinitionIndex = 1658;

	class TraceLoggingMetadataCollector : public ::System::Object
	{
	public:
		::System::Diagnostics::Tracing::FieldMetadata* currentGroup; // 0x10
		::System::Diagnostics::Tracing::TraceLoggingMetadataCollector_Impl* impl; // 0x18
		::System::Diagnostics::Tracing::EventFieldTags _Tags_k__BackingField; // 0x20
		::System::Int32 bufferedArrayFieldCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::Diagnostics::Tracing::FieldMetadata* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::Diagnostics::Tracing::FieldMetadata*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Diagnostics::Tracing::EventFieldTags get_Tags()
		{
			return ((::System::Diagnostics::Tracing::EventFieldTags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_TAGS_OFFSET))(this);
		}

		::System::Void set_Tags(::System::Diagnostics::Tracing::EventFieldTags a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventFieldTags))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_SET_TAGS_OFFSET))(this, a1);
		}

		::System::Int32 get_ScratchSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_SCRATCHSIZE_OFFSET))(this);
		}

		::System::Int32 get_DataCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_DATACOUNT_OFFSET))(this);
		}

		::System::Int32 get_PinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_PINCOUNT_OFFSET))(this);
		}

		::System::Boolean get_BeginningBufferedArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_BEGINNINGBUFFEREDARRAY_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* AddGroup(::System::String* a1)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDGROUP_OFFSET))(this, a1);
		}

		::System::Void AddScalar(::System::String* a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDSCALAR_OFFSET))(this, a1, a2);
		}

		::System::Void AddBinary(::System::String* a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDBINARY_OFFSET))(this, a1, a2);
		}

		::System::Void AddArray(::System::String* a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void BeginBufferedArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_BEGINBUFFEREDARRAY_OFFSET))(this);
		}

		::System::Void EndBufferedArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ENDBUFFEREDARRAY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetMetadata()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GETMETADATA_OFFSET))(this);
		}

		::System::Void AddField(::System::Diagnostics::Tracing::FieldMetadata* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::FieldMetadata*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDFIELD_OFFSET))(this, a1);
		}
	};
}
