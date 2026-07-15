#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventOpcode.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0x191C1260)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x191C2D90)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x191C2D70)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x191C2D50)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x191C2D40)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_OPCODE_OFFSET UNITYSDK_OFFSET(0x191C2D60)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x191C2D80)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x191C2BF0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x191C2B00)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingTypeInfo_TypeDefinitionIndex = 1664;

	class TraceLoggingTypeInfo : public ::System::Object
	{
	public:
		::System::Type* dataType; // 0x10
		::System::String* name; // 0x18
		::System::Diagnostics::Tracing::EventTags tags; // 0x20
		::System::Diagnostics::Tracing::EventKeywords keywords; // 0x28
		::System::Diagnostics::Tracing::EventOpcode opcode; // 0x30
		::System::Diagnostics::Tracing::EventLevel level; // 0x34

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventLevel a3, ::System::Diagnostics::Tracing::EventOpcode a4, ::System::Diagnostics::Tracing::EventKeywords a5, ::System::Diagnostics::Tracing::EventTags a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventOpcode, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventTags))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_NAME_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventLevel get_Level()
		{
			return ((::System::Diagnostics::Tracing::EventLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventOpcode get_Opcode()
		{
			return ((::System::Diagnostics::Tracing::EventOpcode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_OPCODE_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventKeywords get_Keywords()
		{
			return ((::System::Diagnostics::Tracing::EventKeywords(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_KEYWORDS_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventTags get_Tags()
		{
			return ((::System::Diagnostics::Tracing::EventTags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_TAGS_OFFSET))(this);
		}

		::System::Type* get_DataType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_DATATYPE_OFFSET))(this);
		}

		::System::Object* GetData(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GETDATA_OFFSET))(this, a1);
		}
	};
}
