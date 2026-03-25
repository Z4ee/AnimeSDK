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

#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0x162DD490)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x162DED90)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x162DED70)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x162DED50)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x162DED40)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_OPCODE_OFFSET UNITYSDK_OFFSET(0x162DED60)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x162DED80)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162DEBF0)
#define SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162DEB60)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingTypeInfo_TypeDefinitionIndex = 1661;

	class TraceLoggingTypeInfo : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Type* dataType; // 0x18
		::System::Diagnostics::Tracing::EventTags tags; // 0x20
		::System::Diagnostics::Tracing::EventLevel level; // 0x24
		::System::Diagnostics::Tracing::EventOpcode opcode; // 0x28
		::System::Diagnostics::Tracing::EventKeywords keywords; // 0x30

		::System::Void _ctor(::System::Type* dataType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO__CTOR_OFFSET))(this, dataType);
		}

		::System::Void _ctor_1(::System::Type* dataType, ::System::String* name, ::System::Diagnostics::Tracing::EventLevel level, ::System::Diagnostics::Tracing::EventOpcode opcode, ::System::Diagnostics::Tracing::EventKeywords keywords, ::System::Diagnostics::Tracing::EventTags tags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventOpcode, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventTags))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO__CTOR_1_OFFSET))(this, dataType, name, level, opcode, keywords, tags);
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

		::System::Object* GetData(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TRACELOGGINGTYPEINFO_GETDATA_OFFSET))(this, value);
		}
	};
}
