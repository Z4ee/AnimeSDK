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

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ACTIVITYOPTIONS_OFFSET UNITYSDK_OFFSET(0x1AB5A860)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1AB5A780)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ISOPCODESET_OFFSET UNITYSDK_OFFSET(0x1AB5A7F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x1AB5A7C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AB5A7A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1AB5A830)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_OPCODE_OFFSET UNITYSDK_OFFSET(0x1AB5A7D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1AB5A850)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1AB5A800)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AB5A820)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_ACTIVITYOPTIONS_OFFSET UNITYSDK_OFFSET(0x1AB5A870)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1AB5A790)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AB5A7B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1AB5A840)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_OPCODE_OFFSET UNITYSDK_OFFSET(0x1AB5A7E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1AB5A810)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5A770)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventAttribute_TypeDefinitionIndex = 1693;

	class EventAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Message_k__BackingField; // 0x10
		::System::Int32 _EventId_k__BackingField; // 0x18
		::System::Byte _Version_k__BackingField; // 0x1C
		::System::Boolean m_opcodeSet; // 0x1D
		::System::Diagnostics::Tracing::EventOpcode m_opcode; // 0x20
		::System::Diagnostics::Tracing::EventLevel _Level_k__BackingField; // 0x24
		::System::Diagnostics::Tracing::EventActivityOptions _ActivityOptions_k__BackingField; // 0x28
		::System::Diagnostics::Tracing::EventKeywords _Keywords_k__BackingField; // 0x30
		::System::Diagnostics::Tracing::EventTask _Task_k__BackingField; // 0x38
		::System::Diagnostics::Tracing::EventTags _Tags_k__BackingField; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_EventId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::Diagnostics::Tracing::EventLevel get_Level()
		{
			return ((::System::Diagnostics::Tracing::EventLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Diagnostics::Tracing::EventLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Diagnostics::Tracing::EventKeywords get_Keywords()
		{
			return ((::System::Diagnostics::Tracing::EventKeywords(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_KEYWORDS_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventOpcode get_Opcode()
		{
			return ((::System::Diagnostics::Tracing::EventOpcode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_OPCODE_OFFSET))(this);
		}

		::System::Void set_Opcode(::System::Diagnostics::Tracing::EventOpcode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventOpcode))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_OPCODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOpcodeSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ISOPCODESET_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventTask get_Task()
		{
			return ((::System::Diagnostics::Tracing::EventTask(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TASK_OFFSET))(this);
		}

		::System::Void set_Task(::System::Diagnostics::Tracing::EventTask a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventTask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_TASK_OFFSET))(this, a1);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_VERSION_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void set_Message(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_MESSAGE_OFFSET))(this, a1);
		}

		::System::Diagnostics::Tracing::EventTags get_Tags()
		{
			return ((::System::Diagnostics::Tracing::EventTags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_TAGS_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventActivityOptions get_ActivityOptions()
		{
			return ((::System::Diagnostics::Tracing::EventActivityOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_GET_ACTIVITYOPTIONS_OFFSET))(this);
		}

		::System::Void set_ActivityOptions(::System::Diagnostics::Tracing::EventActivityOptions a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventActivityOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_ACTIVITYOPTIONS_OFFSET))(this, a1);
		}
	};
}
