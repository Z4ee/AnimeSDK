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

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ACTIVITYOPTIONS_OFFSET UNITYSDK_OFFSET(0x162BA510)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x162BA430)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ISOPCODESET_OFFSET UNITYSDK_OFFSET(0x162BA4A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x162BA470)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x162BA450)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x162BA4E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_OPCODE_OFFSET UNITYSDK_OFFSET(0x162BA480)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x162BA500)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x162BA4B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x162BA4D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_ACTIVITYOPTIONS_OFFSET UNITYSDK_OFFSET(0x162BA520)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x162BA440)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x162BA460)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x162BA4F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_OPCODE_OFFSET UNITYSDK_OFFSET(0x162BA490)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x162BA4C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x162BA420)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventAttribute_TypeDefinitionIndex = 1683;

	class EventAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Message_k__BackingField; // 0x10
		::System::Diagnostics::Tracing::EventTask _Task_k__BackingField; // 0x18
		::System::Byte _Version_k__BackingField; // 0x1C
		::System::Boolean m_opcodeSet; // 0x1D
		::System::Diagnostics::Tracing::EventKeywords _Keywords_k__BackingField; // 0x20
		::System::Diagnostics::Tracing::EventOpcode m_opcode; // 0x28
		::System::Diagnostics::Tracing::EventActivityOptions _ActivityOptions_k__BackingField; // 0x2C
		::System::Int32 _EventId_k__BackingField; // 0x30
		::System::Diagnostics::Tracing::EventLevel _Level_k__BackingField; // 0x34
		::System::Diagnostics::Tracing::EventTags _Tags_k__BackingField; // 0x38

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
