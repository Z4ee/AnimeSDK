#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Compression/CompressionLevel.h"
#include "unitysdk/System/IO/Compression/CompressionMode.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO::Compression { class DeflateStream; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x186AEA50)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x186AEBA0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_CHECKDEFLATESTREAM_OFFSET UNITYSDK_OFFSET(0x186AE910)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x186AED80)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186AED00)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x186AEB30)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x186AEC80)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x186AE8F0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x186AE750)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x186AE7F0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x186AE7A0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x186AE800)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x186AE850)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x186AEAD0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x186AE9D0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x186AEB80)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x186AE930)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x186AE980)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x186AE8A0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_THROWSTREAMCLOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x186AEDA0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x186AEC20)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x186AECE0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186AE620)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186AE690)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x186AE6F0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x186AE5C0)

namespace System::IO::Compression
{
	inline static constexpr unsigned int GZipStream_TypeDefinitionIndex = 2704;

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

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_OFFSET))(this, array, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_OFFSET))(this, array, offset, count, cancellationToken);
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
