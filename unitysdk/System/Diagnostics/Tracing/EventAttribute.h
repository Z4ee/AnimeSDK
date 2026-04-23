#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Diagnostics/Tracing/EventActivityOptions.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventOpcode.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTask.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ACTIVITYOPTIONS_OFFSET UNITYSDK_OFFSET(0x178E6E20)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x178E6D40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ISOPCODESET_OFFSET UNITYSDK_OFFSET(0x178E6DB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x178E6D80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x178E6D60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x178E6DF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_OPCODE_OFFSET UNITYSDK_OFFSET(0x178E6D90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x178E6E10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x178E6DC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x178E6DE0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_ACTIVITYOPTIONS_OFFSET UNITYSDK_OFFSET(0x178E6E30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x178E6D50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x178E6D70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x178E6E00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_OPCODE_OFFSET UNITYSDK_OFFSET(0x178E6DA0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x178E6DD0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x178E6D30)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventAttribute_TypeDefinitionIndex = 1684;

	class EventAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Message_k__BackingField; // 0x10
		::System::Int32 _EventId_k__BackingField; // 0x18
		::System::Diagnostics::Tracing::EventActivityOptions _ActivityOptions_k__BackingField; // 0x1C
		::System::Diagnostics::Tracing::EventOpcode m_opcode; // 0x20
		::System::Boolean m_opcodeSet; // 0x24
		::System::Byte _Version_k__BackingField; // 0x25
		::System::Diagnostics::Tracing::EventLevel _Level_k__BackingField; // 0x28
		::System::Diagnostics::Tracing::EventKeywords _Keywords_k__BackingField; // 0x30
		::System::Diagnostics::Tracing::EventTask _Task_k__BackingField; // 0x38
		::System::Diagnostics::Tracing::EventTags _Tags_k__BackingField; // 0x3C

		::System::Void _ctor(::System::Int32 eventId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE__CTOR_OFFSET))(this, eventId);
		}

		::System::Int32 get_EventId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_EVENTID_OFFSET))(this, value);
		}

		::System::Diagnostics::Tracing::EventLevel get_Level()
		{
			return ((::System::Diagnostics::Tracing::EventLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Diagnostics::Tracing::EventLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Diagnostics::Tracing::EventKeywords get_Keywords()
		{
			return ((::System::Diagnostics::Tracing::EventKeywords(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_KEYWORDS_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventOpcode get_Opcode()
		{
			return ((::System::Diagnostics::Tracing::EventOpcode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_OPCODE_OFFSET))(this);
		}

		::System::Void set_Opcode(::System::Diagnostics::Tracing::EventOpcode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventOpcode))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_OPCODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsOpcodeSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ISOPCODESET_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventTask get_Task()
		{
			return ((::System::Diagnostics::Tracing::EventTask(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TASK_OFFSET))(this);
		}

		::System::Void set_Task(::System::Diagnostics::Tracing::EventTask value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventTask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_TASK_OFFSET))(this, value);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_VERSION_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void set_Message(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_MESSAGE_OFFSET))(this, value);
		}

		::System::Diagnostics::Tracing::EventTags get_Tags()
		{
			return ((::System::Diagnostics::Tracing::EventTags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TAGS_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventActivityOptions get_ActivityOptions()
		{
			return ((::System::Diagnostics::Tracing::EventActivityOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ACTIVITYOPTIONS_OFFSET))(this);
		}

		::System::Void set_ActivityOptions(::System::Diagnostics::Tracing::EventActivityOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventActivityOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_ACTIVITYOPTIONS_OFFSET))(this, value);
		}
	};
}
