#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Runtime::InteropServices { class SafeBuffer; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E0E9D0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x19E0EA00)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x19E0E9E0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x19E0E990)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x19E0E9A0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x19E0E9B0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19E0EB00)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_POSITIONPOINTER_OFFSET UNITYSDK_OFFSET(0x19E0EBE0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x19E0EB30)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19E0E710)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x19E0F050)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x19E0F2B0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x19E0ECA0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x19E0F4A0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x19E0F610)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x19E0EB50)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x19E0FC60)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x19E0FE90)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x19E0F7B0)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E0E690)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19E0E900)
#define SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0E630)

namespace System::IO
{
	inline static constexpr unsigned int UnmanagedMemoryStream_TypeDefinitionIndex = 671;

	class UnmanagedMemoryStream : public ::System::IO::Stream
	{
	public:
		::System::Runtime::InteropServices::SafeBuffer* _buffer; // 0x28
		::System::Threading::Tasks::Task_1<::System::Int32>* _lastReadTask; // 0x30
		::System::Int64 _length; // 0x38
		::System::IO::FileAccess _access; // 0x40
		::System::Boolean _isOpen; // 0x44
		::System::Int64 _position; // 0x48
		::System::Int64 _capacity; // 0x50
		::System::Byte* _mem; // 0x58
		::System::Int64 _offset; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Byte* pointer, ::System::Int64 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_1_OFFSET))(this, pointer, length);
		}

		::System::Void _ctor_2(::System::Byte* pointer, ::System::Int64 length, ::System::Int64 capacity, ::System::IO::FileAccess access, ::System::Boolean skipSecurityCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int64, ::System::Int64, ::System::IO::FileAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM__CTOR_2_OFFSET))(this, pointer, length, capacity, access, skipSecurityCheck);
		}

		::System::Void Initialize(::System::Byte* pointer, ::System::Int64 length, ::System::Int64 capacity, ::System::IO::FileAccess access, ::System::Boolean skipSecurityCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int64, ::System::Int64, ::System::IO::FileAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_INITIALIZE_OFFSET))(this, pointer, length, capacity, access, skipSecurityCheck);
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

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Byte* get_PositionPointer()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_GET_POSITIONPOINTER_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin loc)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SEEK_OFFSET))(this, offset, loc);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITEASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNMANAGEDMEMORYSTREAM_WRITEBYTE_OFFSET))(this, value);
		}
	};
}
