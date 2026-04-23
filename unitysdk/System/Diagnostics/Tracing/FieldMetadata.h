#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldTags.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingDataType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_ENCODE_OFFSET UNITYSDK_OFFSET(0x17902080)
#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_INCREMENTSTRUCTFIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x17902010)
#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17901D30)
#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17901CF0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int FieldMetadata_TypeDefinitionIndex = 1596;

	class FieldMetadata : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Byte>* custom; // 0x18
		::System::Int32 nameSize; // 0x20
		::System::Diagnostics::Tracing::EventFieldTags tags; // 0x24
		::System::UInt16 fixedCount; // 0x28
		::System::Byte outType; // 0x2A
		::System::Byte inType; // 0x2B

		::System::Void _ctor(::System::String* name, ::System::Diagnostics::Tracing::TraceLoggingDataType type, ::System::Diagnostics::Tracing::EventFieldTags tags, ::System::Boolean variableCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType, ::System::Diagnostics::Tracing::EventFieldTags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_OFFSET))(this, name, type, tags, variableCount);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Diagnostics::Tracing::TraceLoggingDataType dataType, ::System::Diagnostics::Tracing::EventFieldTags tags, ::System::Byte countFlags, ::System::UInt16 fixedCount, ::Il2CppArray<::System::Byte>* custom)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType, ::System::Diagnostics::Tracing::EventFieldTags, ::System::Byte, ::System::UInt16, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_1_OFFSET))(this, name, dataType, tags, countFlags, fixedCount, custom);
		}

		::System::Void IncrementStructFieldCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_INCREMENTSTRUCTFIELDCOUNT_OFFSET))(this);
		}

		::System::Void Encode(::System::Int32& pos, ::Il2CppArray<::System::Byte>* metadata)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_ENCODE_OFFSET))(this, pos, metadata);
		}
	};
}
