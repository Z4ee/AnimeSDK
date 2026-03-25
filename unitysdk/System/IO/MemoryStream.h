#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_MEMORYSTREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x1633AC50)
#define SYSTEM_IO_MEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16339DD0)
#define SYSTEM_IO_MEMORYSTREAM_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x16339E00)
#define SYSTEM_IO_MEMORYSTREAM_ENSUREWRITEABLE_OFFSET UNITYSDK_OFFSET(0x16339D10)
#define SYSTEM_IO_MEMORYSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x16339EB0)
#define SYSTEM_IO_MEMORYSTREAM_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x16339EC0)
#define SYSTEM_IO_MEMORYSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x16339CE0)
#define SYSTEM_IO_MEMORYSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x16339CF0)
#define SYSTEM_IO_MEMORYSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x16339D00)
#define SYSTEM_IO_MEMORYSTREAM_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1633A2B0)
#define SYSTEM_IO_MEMORYSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1633A490)
#define SYSTEM_IO_MEMORYSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1633A560)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALEMULATEREAD_OFFSET UNITYSDK_OFFSET(0x1633A230)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALGETBUFFER_OFFSET UNITYSDK_OFFSET(0x16339F90)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALGETPOSITION_OFFSET UNITYSDK_OFFSET(0x16339FA0)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALREADINT32_OFFSET UNITYSDK_OFFSET(0x1633A070)
#define SYSTEM_IO_MEMORYSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x1633A8E0)
#define SYSTEM_IO_MEMORYSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1633ABB0)
#define SYSTEM_IO_MEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1633A6C0)
#define SYSTEM_IO_MEMORYSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1633B3E0)
#define SYSTEM_IO_MEMORYSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1633B5F0)
#define SYSTEM_IO_MEMORYSTREAM_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1633A320)
#define SYSTEM_IO_MEMORYSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1633A5D0)
#define SYSTEM_IO_MEMORYSTREAM_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1633B7A0)
#define SYSTEM_IO_MEMORYSTREAM_TRYGETBUFFER_OFFSET UNITYSDK_OFFSET(0x16339F30)
#define SYSTEM_IO_MEMORYSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1633BBC0)
#define SYSTEM_IO_MEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1633BE40)
#define SYSTEM_IO_MEMORYSTREAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1633C020)
#define SYSTEM_IO_MEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1633B810)
#define SYSTEM_IO_MEMORYSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163399D0)
#define SYSTEM_IO_MEMORYSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16339A60)
#define SYSTEM_IO_MEMORYSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x16339A70)
#define SYSTEM_IO_MEMORYSTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x16339B30)
#define SYSTEM_IO_MEMORYSTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x16339B50)
#define SYSTEM_IO_MEMORYSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16339980)

namespace System::IO
{
	inline static constexpr unsigned int MemoryStream_TypeDefinitionIndex = 679;

	class MemoryStream : public ::System::IO::Stream
	{
	public:
		::System::Threading::Tasks::Task_1<::System::Int32>* _lastReadTask; // 0x28
		::Il2CppArray<::System::Byte>* _buffer; // 0x30
		::System::Int32 _capacity; // 0x38
		::System::Int32 _origin; // 0x3C
		::System::Int32 _length; // 0x40
		::System::Boolean _expandable; // 0x44
		::System::Boolean _isOpen; // 0x45
		::System::Boolean _exposable; // 0x46
		::System::Boolean _writable; // 0x47
		::System::Int32 _position; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM__CTOR_2_OFFSET))(this, buffer);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* buffer, ::System::Boolean writable)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM__CTOR_3_OFFSET))(this, buffer, writable);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM__CTOR_4_OFFSET))(this, buffer, index, count);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count, ::System::Boolean writable, ::System::Boolean publiclyVisible)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM__CTOR_5_OFFSET))(this, buffer, index, count, writable, publiclyVisible);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Void EnsureWriteable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_ENSUREWRITEABLE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Boolean EnsureCapacity(::System::Int32 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_ENSURECAPACITY_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_FLUSH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GETBUFFER_OFFSET))(this);
		}

		::System::Boolean TryGetBuffer(::System::ArraySegment_1<::System::Byte>& buffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_TRYGETBUFFER_OFFSET))(this, buffer);
		}

		::Il2CppArray<::System::Byte>* InternalGetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALGETBUFFER_OFFSET))(this);
		}

		::System::Int32 InternalGetPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALGETPOSITION_OFFSET))(this);
		}

		::System::Int32 InternalReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALREADINT32_OFFSET))(this);
		}

		::System::Int32 InternalEmulateRead(::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALEMULATEREAD_OFFSET))(this, count);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, ::System::Int32 bufferSize, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_COPYTOASYNC_OFFSET))(this, destination, bufferSize, cancellationToken);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin loc)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SEEK_OFFSET))(this, offset, loc);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* ToArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_TOARRAY_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITEASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Void WriteTo(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITETO_OFFSET))(this, stream);
		}
	};
}
