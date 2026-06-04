#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Diagnostics/Tracing/ConcurrentSet_2.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Diagnostics::Tracing { class NameInfo; }
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GETNAMEINFO_OFFSET UNITYSDK_OFFSET(0x186A6240)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GET_NAME_OFFSET UNITYSDK_OFFSET(0x186C1870)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x186C1880)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_MAKEARRAY_1_OFFSET UNITYSDK_OFFSET(0x186C1100)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_MAKEARRAY_OFFSET UNITYSDK_OFFSET(0x186C1540)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186AB4C0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186C12C0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_OFFSET UNITYSDK_OFFSET(0x186AF430)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingEventTypes_TypeDefinitionIndex = 1657;

	class TraceLoggingEventTypes : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos; // 0x10
		::Il2CppArray<::System::Byte>* typeMetadata; // 0x18
		::System::Diagnostics::Tracing::ConcurrentSet_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Diagnostics::Tracing::EventTags>, ::System::Diagnostics::Tracing::NameInfo*> nameInfos; // 0x20
		::System::String* name; // 0x28
		::System::Diagnostics::Tracing::EventKeywords keywords; // 0x30
		::System::Int32 scratchSize; // 0x38
		::System::Byte level; // 0x3C
		::System::Byte opcode; // 0x3D
		::System::Int32 dataCount; // 0x40
		::System::Int32 pinCount; // 0x44
		::System::Diagnostics::Tracing::EventTags tags; // 0x48

		::System::Void _ctor(::System::String* a1, ::System::Diagnostics::Tracing::EventTags a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Diagnostics::Tracing::EventTags a2, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Diagnostics::Tracing::EventTags a1, ::System::String* a2, ::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventTags, ::System::String*, ::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GET_NAME_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventTags get_Tags()
		{
			return ((::System::Diagnostics::Tracing::EventTags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GET_TAGS_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::NameInfo* GetNameInfo(::System::String* a1, ::System::Diagnostics::Tracing::EventTags a2)
		{
			return ((::System::Diagnostics::Tracing::NameInfo*(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GETNAMEINFO_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray(::Il2CppArray<::System::Reflection::ParameterInfo*>* a1)
		{
			return ((::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*(*)(::PVOID, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_MAKEARRAY_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray_1(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_MAKEARRAY_1_OFFSET))(a1);
		}
	};
}
