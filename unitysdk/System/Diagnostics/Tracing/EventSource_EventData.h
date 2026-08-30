#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_GET_DATAPOINTER_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SETMETADATA_OFFSET UNITYSDK_OFFSET(0x3B6AAE0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SET_DATAPOINTER_OFFSET UNITYSDK_OFFSET(0xC610)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xDAC0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSource_EventData_TypeDefinitionIndex = 1663;

	struct alignas(8) EventSource_EventData
	{
		::System::Int64 m_Ptr; // 0x10
		::System::Int32 m_Size; // 0x18
		::System::Int32 m_Reserved; // 0x1C

		::System::IntPtr get_DataPointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_GET_DATAPOINTER_OFFSET))(this);
		}

		::System::Void set_DataPointer(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SET_DATAPOINTER_OFFSET))(this, a1);
		}

		::System::Void set_Size(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Void SetMetadata(::System::Byte* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_EVENTDATA_SETMETADATA_OFFSET))(this, a1, a2, a3);
		}
	};
}
