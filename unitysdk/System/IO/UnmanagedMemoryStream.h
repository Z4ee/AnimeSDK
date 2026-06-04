#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Runtime::InteropServices { class SafeBuffer; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1871E6D0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x18729F00)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x18729EC0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x18729ED0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x18729EE0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x18729FE0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18729F70)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_POSITIONPOINTER_OFFSET UNITYSDK_OFFSET(0x1872A190)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1872A050)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x18729AE0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_INITIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1871E3B0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18729AC0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x1872A6B0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1872A950)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1872A310)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1872AB90)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1872AD40)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1872A0C0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1872B400)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1872B6B0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1872AF30)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18729E10)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18729E60)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1871E370)

namespace System::IO
{
	inline static constexpr unsigned int UnmanagedMemoryStream_TypeDefinitionIndex = 703;

	class UnmanagedMemoryStream : public ::System::IO::Stream
	{
	public:
		::System::Runtime::InteropServices::SafeBuffer* _buffer; // 0x28
		::System::Threading::Tasks::Task_1<::System::Int32>* _lastReadTask; // 0x30
		::System::Byte* _mem; // 0x38
		::System::Int64 _position; // 0x40
		::System::IO::FileAccess _access; // 0x48
		::System::Boolean _isOpen; // 0x4C
		::System::Int64 _capacity; // 0x50
		::System::Int64 _length; // 0x58
		::System::Int64 _offset; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Byte* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Byte* a1, ::System::Int64 a2, ::System::Int64 a3, ::System::IO::FileAccess a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int64, ::System::Int64, ::System::IO::FileAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Initialize(::System::Runtime::InteropServices::SafeBuffer* a1, ::System::Int64 a2, ::System::Int64 a3, ::System::IO::FileAccess a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::SafeBuffer*, ::System::Int64, ::System::Int64, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_INITIALIZE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Initialize_1(::System::Runtime::InteropServices::SafeBuffer* a1, ::System::Int64 a2, ::System::Int64 a3, ::System::IO::FileAccess a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::SafeBuffer*, ::System::Int64, ::System::Int64, ::System::IO::FileAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_INITIALIZE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Initialize_2(::System::Byte* a1, ::System::Int64 a2, ::System::Int64 a3, ::System::IO::FileAccess a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int64, ::System::Int64, ::System::IO::FileAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_INITIALIZE_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Capacity()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CAPACITY_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Byte* get_PositionPointer()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_POSITIONPOINTER_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITEASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITEBYTE_OFFSET))(this, a1);
		}
	};
}
