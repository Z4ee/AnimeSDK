#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::InteropServices { class SafeBuffer; }

#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1634A1B0)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1634A1A0)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_ENSURESAFETOREAD_OFFSET UNITYSDK_OFFSET(0x1634A240)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1634A160)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1634A180)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1634A150)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1634A200)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16349DC0)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_INTERNALREADBYTE_OFFSET UNITYSDK_OFFSET(0x1634A390)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1634A210)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READBYTE_OFFSET UNITYSDK_OFFSET(0x1634A4F0)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READCHAR_OFFSET UNITYSDK_OFFSET(0x1634A520)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1634AC80)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT16_OFFSET UNITYSDK_OFFSET(0x1634A690)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT32_OFFSET UNITYSDK_OFFSET(0x1634A800)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT64_OFFSET UNITYSDK_OFFSET(0x1634A970)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READSBYTE_OFFSET UNITYSDK_OFFSET(0x1634AE20)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1634AAE0)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT16_OFFSET UNITYSDK_OFFSET(0x1634AF90)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT32_OFFSET UNITYSDK_OFFSET(0x1634B100)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT64_OFFSET UNITYSDK_OFFSET(0x1634B270)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16349DB0)

namespace System::IO
{
	inline static constexpr unsigned int UnmanagedMemoryAccessor_TypeDefinitionIndex = 703;

	class UnmanagedMemoryAccessor : public ::System::Object
	{
	public:
		::System::Runtime::InteropServices::SafeBuffer* _buffer; // 0x10
		::System::Int64 _capacity; // 0x18
		::System::Int64 _offset; // 0x20
		::System::Boolean _isOpen; // 0x28
		::System::Boolean _canWrite; // 0x29
		::System::Boolean _canRead; // 0x2A
		::System::IO::FileAccess _access; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Runtime::InteropServices::SafeBuffer* buffer, ::System::Int64 offset, ::System::Int64 capacity, ::System::IO::FileAccess access)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::SafeBuffer*, ::System::Int64, ::System::Int64, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_INITIALIZE_OFFSET))(this, buffer, offset, capacity, access);
		}

		::System::Int64 get_Capacity()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_CANWRITE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_DISPOSE_1_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_ISOPEN_OFFSET))(this);
		}

		::System::Boolean ReadBoolean(::System::Int64 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READBOOLEAN_OFFSET))(this, position);
		}

		::System::Byte ReadByte(::System::Int64 position)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READBYTE_OFFSET))(this, position);
		}

		::System::Char ReadChar(::System::Int64 position)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READCHAR_OFFSET))(this, position);
		}

		::System::Int16 ReadInt16(::System::Int64 position)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT16_OFFSET))(this, position);
		}

		::System::Int32 ReadInt32(::System::Int64 position)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT32_OFFSET))(this, position);
		}

		::System::Int64 ReadInt64(::System::Int64 position)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT64_OFFSET))(this, position);
		}

		::System::Single ReadSingle(::System::Int64 position)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READSINGLE_OFFSET))(this, position);
		}

		::System::Double ReadDouble(::System::Int64 position)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READDOUBLE_OFFSET))(this, position);
		}

		::System::SByte ReadSByte(::System::Int64 position)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READSBYTE_OFFSET))(this, position);
		}

		::System::UInt16 ReadUInt16(::System::Int64 position)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT16_OFFSET))(this, position);
		}

		::System::UInt32 ReadUInt32(::System::Int64 position)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT32_OFFSET))(this, position);
		}

		::System::UInt64 ReadUInt64(::System::Int64 position)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT64_OFFSET))(this, position);
		}

		::System::Byte InternalReadByte(::System::Int64 position)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_INTERNALREADBYTE_OFFSET))(this, position);
		}

		::System::Void EnsureSafeToRead(::System::Int64 position, ::System::Int32 sizeOfType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_ENSURESAFETOREAD_OFFSET))(this, position, sizeOfType);
		}
	};
}
