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

#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GETNAMEINFO_OFFSET UNITYSDK_OFFSET(0x178ED570)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1790AC40)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1790AC50)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_MAKEARRAY_1_OFFSET UNITYSDK_OFFSET(0x1790A490)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_MAKEARRAY_OFFSET UNITYSDK_OFFSET(0x1790A8F0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178F2E90)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1790A670)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_OFFSET UNITYSDK_OFFSET(0x178F76D0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingEventTypes_TypeDefinitionIndex = 1659;

	class TraceLoggingEventTypes : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* typeMetadata; // 0x10
		::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos; // 0x18
		::System::Diagnostics::Tracing::ConcurrentSet_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Diagnostics::Tracing::EventTags>, ::System::Diagnostics::Tracing::NameInfo*> nameInfos; // 0x20
		::System::String* name; // 0x28
		::System::Byte level; // 0x30
		::System::Byte opcode; // 0x31
		::System::Int32 scratchSize; // 0x34
		::System::Int32 pinCount; // 0x38
		::System::Diagnostics::Tracing::EventTags tags; // 0x3C
		::System::Diagnostics::Tracing::EventKeywords keywords; // 0x40
		::System::Int32 dataCount; // 0x48

		::System::Void _ctor(::System::String* name, ::System::Diagnostics::Tracing::EventTags tags, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_OFFSET))(this, name, tags, types);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Diagnostics::Tracing::EventTags tags, ::Il2CppArray<::System::Reflection::ParameterInfo*>* paramInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_1_OFFSET))(this, name, tags, paramInfos);
		}

		::System::Void _ctor_2(::System::Diagnostics::Tracing::EventTags tags, ::System::String* defaultName, ::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventTags, ::System::String*, ::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES__CTOR_2_OFFSET))(this, tags, defaultName, typeInfos);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GET_NAME_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventTags get_Tags()
		{
			return ((::System::Diagnostics::Tracing::EventTags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GET_TAGS_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::NameInfo* GetNameInfo(::System::String* name, ::System::Diagnostics::Tracing::EventTags tags)
		{
			return ((::System::Diagnostics::Tracing::NameInfo*(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_GETNAMEINFO_OFFSET))(this, name, tags);
		}

		::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray(::Il2CppArray<::System::Reflection::ParameterInfo*>* paramInfos)
		{
			return ((::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*(*)(::PVOID, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_MAKEARRAY_OFFSET))(this, paramInfos);
		}

		static ::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray_1(::Il2CppArray<::System::Type*>* types)
		{
			return ((::Il2CppArray<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGEVENTTYPES_MAKEARRAY_1_OFFSET))(types);
		}
	};
}
