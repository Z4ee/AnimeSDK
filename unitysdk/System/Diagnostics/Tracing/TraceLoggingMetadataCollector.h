#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldTags.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingDataType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class FieldMetadata; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector_Impl; }

#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDARRAY_OFFSET UNITYSDK_OFFSET(0x162B73D0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDBINARY_OFFSET UNITYSDK_OFFSET(0x162B7B80)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x162DE660)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDGROUP_OFFSET UNITYSDK_OFFSET(0x162B9230)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDSCALAR_OFFSET UNITYSDK_OFFSET(0x162B7820)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_BEGINBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x162DE880)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ENDBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x162DE990)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GETMETADATA_OFFSET UNITYSDK_OFFSET(0x162DE4E0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_BEGINNINGBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x162DE650)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_DATACOUNT_OFFSET UNITYSDK_OFFSET(0x162DE550)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_PINCOUNT_OFFSET UNITYSDK_OFFSET(0x162DE570)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_SCRATCHSIZE_OFFSET UNITYSDK_OFFSET(0x162DE530)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x162DE630)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x162DE640)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162DE600)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x162DE450)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingMetadataCollector_TypeDefinitionIndex = 1659;

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

		::System::Void _ctor_1(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* other, ::System::Diagnostics::Tracing::FieldMetadata* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::Diagnostics::Tracing::FieldMetadata*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR__CTOR_1_OFFSET))(this, other, group);
		}

		::System::Diagnostics::Tracing::EventFieldTags get_Tags()
		{
			return ((::System::Diagnostics::Tracing::EventFieldTags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_GET_TAGS_OFFSET))(this);
		}

		::System::Void set_Tags(::System::Diagnostics::Tracing::EventFieldTags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventFieldTags))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_SET_TAGS_OFFSET))(this, value);
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

		::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* AddGroup(::System::String* name)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDGROUP_OFFSET))(this, name);
		}

		::System::Void AddScalar(::System::String* name, ::System::Diagnostics::Tracing::TraceLoggingDataType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDSCALAR_OFFSET))(this, name, type);
		}

		::System::Void AddBinary(::System::String* name, ::System::Diagnostics::Tracing::TraceLoggingDataType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDBINARY_OFFSET))(this, name, type);
		}

		::System::Void AddArray(::System::String* name, ::System::Diagnostics::Tracing::TraceLoggingDataType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDARRAY_OFFSET))(this, name, type);
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

		::System::Void AddField(::System::Diagnostics::Tracing::FieldMetadata* fieldMetadata)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::FieldMetadata*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGMETADATACOLLECTOR_ADDFIELD_OFFSET))(this, fieldMetadata);
		}
	};
}
