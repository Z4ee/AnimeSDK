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
namespace System::IO::Compression { class DeflateStreamNative; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1D618A10)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1D618CB0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D618240)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1D618F50)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1D619080)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D618940)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x1D619240)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1D6185B0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1D619250)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1D618900)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D619260)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D6192B0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READASYNCMEMORY_OFFSET UNITYSDK_OFFSET(0x1D6182F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READCORE_OFFSET UNITYSDK_OFFSET(0x1D618340)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6182A0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1D618390)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1D6191A0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1D6191F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D619300)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEASYNCMEMORY_OFFSET UNITYSDK_OFFSET(0x1D618640)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITECORE_OFFSET UNITYSDK_OFFSET(0x1D618690)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6185F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1D6186E0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D618190)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D6181B0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D618070)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D6181D0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D618200)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D618220)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1D6181F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D618050)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStream_TypeDefinitionIndex = 3243;

	class DeflateStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Compression::DeflateStreamNative* native; // 0x28
		::System::IO::Stream* base_stream; // 0x30
		::System::Boolean disposed; // 0x38
		::System::Boolean leaveOpen; // 0x39
		::System::IO::Compression::CompressionMode mode; // 0x3C

		::System::Void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_OFFSET))(this, stream, mode);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_1_OFFSET))(this, stream, mode, leaveOpen);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, ::System::Boolean leaveOpen, ::System::Int32 windowsBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_2_OFFSET))(this, stream, mode, leaveOpen, windowsBits);
		}

		::System::Void _ctor_3(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode, ::System::Boolean leaveOpen, ::System::Boolean gzip)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_3_OFFSET))(this, compressedStream, mode, leaveOpen, gzip);
		}

		::System::Void _ctor_4(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionLevel))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_4_OFFSET))(this, stream, compressionLevel);
		}

		::System::Void _ctor_5(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_5_OFFSET))(this, stream, compressionLevel, leaveOpen);
		}

		::System::Void _ctor_6(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, ::System::Boolean leaveOpen, ::System::Int32 windowsBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionLevel, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_6_OFFSET))(this, stream, compressionLevel, leaveOpen, windowsBits);
		}

		::System::Void _ctor_7(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, ::System::Boolean leaveOpen, ::System::Boolean gzip)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionLevel, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_7_OFFSET))(this, stream, compressionLevel, leaveOpen, gzip);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Int32 ReadInternal(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READINTERNAL_OFFSET))(this, array, offset, count);
		}

		::System::Threading::Tasks::ValueTask_1<::System::Int32> ReadAsyncMemory(::System::Memory_1<::System::Byte> destination, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Int32>(*)(::PVOID, ::System::Memory_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READASYNCMEMORY_OFFSET))(this, destination, cancellationToken);
		}

		::System::Int32 ReadCore(::System::Span_1<::System::Byte> destination)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READCORE_OFFSET))(this, destination);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READ_OFFSET))(this, array, offset, count);
		}

		::System::Void WriteInternal(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEINTERNAL_OFFSET))(this, array, offset, count);
		}

		::System::Threading::Tasks::Task* WriteAsyncMemory(::System::ReadOnlyMemory_1<::System::Byte> source, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::ReadOnlyMemory_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEASYNCMEMORY_OFFSET))(this, source, cancellationToken);
		}

		::System::Void WriteCore(::System::ReadOnlySpan_1<::System::Byte> source)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITECORE_OFFSET))(this, source);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITE_OFFSET))(this, array, offset, count);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_FLUSH_OFFSET))(this);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINREAD_OFFSET))(this, array, offset, count, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINWRITE_OFFSET))(this, array, offset, count, asyncCallback, asyncState);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SET_POSITION_OFFSET))(this, value);
		}
	};
}
