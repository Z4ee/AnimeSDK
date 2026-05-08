#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Compression/CompressionLevel.h"
#include "unitysdk/System/IO/Compression/CompressionMode.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO::Compression { class DeflateStream; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x19E2BF40)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x19E2C1E0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_CHECKDEFLATESTREAM_OFFSET UNITYSDK_OFFSET(0x19E2BE60)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x19E2C6D0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_COPYTO_OFFSET UNITYSDK_OFFSET(0x19E2C490)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E2C4B0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x19E2C0B0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x19E2C350)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x19E2C6B0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x19E2BE40)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x19E2C530)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x19E2BCA0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x19E2BD40)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x19E2BCF0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19E2BD50)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x19E2BDA0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_1_OFFSET UNITYSDK_OFFSET(0x19E2C550)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x19E2C010)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x19E2BF20)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READ_1_OFFSET UNITYSDK_OFFSET(0x19E2C140)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x19E2C120)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x19E2BE80)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x19E2BED0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x19E2BDF0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_THROWSTREAMCLOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19E2C6F0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_1_OFFSET UNITYSDK_OFFSET(0x19E2C600)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x19E2C2B0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITE_1_OFFSET UNITYSDK_OFFSET(0x19E2C3F0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x19E2C3D0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E2BAF0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19E2BB80)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19E2BC10)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2BA60)

namespace System::IO::Compression
{
	inline static constexpr unsigned int GZipStream_TypeDefinitionIndex = 3243;

	class GZipStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Compression::DeflateStream* _deflateStream; // 0x28

		::System::Void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_OFFSET))(this, stream, mode);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_1_OFFSET))(this, stream, mode, leaveOpen);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionLevel))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_2_OFFSET))(this, stream, compressionLevel);
		}

		::System::Void _ctor_3(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_3_OFFSET))(this, stream, compressionLevel, leaveOpen);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READBYTE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINREAD_OFFSET))(this, array, offset, count, asyncCallback, asyncState);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READ_OFFSET))(this, array, offset, count);
		}

		::System::Int32 Read_1(::System::Span_1<::System::Byte> destination)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READ_1_OFFSET))(this, destination);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINWRITE_OFFSET))(this, array, offset, count, asyncCallback, asyncState);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITE_OFFSET))(this, array, offset, count);
		}

		::System::Void Write_1(::System::ReadOnlySpan_1<::System::Byte> source)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITE_1_OFFSET))(this, source);
		}

		::System::Void CopyTo(::System::IO::Stream* destination, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_COPYTO_OFFSET))(this, destination, bufferSize);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_OFFSET))(this, array, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::ValueTask_1<::System::Int32> ReadAsync_1(::System::Memory_1<::System::Byte> destination, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Int32>(*)(::PVOID, ::System::Memory_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_1_OFFSET))(this, destination, cancellationToken);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_OFFSET))(this, array, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::Task* WriteAsync_1(::System::ReadOnlyMemory_1<::System::Byte> source, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::ReadOnlyMemory_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_1_OFFSET))(this, source, cancellationToken);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, ::System::Int32 bufferSize, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_COPYTOASYNC_OFFSET))(this, destination, bufferSize, cancellationToken);
		}

		::System::Void CheckDeflateStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_CHECKDEFLATESTREAM_OFFSET))(this);
		}

		static ::System::Void ThrowStreamClosedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_THROWSTREAMCLOSEDEXCEPTION_OFFSET))();
		}
	};
}
