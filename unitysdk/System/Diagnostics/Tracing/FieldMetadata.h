#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldTags.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingDataType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_ENCODE_OFFSET UNITYSDK_OFFSET(0x191B89C0)
#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_INCREMENTSTRUCTFIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x191B8950)
#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x191B8640)
#define SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191B8600)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int FieldMetadata_TypeDefinitionIndex = 1598;

	class FieldMetadata : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* custom; // 0x10
		::System::String* name; // 0x18
		::System::Int32 nameSize; // 0x20
		::System::Diagnostics::Tracing::EventFieldTags tags; // 0x24
		::System::Byte outType; // 0x28
		::System::Byte inType; // 0x29
		::System::UInt16 fixedCount; // 0x2A

		::System::Void _ctor(::System::String* a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2, ::System::Diagnostics::Tracing::EventFieldTags a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType, ::System::Diagnostics::Tracing::EventFieldTags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2, ::System::Diagnostics::Tracing::EventFieldTags a3, ::System::Byte a4, ::System::UInt16 a5, ::Il2CppArray<::System::Byte>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingDataType, ::System::Diagnostics::Tracing::EventFieldTags, ::System::Byte, ::System::UInt16, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void IncrementStructFieldCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_INCREMENTSTRUCTFIELDCOUNT_OFFSET))(this);
		}

		::System::Void Encode(::System::Int32& a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_FIELDMETADATA_ENCODE_OFFSET))(this, a1, a2);
		}
	};
}
