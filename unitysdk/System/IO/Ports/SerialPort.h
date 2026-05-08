#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/IO/Ports/Handshake.h"
#include "unitysdk/System/IO/Ports/Parity.h"
#include "unitysdk/System/IO/Ports/StopBits.h"

namespace System { class String; }
namespace System::ComponentModel { class IContainer; }
namespace System::IO { class Stream; }
namespace System::IO::Ports { class SerialDataReceivedEventHandler; }
namespace System::IO::Ports { class SerialErrorReceivedEventHandler; }
namespace System::IO::Ports { class SerialPinChangedEventHandler; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_PORTS_SERIALPORT_ADD_DATARECEIVED_OFFSET UNITYSDK_OFFSET(0x193B37C0)
#define SYSTEM_IO_PORTS_SERIALPORT_ADD_ERRORRECEIVED_OFFSET UNITYSDK_OFFSET(0x193B3840)
#define SYSTEM_IO_PORTS_SERIALPORT_ADD_PINCHANGED_OFFSET UNITYSDK_OFFSET(0x193B38C0)
#define SYSTEM_IO_PORTS_SERIALPORT_CLOSE_OFFSET UNITYSDK_OFFSET(0x193B3940)
#define SYSTEM_IO_PORTS_SERIALPORT_DISCARDINBUFFER_OFFSET UNITYSDK_OFFSET(0x193B3980)
#define SYSTEM_IO_PORTS_SERIALPORT_DISCARDOUTBUFFER_OFFSET UNITYSDK_OFFSET(0x193B39C0)
#define SYSTEM_IO_PORTS_SERIALPORT_GETPORTNAMES_OFFSET UNITYSDK_OFFSET(0x193B3A00)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x193B2D00)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_BAUDRATE_OFFSET UNITYSDK_OFFSET(0x193B2D40)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_BREAKSTATE_OFFSET UNITYSDK_OFFSET(0x193B2DC0)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_BYTESTOREAD_OFFSET UNITYSDK_OFFSET(0x193B2E40)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_BYTESTOWRITE_OFFSET UNITYSDK_OFFSET(0x193B2E80)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_CDHOLDING_OFFSET UNITYSDK_OFFSET(0x193B2EC0)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_CTSHOLDING_OFFSET UNITYSDK_OFFSET(0x193B2F00)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_DATABITS_OFFSET UNITYSDK_OFFSET(0x193B2F40)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_DISCARDNULL_OFFSET UNITYSDK_OFFSET(0x193B2FC0)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_DSRHOLDING_OFFSET UNITYSDK_OFFSET(0x193B3040)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_DTRENABLE_OFFSET UNITYSDK_OFFSET(0x193B3080)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x193B3100)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_HANDSHAKE_OFFSET UNITYSDK_OFFSET(0x193B3180)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x193B3200)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x193B3240)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_PARITYREPLACE_OFFSET UNITYSDK_OFFSET(0x193B3340)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_PARITY_OFFSET UNITYSDK_OFFSET(0x193B32C0)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_PORTNAME_OFFSET UNITYSDK_OFFSET(0x193B33C0)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_READBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x193B3440)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x193B34C0)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_RECEIVEDBYTESTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x193B3540)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_RTSENABLE_OFFSET UNITYSDK_OFFSET(0x193B35C0)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_STOPBITS_OFFSET UNITYSDK_OFFSET(0x193B3640)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_WRITEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x193B36C0)
#define SYSTEM_IO_PORTS_SERIALPORT_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x193B3740)
#define SYSTEM_IO_PORTS_SERIALPORT_OPEN_OFFSET UNITYSDK_OFFSET(0x193B3A40)
#define SYSTEM_IO_PORTS_SERIALPORT_READBYTE_OFFSET UNITYSDK_OFFSET(0x193B3B00)
#define SYSTEM_IO_PORTS_SERIALPORT_READCHAR_OFFSET UNITYSDK_OFFSET(0x193B3B40)
#define SYSTEM_IO_PORTS_SERIALPORT_READEXISTING_OFFSET UNITYSDK_OFFSET(0x193B3B80)
#define SYSTEM_IO_PORTS_SERIALPORT_READLINE_OFFSET UNITYSDK_OFFSET(0x193B3BC0)
#define SYSTEM_IO_PORTS_SERIALPORT_READTO_OFFSET UNITYSDK_OFFSET(0x193B3C00)
#define SYSTEM_IO_PORTS_SERIALPORT_READ_1_OFFSET UNITYSDK_OFFSET(0x193B3AC0)
#define SYSTEM_IO_PORTS_SERIALPORT_READ_OFFSET UNITYSDK_OFFSET(0x193B3A80)
#define SYSTEM_IO_PORTS_SERIALPORT_REMOVE_DATARECEIVED_OFFSET UNITYSDK_OFFSET(0x193B3800)
#define SYSTEM_IO_PORTS_SERIALPORT_REMOVE_ERRORRECEIVED_OFFSET UNITYSDK_OFFSET(0x193B3880)
#define SYSTEM_IO_PORTS_SERIALPORT_REMOVE_PINCHANGED_OFFSET UNITYSDK_OFFSET(0x193B3900)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_BAUDRATE_OFFSET UNITYSDK_OFFSET(0x193B2D80)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_BREAKSTATE_OFFSET UNITYSDK_OFFSET(0x193B2E00)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_DATABITS_OFFSET UNITYSDK_OFFSET(0x193B2F80)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_DISCARDNULL_OFFSET UNITYSDK_OFFSET(0x193B3000)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_DTRENABLE_OFFSET UNITYSDK_OFFSET(0x193B30C0)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x193B3140)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_HANDSHAKE_OFFSET UNITYSDK_OFFSET(0x193B31C0)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x193B3280)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_PARITYREPLACE_OFFSET UNITYSDK_OFFSET(0x193B3380)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_PARITY_OFFSET UNITYSDK_OFFSET(0x193B3300)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_PORTNAME_OFFSET UNITYSDK_OFFSET(0x193B3400)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_READBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x193B3480)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x193B3500)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_RECEIVEDBYTESTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x193B3580)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_RTSENABLE_OFFSET UNITYSDK_OFFSET(0x193B3600)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_STOPBITS_OFFSET UNITYSDK_OFFSET(0x193B3680)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_WRITEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x193B3700)
#define SYSTEM_IO_PORTS_SERIALPORT_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x193B3780)
#define SYSTEM_IO_PORTS_SERIALPORT_WRITELINE_OFFSET UNITYSDK_OFFSET(0x193B3D00)
#define SYSTEM_IO_PORTS_SERIALPORT_WRITE_1_OFFSET UNITYSDK_OFFSET(0x193B3C80)
#define SYSTEM_IO_PORTS_SERIALPORT_WRITE_2_OFFSET UNITYSDK_OFFSET(0x193B3CC0)
#define SYSTEM_IO_PORTS_SERIALPORT_WRITE_OFFSET UNITYSDK_OFFSET(0x193B3C40)
#define SYSTEM_IO_PORTS_SERIALPORT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193B2B80)
#define SYSTEM_IO_PORTS_SERIALPORT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x193B2BC0)
#define SYSTEM_IO_PORTS_SERIALPORT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x193B2C00)
#define SYSTEM_IO_PORTS_SERIALPORT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x193B2C40)
#define SYSTEM_IO_PORTS_SERIALPORT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x193B2C80)
#define SYSTEM_IO_PORTS_SERIALPORT__CTOR_6_OFFSET UNITYSDK_OFFSET(0x193B2CC0)
#define SYSTEM_IO_PORTS_SERIALPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x193B2B40)

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialPort_TypeDefinitionIndex = 4164;

