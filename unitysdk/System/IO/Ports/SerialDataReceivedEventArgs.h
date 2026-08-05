#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/IO/Ports/SerialData.h"

#define SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTARGS_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C701BF0)
#define SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C701BB0)

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialDataReceivedEventArgs_TypeDefinitionIndex = 4155;

	class SerialDataReceivedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::IO::Ports::SerialData get_EventType()
		{
			return ((::System::IO::Ports::SerialData(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTARGS_GET_EVENTTYPE_OFFSET))(this);
		}
	};
}
