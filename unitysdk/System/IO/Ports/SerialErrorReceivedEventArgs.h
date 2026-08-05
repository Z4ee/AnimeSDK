#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/IO/Ports/SerialError.h"

#define SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTARGS_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD19070)
#define SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD19030)

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialErrorReceivedEventArgs_TypeDefinitionIndex = 4158;

	class SerialErrorReceivedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::IO::Ports::SerialError get_EventType()
		{
			return ((::System::IO::Ports::SerialError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTARGS_GET_EVENTTYPE_OFFSET))(this);
		}
	};
}
