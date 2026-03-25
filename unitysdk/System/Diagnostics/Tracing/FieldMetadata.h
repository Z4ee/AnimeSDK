#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldTags.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingDataType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_ENCODE_OFFSET UNITYSDK_OFFSET(0x162D59A0)
#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_INCREMENTSTRUCTFIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x162D5930)
#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162D5610)
#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x162D55D0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int FieldMetadata_TypeDefinitionIndex = 1595;

	class FieldMetadata : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* custom; // 0x10
		::System::String* name; // 0x18
		::System::Byte inType; // 0x20
		::System::Byte outType; // 0x21
		::System::UInt16 fixedCount; // 0x22
		::System::Diagnostics::Tracing::EventFieldTags tags; // 0x24
		::System::Int32 nameSize; // 0x28

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
