#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_GET_DATAPOINTER_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SETMETADATA_OFFSET UNITYSDK_OFFSET(0x22A7530)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SET_DATAPOINTER_OFFSET UNITYSDK_OFFSET(0xBDC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xD250)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSource_EventData_TypeDefinitionIndex = 1654;

	struct alignas(8) EventSource_EventData
	{
		::System::Int64 m_Ptr; // 0x10
		::System::Int32 m_Size; // 0x18
		::System::Int32 m_Reserved; // 0x1C

		::System::IntPtr get_DataPointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_GET_DATAPOINTER_OFFSET))(this);
		}

		::System::Void set_DataPointer(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SET_DATAPOINTER_OFFSET))(this, value);
		}

		::System::Void set_Size(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SET_SIZE_OFFSET))(this, value);
		}

		::System::Void SetMetadata(::System::Byte* pointer, ::System::Int32 size, ::System::Int32 reserved)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SETMETADATA_OFFSET))(this, pointer, size, reserved);
		}
	};
}
