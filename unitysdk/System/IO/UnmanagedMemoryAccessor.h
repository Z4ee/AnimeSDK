#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::InteropServices { class SafeBuffer; }

#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18728B80)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18728B70)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_ENSURESAFETOREAD_OFFSET UNITYSDK_OFFSET(0x18728C40)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x18728B30)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x18728B50)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x18728B20)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x18728C00)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x187287F0)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_INTERNALREADBYTE_OFFSET UNITYSDK_OFFSET(0x18728D90)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18728C10)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READBYTE_OFFSET UNITYSDK_OFFSET(0x18728EB0)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READCHAR_OFFSET UNITYSDK_OFFSET(0x18728EE0)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x187294D0)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT16_OFFSET UNITYSDK_OFFSET(0x18729010)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT32_OFFSET UNITYSDK_OFFSET(0x18729140)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT64_OFFSET UNITYSDK_OFFSET(0x18729260)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READSBYTE_OFFSET UNITYSDK_OFFSET(0x18729610)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READSINGLE_OFFSET UNITYSDK_OFFSET(0x18729390)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT16_OFFSET UNITYSDK_OFFSET(0x18729740)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT32_OFFSET UNITYSDK_OFFSET(0x18729870)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT64_OFFSET UNITYSDK_OFFSET(0x18729990)
#define SYSTEM_IO_UNMANAGEDMEMORYACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x187287E0)

namespace System::IO
{
	inline static constexpr unsigned int UnmanagedMemoryAccessor_TypeDefinitionIndex = 702;

	class UnmanagedMemoryAccessor : public ::System::Object
	{
	public:
		::System::Runtime::InteropServices::SafeBuffer* _buffer; // 0x10
		::System::Int64 _capacity; // 0x18
		::System::IO::FileAccess _access; // 0x20
		::System::Boolean _canWrite; // 0x24
		::System::Boolean _isOpen; // 0x25
		::System::Boolean _canRead; // 0x26
		::System::Int64 _offset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Runtime::InteropServices::SafeBuffer* a1, ::System::Int64 a2, ::System::Int64 a3, ::System::IO::FileAccess a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::SafeBuffer*, ::System::Int64, ::System::Int64, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_INITIALIZE_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_DISPOSE_1_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_GET_ISOPEN_OFFSET))(this);
		}

		::System::Boolean ReadBoolean(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READBOOLEAN_OFFSET))(this, a1);
		}

		::System::Byte ReadByte(::System::Int64 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READBYTE_OFFSET))(this, a1);
		}

		::System::Char ReadChar(::System::Int64 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READCHAR_OFFSET))(this, a1);
		}

		::System::Int16 ReadInt16(::System::Int64 a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT16_OFFSET))(this, a1);
		}

		::System::Int32 ReadInt32(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT32_OFFSET))(this, a1);
		}

		::System::Int64 ReadInt64(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READINT64_OFFSET))(this, a1);
		}

		::System::Single ReadSingle(::System::Int64 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READSINGLE_OFFSET))(this, a1);
		}

		::System::Double ReadDouble(::System::Int64 a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READDOUBLE_OFFSET))(this, a1);
		}

		::System::SByte ReadSByte(::System::Int64 a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READSBYTE_OFFSET))(this, a1);
		}

		::System::UInt16 ReadUInt16(::System::Int64 a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT16_OFFSET))(this, a1);
		}

		::System::UInt32 ReadUInt32(::System::Int64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT32_OFFSET))(this, a1);
		}

		::System::UInt64 ReadUInt64(::System::Int64 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_READUINT64_OFFSET))(this, a1);
		}

		::System::Byte InternalReadByte(::System::Int64 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_INTERNALREADBYTE_OFFSET))(this, a1);
		}

		::System::Void EnsureSafeToRead(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_ENSURESAFETOREAD_OFFSET))(this, a1, a2);
		}
	};
}