	class SerialPort : public ::System::ComponentModel::Component
	{
	public:
		// static const ::System::Int32 InfiniteTimeout = 0xFFFFFFFF; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::ComponentModel::IContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IContainer*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT__CTOR_1_OFFSET))(this, container);
		}

		::System::Void _ctor_2(::System::String* portName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT__CTOR_2_OFFSET))(this, portName);
		}

		::System::Void _ctor_3(::System::String* portName, ::System::Int32 baudRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT__CTOR_3_OFFSET))(this, portName, baudRate);
		}

		::System::Void _ctor_4(::System::String* portName, ::System::Int32 baudRate, ::System::IO::Ports::Parity parity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::IO::Ports::Parity))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT__CTOR_4_OFFSET))(this, portName, baudRate, parity);
		}

		::System::Void _ctor_5(::System::String* portName, ::System::Int32 baudRate, ::System::IO::Ports::Parity parity, ::System::Int32 dataBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::IO::Ports::Parity, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT__CTOR_5_OFFSET))(this, portName, baudRate, parity, dataBits);
		}

		::System::Void _ctor_6(::System::String* portName, ::System::Int32 baudRate, ::System::IO::Ports::Parity parity, ::System::Int32 dataBits, ::System::IO::Ports::StopBits stopBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::IO::Ports::Parity, ::System::Int32, ::System::IO::Ports::StopBits))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT__CTOR_6_OFFSET))(this, portName, baudRate, parity, dataBits, stopBits);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Int32 get_BaudRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_BAUDRATE_OFFSET))(this);
		}

		::System::Void set_BaudRate(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_BAUDRATE_OFFSET))(this, value);
		}

		::System::Boolean get_BreakState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_BREAKSTATE_OFFSET))(this);
		}

		::System::Void set_BreakState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_BREAKSTATE_OFFSET))(this, value);
		}

		::System::Int32 get_BytesToRead()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_BYTESTOREAD_OFFSET))(this);
		}

		::System::Int32 get_BytesToWrite()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_BYTESTOWRITE_OFFSET))(this);
		}

		::System::Boolean get_CDHolding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_CDHOLDING_OFFSET))(this);
		}

		::System::Boolean get_CtsHolding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_CTSHOLDING_OFFSET))(this);
		}

		::System::Int32 get_DataBits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_DATABITS_OFFSET))(this);
		}

		::System::Void set_DataBits(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_DATABITS_OFFSET))(this, value);
		}

		::System::Boolean get_DiscardNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_DISCARDNULL_OFFSET))(this);
		}

		::System::Void set_DiscardNull(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_DISCARDNULL_OFFSET))(this, value);
		}

		::System::Boolean get_DsrHolding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_DSRHOLDING_OFFSET))(this);
		}

		::System::Boolean get_DtrEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_DTRENABLE_OFFSET))(this);
		}

		::System::Void set_DtrEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_DTRENABLE_OFFSET))(this, value);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_ENCODING_OFFSET))(this);
		}

		::System::Void set_Encoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_ENCODING_OFFSET))(this, value);
		}

		::System::IO::Ports::Handshake get_Handshake()
		{
			return ((::System::IO::Ports::Handshake(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_HANDSHAKE_OFFSET))(this);
		}

		::System::Void set_Handshake(::System::IO::Ports::Handshake value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Ports::Handshake))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_HANDSHAKE_OFFSET))(this, value);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_ISOPEN_OFFSET))(this);
		}

		::System::String* get_NewLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_NEWLINE_OFFSET))(this);
		}

		::System::Void set_NewLine(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_NEWLINE_OFFSET))(this, value);
		}

		::System::IO::Ports::Parity get_Parity()
		{
			return ((::System::IO::Ports::Parity(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_PARITY_OFFSET))(this);
		}

		::System::Void set_Parity(::System::IO::Ports::Parity value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Ports::Parity))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_PARITY_OFFSET))(this, value);
		}

		::System::Byte get_ParityReplace()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_PARITYREPLACE_OFFSET))(this);
		}

		::System::Void set_ParityReplace(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_PARITYREPLACE_OFFSET))(this, value);
		}

		::System::String* get_PortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_PORTNAME_OFFSET))(this);
		}

		::System::Void set_PortName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_PORTNAME_OFFSET))(this, value);
		}

		::System::Int32 get_ReadBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_READBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_ReadBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_READBUFFERSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_ReceivedBytesThreshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_RECEIVEDBYTESTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_ReceivedBytesThreshold(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_RECEIVEDBYTESTHRESHOLD_OFFSET))(this, value);
		}

		::System::Boolean get_RtsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_RTSENABLE_OFFSET))(this);
		}

		::System::Void set_RtsEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_RTSENABLE_OFFSET))(this, value);
		}

		::System::IO::Ports::StopBits get_StopBits()
		{
			return ((::System::IO::Ports::StopBits(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_STOPBITS_OFFSET))(this);
		}

		::System::Void set_StopBits(::System::IO::Ports::StopBits value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Ports::StopBits))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_STOPBITS_OFFSET))(this, value);
		}

		::System::Int32 get_WriteBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_WRITEBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_WriteBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_WRITEBUFFERSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Void add_DataReceived(::System::IO::Ports::SerialDataReceivedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Ports::SerialDataReceivedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_ADD_DATARECEIVED_OFFSET))(this, value);
		}

		::System::Void remove_DataReceived(::System::IO::Ports::SerialDataReceivedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Ports::SerialDataReceivedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_REMOVE_DATARECEIVED_OFFSET))(this, value);
		}

		::System::Void add_ErrorReceived(::System::IO::Ports::SerialErrorReceivedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Ports::SerialErrorReceivedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_ADD_ERRORRECEIVED_OFFSET))(this, value);
		}

		::System::Void remove_ErrorReceived(::System::IO::Ports::SerialErrorReceivedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Ports::SerialErrorReceivedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_REMOVE_ERRORRECEIVED_OFFSET))(this, value);
		}

		::System::Void add_PinChanged(::System::IO::Ports::SerialPinChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Ports::SerialPinChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_ADD_PINCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_PinChanged(::System::IO::Ports::SerialPinChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Ports::SerialPinChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_REMOVE_PINCHANGED_OFFSET))(this, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_CLOSE_OFFSET))(this);
		}

		::System::Void DiscardInBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_DISCARDINBUFFER_OFFSET))(this);
		}

		::System::Void DiscardOutBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_DISCARDOUTBUFFER_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* GetPortNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_GETPORTNAMES_OFFSET))();
		}

		::System::Void Open()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_OPEN_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_READ_1_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_READBYTE_OFFSET))(this);
		}

		::System::Int32 ReadChar()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_READCHAR_OFFSET))(this);
		}

		::System::String* ReadExisting()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_READEXISTING_OFFSET))(this);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_READLINE_OFFSET))(this);
		}

		::System::String* ReadTo(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_READTO_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_WRITE_1_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write_2(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_WRITE_2_OFFSET))(this, text);
		}

		::System::Void WriteLine(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPORT_WRITELINE_OFFSET))(this, text);
		}
	};
}
