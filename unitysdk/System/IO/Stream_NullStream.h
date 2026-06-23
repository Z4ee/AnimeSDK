#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_STREAM_NULLSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1C1A62A0)
#define SYSTEM_IO_STREAM_NULLSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1C1A6330)
#define SYSTEM_IO_STREAM_NULLSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1A61F0)
#define SYSTEM_IO_STREAM_NULLSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1C1A62B0)
#define SYSTEM_IO_STREAM_NULLSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1C1A6340)
#define SYSTEM_IO_STREAM_NULLSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x1C1A6210)
#define SYSTEM_IO_STREAM_NULLSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C1A6200)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1C1A6190)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1C1A61B0)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1C1A61A0)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C1A61C0)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C1A61D0)
#define SYSTEM_IO_STREAM_NULLSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x1C1A63D0)
#define SYSTEM_IO_STREAM_NULLSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1C1A6500)
#define SYSTEM_IO_STREAM_NULLSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C1A63C0)
#define SYSTEM_IO_STREAM_NULLSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1C1A65C0)
#define SYSTEM_IO_STREAM_NULLSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C1A65D0)
#define SYSTEM_IO_STREAM_NULLSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C1A61E0)
#define SYSTEM_IO_STREAM_NULLSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1C1A6520)
#define SYSTEM_IO_STREAM_NULLSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1C1A65B0)
#define SYSTEM_IO_STREAM_NULLSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C1A6510)
#define SYSTEM_IO_STREAM_NULLSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A6140)

namespace System::IO
{
	inline static constexpr unsigned int Stream_NullStream_TypeDefinitionIndex = 653;

	class Stream_NullStream : public ::System::IO::Stream
	{
	public:
		static ::System::Threading::Tasks::Task_1<::System::Int32>** StaticGet_s_nullReadTask()
		{
			return (::System::Threading::Tasks::Task_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Stream_NullStream_TypeDefinitionIndex)->GetStaticField(0xC90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_READASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_WRITEASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_SETLENGTH_OFFSET))(this, length);
		}
	};
}
