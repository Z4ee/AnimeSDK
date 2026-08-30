#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B67490)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B673D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B67460)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0xB59680)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1D080)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x7846F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x3A302F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_OPCODE_OFFSET UNITYSDK_OFFSET(0x3A4AA50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_TASK_OFFSET UNITYSDK_OFFSET(0x3B673C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xB59660)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B673B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3B67390)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventDescriptor_TypeDefinitionIndex = 1679;

	struct alignas(8) EventDescriptor
	{
		::System::Int32 m_traceloggingId; // 0x10
		::System::UInt16 m_id; // 0x10
		::System::Byte m_version; // 0x12
		::System::Byte m_channel; // 0x13
		::System::Byte m_level; // 0x14
		::System::Byte m_opcode; // 0x15
		::System::UInt16 m_task; // 0x16
		::System::Int64 m_keywords; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Byte a2, ::System::Byte a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte, ::System::Byte, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Byte a2, ::System::Byte a3, ::System::Byte a4, ::System::Byte a5, ::System::Int32 a6, ::System::Int64 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 get_EventId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_EVENTID_OFFSET))(this);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_VERSION_OFFSET))(this);
		}

		::System::Byte get_Channel()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_CHANNEL_OFFSET))(this);
		}

		::System::Byte get_Level()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_LEVEL_OFFSET))(this);
		}

		::System::Byte get_Opcode()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_OPCODE_OFFSET))(this);
		}

		::System::Int32 get_Task()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_TASK_OFFSET))(this);
		}

		::System::Int64 get_Keywords()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GET_KEYWORDS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Diagnostics::Tracing::EventDescriptor a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDescriptor))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDESCRIPTOR_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
