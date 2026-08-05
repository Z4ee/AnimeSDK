#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/IO/Ports/SerialPinChange.h"

#define SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTARGS_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D6A4920)
#define SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A48E0)

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialPinChangedEventArgs_TypeDefinitionIndex = 4161;

	class SerialPinChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::IO::Ports::SerialPinChange get_EventType()
		{
			return ((::System::IO::Ports::SerialPinChange(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTARGS_GET_EVENTTYPE_OFFSET))(this);
		}
	};
}
